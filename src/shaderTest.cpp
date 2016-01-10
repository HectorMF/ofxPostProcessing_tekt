//
//  shaderTest.cpp
//  example
//
//  Created by Nicolas Peri on 12/30/15.
//
//

#include "shaderTest.h"
#include "ofMain.h"

namespace itg
{
    shaderTest::shaderTest(const ofVec2f& aspect, bool arb) : RenderPass(aspect, arb, "test")
    {
        //        string fragShaderSrc = STRINGIFY(
        //            uniform sampler2D tex;
        //            uniform float segments;
        //
        //            void main()
        //            {
        //                vec2 uv = gl_TexCoord[0].st;
        //                vec2 normed = 2.0 * uv - 1.0;
        //                float r = length(normed);
        //                float theta = atan(normed.y / abs(normed.x));
        //                theta *= segments;
        //
        //                vec2 newUv = (vec2(r * cos(theta), r * sin(theta)) + 1.0) / 2.0;
        //
        //                gl_FragColor = texture2D(tex, newUv);
        //            }
        //        );
        //
        //        shader.setupShaderFromSource(GL_FRAGMENT_SHADER, fragShaderSrc);
        //        shader.linkProgram();
        
        shader.load("PostProcessingShaders/test");
        //        shader.linkProgram();
        cout << "shader test cargado" << endl;
    }
    
    void shaderTest::render(ofFbo& readFbo, ofFbo& writeFbo, ofTexture& depth)
    {
        writeFbo.begin();
        shader.begin();
        shader.setUniformTexture("tex0", readFbo.getTextureReference(), 1);
        
        texturedQuad(0, 0, writeFbo.getWidth(), writeFbo.getHeight());
        
        shader.end();
        writeFbo.end();
    }
}
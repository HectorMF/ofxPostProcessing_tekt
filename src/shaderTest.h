//
//  shaderTest.h
//  example
//
//  Created by Nicolas Peri on 12/30/15.
//
//

#pragma once

#include "RenderPass.h"

namespace itg
{
    class shaderTest : public RenderPass
    {
    public:
        typedef shared_ptr<shaderTest> Ptr;
        
        shaderTest(const ofVec2f& aspect, bool arb);
        
        void render(ofFbo& readFbo, ofFbo& writeFbo, ofTexture& depth);
        
    private:
        ofShader shader;
    };
}



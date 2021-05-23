/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@class TDreamGLProgramHelper;

@interface TDreamProgramWrapper : NSObject

{
    int sizeUniform;
    struct CGRect outputRect;
    TDreamGLProgramHelper *filterProgram;
    int filterPositionAttribute;
    int filterTextureCoordinateAttribute;
    int filterInputTextureUniform;
    float texCoord0[8];
}

- (id)init;
- (void)setSize:(struct CGSize)arg1;
- (void)initializeAttributes;
- (id)initWithFragmentShaderFromString:(id)arg1;
- (void)setUniforms;
- (void)setInputTexture0Rect:(struct CGRect)arg1 withinRect:(struct CGRect)arg2;
- (void)renderTo:(unsigned int)arg1 from:(unsigned int)arg2;
- (void)setOutputRect:(struct CGRect)arg1;
- (id)initWithVertexShaderFromString:(id)arg1 fragmentShaderFromString:(id)arg2;
- (void)initializeTexCoord0;
- (id)initWithProgram:(id)arg1;
- (id)getProgram;

@end

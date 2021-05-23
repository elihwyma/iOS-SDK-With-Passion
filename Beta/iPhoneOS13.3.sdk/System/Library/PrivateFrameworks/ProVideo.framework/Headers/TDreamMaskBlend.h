/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/TDreamProgramWrapperTwoInput.h>

@interface TDreamMaskBlend : TDreamProgramWrapperTwoInput

{
    int filterThirdTextureCoordinateAttribute;
    int filterInputThirdTextureUniform;
}

- (void)initializeAttributes;
- (id)initWithFragmentShaderFromString:(id)arg1;
- (void)renderTo:(unsigned int)arg1 from:(unsigned int)arg2 andFrom:(unsigned int)arg3 andFrom:(unsigned int)arg4;
- (id)initWithVertexShaderFromString:(id)arg1 fragmentShaderFromString:(id)arg2;

@end

/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/TDreamProgramWrapper.h>

@interface TDreamProgramWrapperTwoInput : TDreamProgramWrapper

{
    int filterSecondTextureCoordinateAttribute;
    int filterInputTextureUniform2;
}

- (void)initializeAttributes;
- (id)initWithFragmentShaderFromString:(id)arg1;
- (void)renderTo:(unsigned int)arg1 from:(unsigned int)arg2 andFrom:(unsigned int)arg3;
- (id)initWithVertexShaderFromString:(id)arg1 fragmentShaderFromString:(id)arg2;

@end

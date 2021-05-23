/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/TDreamProgramWrapperTwoInput.h>

@interface TDreamStrokeAndBlendOpt : TDreamProgramWrapperTwoInput

{
    float oneOverSize[2];
    int oneOverSizeUniform;
}

- (id)init;
- (void)setUniforms;
- (void)setOneOverSize:(const float *)arg1;

@end

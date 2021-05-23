/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/TDreamProgramWrapperTwoInput.h>

@interface TDreamEdgesOpt : TDreamProgramWrapperTwoInput

{
    float oneOverSize[2];
    int oneOverSizeUniform;
    int radioUniform;
    double _sigma;
}

@property (nonatomic) double sigma;

- (id)init;
- (void)setUniforms;
- (void)setOneOverSize:(const float *)arg1;

@end

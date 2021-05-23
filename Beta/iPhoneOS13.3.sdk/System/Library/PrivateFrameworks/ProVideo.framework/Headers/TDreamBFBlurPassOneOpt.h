/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/TDreamProgramWrapperTwoInput.h>

@interface TDreamBFBlurPassOneOpt : TDreamProgramWrapperTwoInput

{
    float oneOverSize[2];
    int oneOverSizeUniform;
    double _sigma;
    double _sigmaColor;
}

@property (nonatomic) double sigma;
@property (nonatomic) double sigmaColor;

- (id)init;
- (void)setUniforms;
- (void)setOneOverSize:(const float *)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/TDreamProgramWrapper.h>

@interface TDreamGaussBlurExpressPassTwo : TDreamProgramWrapper

{
    float sigmaUniform;
    double _sigma;
}

@property (nonatomic) double sigma;

- (id)init;
- (void)setUniforms;

@end

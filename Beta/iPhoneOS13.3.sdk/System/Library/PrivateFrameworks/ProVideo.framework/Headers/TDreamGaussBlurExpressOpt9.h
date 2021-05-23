/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/TDreamProgramWrapper.h>

@interface TDreamGaussBlurExpressOpt9 : TDreamProgramWrapper

{
    float kernel[3];
    int kernelUniform;
    float offsets[3];
    int offsetsUniform;
}

- (id)init;
- (void)setOffsets:(const double *)arg1;
- (void)setUniforms;
- (void)setKernel:(const double *)arg1;

@end

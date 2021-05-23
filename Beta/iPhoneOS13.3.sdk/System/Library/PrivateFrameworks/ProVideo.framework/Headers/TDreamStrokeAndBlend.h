/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/TDreamProgramWrapperTwoInput.h>

@interface TDreamStrokeAndBlend : TDreamProgramWrapperTwoInput

{
    int sigmaUniform;
    double _sigma;
}

@property (nonatomic) double sigma;

- (id)init;
- (void)setUniforms;

@end

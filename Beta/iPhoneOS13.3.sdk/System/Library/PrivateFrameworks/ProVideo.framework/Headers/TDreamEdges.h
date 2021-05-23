/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/TDreamProgramWrapperTwoInput.h>

@interface TDreamEdges : TDreamProgramWrapperTwoInput

{
    int passUniform;
    int radioUniform;
    int thresholdUniform;
    int preThresholdUniform;
    int modeUniform;
    int _mode;
    double _threshold;
    double _preThreshold;
    double _sigma;
}

@property (nonatomic) double threshold;
@property (nonatomic) double preThreshold;
@property (nonatomic) double sigma;
@property (nonatomic) int mode;

- (id)init;
- (void)setUniforms;

@end

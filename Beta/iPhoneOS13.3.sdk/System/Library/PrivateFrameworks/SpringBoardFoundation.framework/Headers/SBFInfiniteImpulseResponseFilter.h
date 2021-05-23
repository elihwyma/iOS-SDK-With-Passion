/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <Foundation/NSObject.h>

@interface SBFInfiniteImpulseResponseFilter : NSObject

{
    unsigned long long _count;
    double *_ffC;
    double *_fbC;
    double *_inputHistory;
    double *_outputHistory;
    double _zeroGradientThreshold;
}

@property (nonatomic) double zeroGradientThreshold;

+ (id)lowpassInertiaFilterWithCoefficient:(double)arg1;
+ (id)lowpassFilterWithCoefficient:(double)arg1;

- (void)dealloc;
- (double)output;
- (double)outputGradient;
- (_Bool)zeroGradient;
- (double)filterWithInput:(double)arg1;
- (id)initWithCount:(unsigned long long)arg1 feedforwardCoefficients:(double *)arg2 feedbackCoefficients:(double *)arg3;
- (void)setLowpassInertiaFilterCoefficient:(double)arg1;
- (void)resetToValue:(double)arg1;

@end

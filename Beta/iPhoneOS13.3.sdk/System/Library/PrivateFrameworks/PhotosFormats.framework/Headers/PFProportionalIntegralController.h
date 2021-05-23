/*
 Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface PFProportionalIntegralController : NSObject

{
    _Bool _outputReady;
    long long _setPoint;
    long long _integralError;
    long long _integralErrorMin;
    long long _integralErrorMax;
    double _proportionalGain;
    double _integralGain;
    long long _output;
    long long _outputMin;
    long long _outputMax;
    NSMutableArray *_statistics;
}

@property long long setPoint;
@property long long integralError;
@property long long integralErrorMin;
@property long long integralErrorMax;
@property double proportionalGain;
@property double integralGain;
@property long long output;
@property long long outputMin;
@property long long outputMax;
@property (retain) NSMutableArray *statistics;
@property _Bool outputReady;

- (id)initWithSetPoint:(long long)arg1;
- (void)updateWithTimestamp:(double)arg1 error:(long long)arg2 feedback:(long long)arg3;
- (void)addStatisticsSampleForTimestamp:(double)arg1 error:(long long)arg2 feedback:(long long)arg3;
- (void)enumerateStatisticsMeasurementsWithHandler:(CDUnknownBlockType)arg1;
- (id)statisticsDescription;

@end

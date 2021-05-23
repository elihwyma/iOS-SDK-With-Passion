/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIMotionEffectEngineLogger : NSObject

{
    long long _motionLevelSamples[8];
    long long _sampleCount;
    long long _updateFreqency;
    double _lastUpdateTimeStamp;
}

- (void)recordMotionMagnitude:(double)arg1 atTimestamp:(double)arg2;
- (void)_dumpToAggregated;
- (id)initWithFastUpdateInterval:(double)arg1 slowUpdateInterval:(double)arg2;

@end

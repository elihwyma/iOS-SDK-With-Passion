/*
 Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

#import <Foundation/NSObject.h>

@class ATMovingAverage;

@interface ATThroughputCalculator : NSObject

{
    _Bool _suspended;
    double _lastUpdate;
    double _startTime;
    double _currentValue;
    ATMovingAverage *_average;
}

@property (nonatomic, readonly) double throughput;

- (id)init;
- (void)resume;
- (void)suspend;
- (_Bool)update:(double)arg1;

@end

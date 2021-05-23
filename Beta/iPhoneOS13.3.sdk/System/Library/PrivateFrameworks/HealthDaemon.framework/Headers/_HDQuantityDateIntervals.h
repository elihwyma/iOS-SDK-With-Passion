/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface _HDQuantityDateIntervals : NSObject

{
    double _currentStartInterval;
    double _currentEndInterval;
    long long _currentPairIndex;
    NSMutableArray *_intervalPairs;
}

- (id)init;
- (_Bool)insideRanges:(double)arg1;
- (void)addDateRangeFrom:(double)arg1 to:(double)arg2;

@end

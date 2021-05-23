/*
 Image: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableSet;

@interface MTUIBedtimeGraphColumnData : NSObject

{
    NSMutableSet *_intervals;
}

@property (retain, nonatomic) NSMutableSet *intervals;
@property (nonatomic, readonly) long long intervalCount;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;

- (id)init;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)addInterval:(id)arg1;
- (id)orderedIntervals;

@end

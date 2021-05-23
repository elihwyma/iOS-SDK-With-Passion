/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSDate.h>

@interface NSDate (CDRound)

- (id)cd_dateWithCeilingForAlignment:(double)arg1 withOffset:(double)arg2 inTimeZone:(id)arg3;
- (id)cd_dateWithFloorForAlignment:(double)arg1;
- (id)cd_dateWithCeilingForAlignment:(double)arg1;
- (id)cd_dateWithFloorForAlignment:(double)arg1 withOffset:(double)arg2 inTimeZone:(id)arg3;
- (id)dk_localtimeString;
- (double)timeSinceMidnight:(id *)arg1;
- (id)floorDateWithTotalSlotsInDay:(int)arg1;
- (int)slotFromMidnightWithTotalSlotsInDay:(int)arg1;
- (id)dedup;

@end

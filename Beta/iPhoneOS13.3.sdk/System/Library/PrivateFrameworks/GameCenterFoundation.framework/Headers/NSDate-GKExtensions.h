/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSDate.h>

@interface NSDate (GKExtensions)

+ (id)_gkFormattedTimeIntervalStringWithStartDate:(id)arg1 endDate:(id)arg2 calendarUnits:(unsigned long long)arg3 style:(long long)arg4;
+ (id)_gkServerTimestamp;
+ (id)_gkDateFromScalarServerTimestamp:(unsigned long long)arg1;
+ (id)_gkDateFromServerTimestamp:(id)arg1;

- (id)_gkFormattedWhenStringWithOptions:(unsigned long long)arg1;
- (id)_gkFormattedDateForStyle:(unsigned long long)arg1 relative:(_Bool)arg2;
- (id)_gkFormattedStringWithDateStyle:(unsigned long long)arg1 timeStyle:(unsigned long long)arg2;
- (id)_gkServerTimestamp;

@end

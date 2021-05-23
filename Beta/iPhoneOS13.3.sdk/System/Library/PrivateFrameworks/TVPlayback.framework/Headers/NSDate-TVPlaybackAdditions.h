/*
 Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
 */

#import <Foundation/NSDate.h>

@interface NSDate (TVPlaybackAdditions)

+ (id)tvp_dateWithMillisecondsSince1970:(id)arg1;
+ (_Bool)tvp_networkTimeIsApproximatelyCorrect;

- (id)tvp_dateByAddingDays:(long long)arg1;
- (_Bool)_isEqualToDateIgnoringTime:(id)arg1;
- (id)tvp_dateBySubtractingDays:(long long)arg1;
- (id)tvp_dateFlooredToNearestMinute:(int)arg1;
- (id)tvp_dateCeiledToNearestMinute:(int)arg1;
- (_Bool)tvp_isToday;
- (_Bool)tvp_isTomorrow;
- (_Bool)tvp_isYesterday;

@end

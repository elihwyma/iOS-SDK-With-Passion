/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <Foundation/NSDate.h>

@interface NSDate (IMKeyValueCollectionUserDefaultsStorage)

+ (id)__im_dateWithCurrentServerTime;
+ (_Bool)useCourierTime;
+ (id)__im_dateWithNanosecondTimeIntervalSinceReferenceDate:(long long)arg1;

- (_Bool)isToday;
- (_Bool)isArchivable_im;
- (long long)__im_nanosecondTimeInterval;
- (long long)__im_nanosecondTimeIntervalSinceEpochTime;
- (long long)differenceFromDate:(id)arg1;
- (long long)hoursDifferenceFromDate:(id)arg1;
- (long long)minutesDifferenceFromDate:(id)arg1;

@end

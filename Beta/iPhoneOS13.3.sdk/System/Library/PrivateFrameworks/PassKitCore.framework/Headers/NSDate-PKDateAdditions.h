/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSDate.h>

@interface NSDate (PKDateAdditions)

+ (id)dateWithDaysFromNow:(unsigned long long)arg1;
+ (id)dateWithDaysBeforeNow:(unsigned long long)arg1;
+ (id)dateForTomorrow;
+ (id)dateForYesterday;

- (_Bool)isToday;
- (_Bool)isDateEqualToDateIgnoringTime:(id)arg1;
- (_Bool)isTomorrow;
- (_Bool)isYesterday;

@end

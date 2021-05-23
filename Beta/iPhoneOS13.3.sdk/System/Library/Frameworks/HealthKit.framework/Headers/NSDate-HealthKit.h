/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSDate.h>

@interface NSDate (HealthKit)

+ (id)hk_dateWithNanosecondsSince1970:(long long)arg1;

- (_Bool)hk_isBeforeDate:(id)arg1;
- (_Bool)hk_isBeforeOrEqualToDate:(id)arg1;
- (_Bool)hk_isAfterDate:(id)arg1;
- (_Bool)hk_isAfterOrEqualToDate:(id)arg1;
- (id)hk_rfc3339String;
- (id)hk_nearestDate:(id)arg1;
- (id)hk_truncateToDay;
- (long long)hk_nanosecondsSince1970;

@end

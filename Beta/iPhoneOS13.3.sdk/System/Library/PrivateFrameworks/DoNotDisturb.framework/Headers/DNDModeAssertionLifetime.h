/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
 */

#import <NSObject.h>

@interface DNDModeAssertionLifetime : NSObject

@property (nonatomic, readonly) unsigned long long lifetimeType;

+ (_Bool)supportsSecureCoding;
+ (id)lifetimeWithDateInterval:(id)arg1;
+ (id)lifetimeWithDuration:(double)arg1;
+ (id)lifetimeWithCurrentLocation;
+ (id)lifetimeUntilEndOfCalendarEventWithUniqueID:(id)arg1 occurrenceDate:(id)arg2;
+ (id)lifetimeWithCalendarEventUniqueID:(id)arg1 occurrenceDate:(id)arg2;
+ (id)lifetimeMatchingScheduleWithIdentifier:(id)arg1;
+ (id)lifetimeUntilEndOfScheduleWithIdentifier:(id)arg1;
+ (id)lifetimeForUserRequest;
+ (id)_secureCodingLifetimeClasses;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;

@end

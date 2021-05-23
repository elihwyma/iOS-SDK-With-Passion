/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
 */

#import <DoNotDisturb/DNDModeAssertionLifetime.h>

@class NSDateInterval;

@interface DNDModeAssertionDateIntervalLifetime : DNDModeAssertionLifetime

{
    NSDateInterval *_dateInterval;
}

@property (copy, nonatomic, readonly) NSDateInterval *dateInterval;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDateInterval:(id)arg1;
- (_Bool)isActiveForDate:(id)arg1;
- (unsigned long long)lifetimeType;

@end

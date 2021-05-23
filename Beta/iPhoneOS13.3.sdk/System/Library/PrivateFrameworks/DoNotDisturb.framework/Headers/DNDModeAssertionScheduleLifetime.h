/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
 */

#import <DoNotDisturb/DNDModeAssertionLifetime.h>

@class NSString;

@interface DNDModeAssertionScheduleLifetime : DNDModeAssertionLifetime

{
    NSString *_scheduleIdentifier;
    unsigned long long _behavior;
}

@property (copy, nonatomic, readonly) NSString *scheduleIdentifier;
@property (nonatomic, readonly) unsigned long long behavior;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)lifetimeType;
- (id)initWithScheduleIdentifier:(id)arg1 behavior:(unsigned long long)arg2;

@end

/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
 */

#import <DoNotDisturb/DNDModeAssertionLifetime.h>

@interface DNDModeAssertionLocationLifetime : DNDModeAssertionLifetime

+ (id)sharedInstance;
+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)awakeAfterUsingCoder:(id)arg1;
- (unsigned long long)lifetimeType;

@end

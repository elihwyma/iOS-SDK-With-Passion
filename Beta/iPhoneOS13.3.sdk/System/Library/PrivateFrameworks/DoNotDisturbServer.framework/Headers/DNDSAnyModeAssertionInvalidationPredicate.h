/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <DoNotDisturbServer/DNDSModeAssertionInvalidationPredicate.h>

@interface DNDSAnyModeAssertionInvalidationPredicate : DNDSModeAssertionInvalidationPredicate

+ (id)sharedInstance;
+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)predicateType;

@end

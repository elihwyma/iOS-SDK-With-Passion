/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <DoNotDisturbServer/DNDSModeAssertionInvalidationPredicate.h>

@class NSArray;

@interface DNDSModeAssertionClientIdentifierInvalidationPredicate : DNDSModeAssertionInvalidationPredicate

{
    NSArray *_clientIdentifiers;
}

@property (copy, nonatomic, readonly) NSArray *clientIdentifiers;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;
- (unsigned long long)predicateType;
- (id)initWithClientIdentifiers:(id)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <DoNotDisturbServer/DNDSModeAssertionInvalidationPredicate.h>

@class NSDate;

@interface DNDSModeAssertionDateInvalidationPredicate : DNDSModeAssertionInvalidationPredicate

{
    NSDate *_date;
}

@property (copy, nonatomic, readonly) NSDate *date;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1;
- (_Bool)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;
- (unsigned long long)predicateType;

@end

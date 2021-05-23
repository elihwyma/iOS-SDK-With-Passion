/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <Foundation/NSPredicate.h>

@interface DNDSModeAssertionInvalidationPredicate : NSPredicate

@property (nonatomic, readonly) unsigned long long predicateType;

+ (id)predicateForAnyAssertion;
+ (id)predicateForAssertionClientIdentifiers:(id)arg1;
+ (id)predicateForAssertionsTakenBeforeDate:(id)arg1;
+ (id)predicateForAssertionUUIDs:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_init;
- (_Bool)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;

@end

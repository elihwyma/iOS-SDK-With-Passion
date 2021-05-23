/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@interface NURule : NSObject

{
    long long _salience;
}

@property (nonatomic) long long salience;

+ (_Bool)supportsSecureCoding;
+ (id)ruleWithPredicate:(id)arg1 assertingFact:(id)arg2 grade:(double)arg3;
+ (id)ruleWithPredicate:(id)arg1 retractingFact:(id)arg2 grade:(double)arg3;
+ (id)ruleWithBlockPredicate:(CDUnknownBlockType)arg1 action:(CDUnknownBlockType)arg2;
+ (id)ruleWithPredicate:(id)arg1 action:(CDUnknownBlockType)arg2;
+ (id)ruleWithTarget:(id)arg1 predicate:(SEL)arg2 action:(SEL)arg3;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)evaluatePredicateWithSystem:(id)arg1;
- (void)performActionWithSystem:(id)arg1;

@end

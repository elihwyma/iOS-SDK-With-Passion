/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NURule.h>

@interface NUTargetSelectorRule : NURule

{
    CDUnknownFunctionPointerType _predicate;
    CDUnknownFunctionPointerType _action;
    id _target;
    SEL _predicateSelector;
    SEL _actionSelector;
}

@property (weak, nonatomic, readonly) id target;
@property (nonatomic, readonly) SEL predicateSelector;
@property (nonatomic, readonly) SEL actionSelector;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)evaluatePredicateWithSystem:(id)arg1;
- (void)performActionWithSystem:(id)arg1;
- (id)initWithTarget:(id)arg1 predicate:(SEL)arg2 action:(SEL)arg3;
- (_Bool)_defaultPredicate:(id)arg1;
- (void)_defaultAction:(id)arg1;

@end

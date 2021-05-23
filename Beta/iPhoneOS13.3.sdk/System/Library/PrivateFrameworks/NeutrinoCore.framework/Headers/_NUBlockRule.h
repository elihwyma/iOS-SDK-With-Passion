/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NURule.h>

@interface _NUBlockRule : NURule

{
    CDUnknownBlockType _predicate;
    CDUnknownBlockType _action;
}

- (_Bool)evaluatePredicateWithSystem:(id)arg1;
- (void)performActionWithSystem:(id)arg1;
- (id)initWithPredicate:(CDUnknownBlockType)arg1 action:(CDUnknownBlockType)arg2;

@end

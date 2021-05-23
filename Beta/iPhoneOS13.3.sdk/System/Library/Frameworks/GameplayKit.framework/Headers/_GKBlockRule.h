/*
 Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

#import <GameplayKit/GKRule.h>

__attribute__((visibility("hidden")))
@interface _GKBlockRule : GKRule

{
    CDUnknownBlockType _predicate;
    CDUnknownBlockType _action;
}

- (_Bool)evaluatePredicateWithSystem:(id)arg1;
- (void)performActionWithSystem:(id)arg1;
- (id)initWithPredicate:(CDUnknownBlockType)arg1 action:(CDUnknownBlockType)arg2;

@end

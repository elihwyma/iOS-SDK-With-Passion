/*
 Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

#import <GameplayKit/GKNSPredicateRule.h>

@protocol NSObject;

__attribute__((visibility("hidden")))
@interface _GKNSPredicateRule : GKNSPredicateRule

{
    id <NSObject> _fact;
    float _grade;
    _Bool _asserting;
}

- (void)performActionWithSystem:(id)arg1;
- (id)initWithPredicate:(id)arg1 fact:(id)arg2 grade:(float)arg3 asserting:(_Bool)arg4;

@end

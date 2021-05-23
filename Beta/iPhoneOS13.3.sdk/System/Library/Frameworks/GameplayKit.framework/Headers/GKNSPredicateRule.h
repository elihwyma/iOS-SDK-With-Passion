/*
 Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

#import <GameplayKit/GKRule.h>

@class NSPredicate;

@interface GKNSPredicateRule : GKRule

{
    NSPredicate *_predicate;
}

@property (retain, nonatomic, readonly) NSPredicate *predicate;

- (id)initWithPredicate:(id)arg1;
- (_Bool)evaluatePredicateWithSystem:(id)arg1;

@end

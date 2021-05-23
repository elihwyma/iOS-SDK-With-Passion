/*
 Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

#import <Foundation/NSObject.h>

@interface GKRule : NSObject

{
    long long _salience;
}

@property (nonatomic) long long salience;

+ (id)ruleWithPredicate:(id)arg1 assertingFact:(id)arg2 grade:(float)arg3;
+ (id)ruleWithPredicate:(id)arg1 retractingFact:(id)arg2 grade:(float)arg3;
+ (id)ruleWithBlockPredicate:(CDUnknownBlockType)arg1 action:(CDUnknownBlockType)arg2;

- (_Bool)evaluatePredicateWithSystem:(id)arg1;
- (void)performActionWithSystem:(id)arg1;

@end

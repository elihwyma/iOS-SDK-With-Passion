/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/_HKCFGExpression.h>

@class NSCharacterSet, NSMutableArray, NSString;

@interface _HKCFGNonTerminal : _HKCFGExpression

{
    NSString *_label;
    NSMutableArray *_replacementRules;
    NSCharacterSet *_charactersToBeSkipped;
}

@property (copy, nonatomic) NSCharacterSet *charactersToBeSkipped;

+ (id)nonTerminalWithLabel:(id)arg1;

- (void)_invalidate;
- (id)_label;
- (id)initWithLabel:(id)arg1;
- (unsigned long long)_minimumLength;
- (void)_tryNodesWithContext:(id)arg1 solutionTest:(CDUnknownBlockType)arg2;
- (_Bool)_tryNodesForExpressions:(id)arg1 nodes:(id)arg2 context:(id)arg3 solutionTest:(CDUnknownBlockType)arg4;
- (void)_checkForCycles:(id)arg1;
- (void)addReplacementRuleWithExpressions:(id)arg1 nodeEvaluator:(CDUnknownBlockType)arg2;
- (id)_parseTreeWithContext:(id)arg1;
- (id)_replacementRules;
- (void)_checkForCycles;

@end

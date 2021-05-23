/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class NSCharacterSet, NSMutableSet, _HKCFGNonTerminal;

@interface _HKContextFreeGrammar : NSObject

{
    NSMutableSet *_nonTerminals;
    NSMutableSet *_terminals;
    NSCharacterSet *_terminalCharacters;
    _HKCFGNonTerminal *_rootNonTerminal;
    CDUnknownBlockType _emptyStringEvaluator;
}

@property (nonatomic, readonly) _HKCFGNonTerminal *rootNonTerminal;
@property (copy, nonatomic, readonly) CDUnknownBlockType emptyStringEvaluator;

+ (id)grammarWithRootNonTerminal:(id)arg1 emptyStringEvaluator:(CDUnknownBlockType)arg2;
+ (id)grammarWithRootNonTerminal:(id)arg1;

- (void)invalidate;
- (id)initWithRootNonTerminal:(id)arg1 emptyStringEvaluator:(CDUnknownBlockType)arg2;
- (void)_gatherExpressions;
- (void)_gatherExpressionsStartingAt:(id)arg1;
- (id)parseTreeForString:(id)arg1;

@end

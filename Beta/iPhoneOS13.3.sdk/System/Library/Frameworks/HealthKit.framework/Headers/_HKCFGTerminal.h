/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/_HKCFGExpression.h>

@interface _HKCFGTerminal : _HKCFGExpression

+ (id)terminalMatchingString:(id)arg1;
+ (id)terminalMatchingString:(id)arg1 caseSensitive:(_Bool)arg2;
+ (id)terminalMatchingCharacterInSet:(id)arg1;
+ (id)_terminalMatchingIntegerWithCondition:(CDUnknownBlockType)arg1;
+ (id)_terminalMatchingDoubleWithCondition:(CDUnknownBlockType)arg1;
+ (id)terminalMatchingCharacterInString:(id)arg1;
+ (id)terminalMatchingAnyInteger;
+ (id)terminalMatchingIntegerWithCondition:(CDUnknownBlockType)arg1;
+ (id)terminalMatchingAnyDouble;
+ (id)terminalMatchingDoubleWithCondition:(CDUnknownBlockType)arg1;
+ (id)terminalMatchingSequenceOfCharactersInSet:(id)arg1;

- (id)_label;
- (id)characterSet;
- (unsigned long long)_minimumLength;
- (void)_tryNodesWithContext:(id)arg1 solutionTest:(CDUnknownBlockType)arg2;
- (_Bool)_scanValue:(id *)arg1 withScanner:(id)arg2;

@end

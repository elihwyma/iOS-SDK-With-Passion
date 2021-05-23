/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <ScreenReaderCore/SCRCMathSimpleExpression.h>

__attribute__((visibility("hidden")))
@interface SCRCMathOperatorExpression : SCRCMathSimpleExpression

{
    unsigned short _operatorChar;
}

@property (nonatomic, readonly) unsigned short operatorChar;

- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)mathMLString;
- (id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(_Bool)arg2;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2;
- (_Bool)canBeUsedWithRange;
- (_Bool)isNaturalSuperscript;
- (_Bool)isEllipsis;
- (_Bool)isTermSeparator;
- (_Bool)isOperationSymbol;
- (_Bool)isFenceDelimiter;
- (id)latexFormatStringAsOver;
- (_Bool)_isIntegral;
- (_Bool)_isUnionOrIntersection;
- (_Bool)_isSummation;
- (_Bool)_isRingOperator;
- (_Bool)_isInvisibleCharacter;
- (_Bool)_isMinusSign;

@end

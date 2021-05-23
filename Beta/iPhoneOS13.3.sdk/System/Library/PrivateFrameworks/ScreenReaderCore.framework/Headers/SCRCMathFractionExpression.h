/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <ScreenReaderCore/SCRCMathExpression.h>

__attribute__((visibility("hidden")))
@interface SCRCMathFractionExpression : SCRCMathExpression

{
    SCRCMathExpression *_numerator;
    SCRCMathExpression *_denominator;
    SCRCMathExpression *_operator;
    double _lineThickness;
}

@property (retain, nonatomic) SCRCMathExpression *numerator;
@property (retain, nonatomic) SCRCMathExpression *denominator;
@property (retain, nonatomic) SCRCMathExpression *operator;
@property (nonatomic) double lineThickness;

- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)mathMLString;
- (id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(_Bool)arg2;
- (id)speakableSegmentsWithSpeakingStyle:(long long)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3;
- (id)subExpressions;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2;
- (id)latexMathModeDescription;
- (unsigned long long)fractionLevel;
- (id)speakableDescriptionAsBinomialCoefficientWithSpeakingStyle:(long long)arg1;
- (id)dollarCodeDescriptionAsMixedNumberFractionWithTreePosition:(id)arg1;
- (id)dollarCodeDescriptionAsBinomialCoefficientWithTreePosition:(id)arg1 numberOfOuterRadicals:(unsigned long long)arg2;
- (id)speakableSegmentsAsBinomialCoefficientWithSpeakingStyle:(long long)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3;
- (_Bool)isSimpleNumericalFraction;
- (_Bool)isUnlinedFraction;
- (id)_speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(_Bool)arg2 asBinomialCoefficient:(_Bool)arg3;
- (id)_speakableSegmentsWithSpeakingStyle:(long long)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3 asBinomialCoefficient:(_Bool)arg4;
- (id)_dollarCodeDescriptionAsBinomialCoefficient:(_Bool)arg1 orMixedNumberFraction:(_Bool)arg2 withNumberOfOuterRadicals:(unsigned long long)arg3 treePosition:(id)arg4;

@end

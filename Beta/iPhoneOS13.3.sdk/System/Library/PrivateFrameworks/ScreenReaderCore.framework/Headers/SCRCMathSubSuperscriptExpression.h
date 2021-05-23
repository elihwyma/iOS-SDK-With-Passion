/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <ScreenReaderCore/SCRCMathExpression.h>

__attribute__((visibility("hidden")))
@interface SCRCMathSubSuperscriptExpression : SCRCMathExpression

{
    SCRCMathExpression *_base;
    SCRCMathExpression *_subscript;
    SCRCMathExpression *_superscript;
}

@property (retain, nonatomic) SCRCMathExpression *base;
@property (retain, nonatomic) SCRCMathExpression *subscript;
@property (retain, nonatomic) SCRCMathExpression *superscript;

- (id)description;
- (id)initWithDictionary:(id)arg1;
- (_Bool)isNumber;
- (id)mathMLString;
- (id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(_Bool)arg2;
- (id)speakableSegmentsWithSpeakingStyle:(long long)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3;
- (id)subExpressions;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2;
- (id)latexMathModeDescription;
- (unsigned long long)fractionLevel;
- (_Bool)isRangeSubSuperscript;
- (_Bool)isBaseSubSuperscript;
- (id)_stringToAddForSuperscript:(id)arg1 withPriorDescription:(id)arg2 updatedDescription:(id *)arg3;

@end

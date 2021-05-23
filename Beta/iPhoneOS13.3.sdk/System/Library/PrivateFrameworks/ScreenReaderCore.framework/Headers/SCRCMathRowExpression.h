/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <ScreenReaderCore/SCRCMathArrayExpression.h>

__attribute__((visibility("hidden")))
@interface SCRCMathRowExpression : SCRCMathArrayExpression

- (long long)integerValue;
- (_Bool)isNumber;
- (_Bool)isInteger;
- (id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(_Bool)arg2;
- (id)childSpeakableSegmentsWithSpeakingStyle:(long long)arg1 upToDepth:(unsigned long long)arg2 parentTreePosition:(id)arg3 childIndex:(unsigned long long *)arg4;
- (id)mathMLTag;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2;
- (id)latexDescriptionInMathMode:(_Bool)arg1;
- (unsigned long long)fractionLevel;
- (id)speakableSummary;
- (_Bool)canBeUsedWithRange;
- (_Bool)canBeUsedWithBase;
- (_Bool)isFunctionName;
- (_Bool)isWordOrAbbreviation;
- (_Bool)beginsWithSpace;
- (_Bool)endsWithSpace;
- (id)_indexesOfCharactersInWords;
- (void)_addSpacingAndChild:(id)arg1 toResult:(id)arg2 nextChild:(id)arg3 previousChild:(id)arg4 numberOfOuterRadicals:(unsigned long long)arg5 treePosition:(id)arg6;

@end

/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <ScreenReaderCore/SCRCMathArrayExpression.h>

__attribute__((visibility("hidden")))
@interface SCRCMathTableExpression : SCRCMathArrayExpression

- (unsigned long long)_numberOfColumns;
- (id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(_Bool)arg2;
- (id)speakableSegmentsWithSpeakingStyle:(long long)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3;
- (id)mathMLTag;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2;
- (unsigned long long)numberOfTables;
- (id)latexDescriptionInMathMode:(_Bool)arg1;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2 openOperator:(id)arg3 openOperatorTreePosition:(id)arg4 closeOperator:(id)arg5 closeOperatorTreePosition:(id)arg6;
- (_Bool)isMultiRowTable;
- (_Bool)canBeWrappedInLatexMathIndicators;

@end

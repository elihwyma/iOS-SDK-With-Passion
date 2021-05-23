/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <ScreenReaderCore/SCRCMathArrayExpression.h>

__attribute__((visibility("hidden")))
@interface SCRCMathTableRowExpression : SCRCMathArrayExpression

- (id)mathMLTag;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2;
- (id)latexDescriptionInMathMode:(_Bool)arg1;
- (_Bool)canBeWrappedInLatexMathIndicators;

@end

/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <ScreenReaderCore/SCRCMathExpression.h>

__attribute__((visibility("hidden")))
@interface SCRCMathRadicalExpression : SCRCMathExpression

{
    SCRCMathExpression *_radicand;
    SCRCMathExpression *_rootIndex;
}

@property (retain, nonatomic) SCRCMathExpression *radicand;
@property (retain, nonatomic) SCRCMathExpression *rootIndex;

- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)mathMLString;
- (id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(_Bool)arg2;
- (id)speakableSegmentsWithSpeakingStyle:(long long)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3;
- (id)subExpressions;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2;
- (id)latexMathModeDescription;
- (unsigned long long)fractionLevel;
- (_Bool)_isSquareRoot;
- (_Bool)_isCubeRoot;

@end

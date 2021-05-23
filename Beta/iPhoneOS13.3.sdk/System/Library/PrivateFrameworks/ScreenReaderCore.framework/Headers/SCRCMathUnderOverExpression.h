/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <ScreenReaderCore/SCRCMathExpression.h>

__attribute__((visibility("hidden")))
@interface SCRCMathUnderOverExpression : SCRCMathExpression

{
    SCRCMathExpression *_under;
    SCRCMathExpression *_over;
    SCRCMathExpression *_base;
}

@property (retain, nonatomic) SCRCMathExpression *under;
@property (retain, nonatomic) SCRCMathExpression *over;
@property (retain, nonatomic) SCRCMathExpression *base;

- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)mathMLString;
- (id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(_Bool)arg2;
- (id)speakableSegmentsWithSpeakingStyle:(long long)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3;
- (id)subExpressions;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2;
- (id)latexMathModeDescription;
- (unsigned long long)fractionLevel;
- (_Bool)isRangeSubSuperscript;

@end

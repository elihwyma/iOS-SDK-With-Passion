/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <ScreenReaderCore/SCRCMathRowExpression.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SCRCMathFencedExpression : SCRCMathRowExpression

{
    NSString *_openString;
    NSString *_closeString;
}

@property (copy, nonatomic) NSString *openString;
@property (copy, nonatomic) NSString *closeString;

- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)mathMLAttributes;
- (id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(_Bool)arg2;
- (id)speakableSegmentsWithSpeakingStyle:(long long)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3;
- (id)mathMLTag;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2;
- (id)latexDescriptionInMathMode:(_Bool)arg1;
- (unsigned long long)fractionLevel;
- (_Bool)_isBinomialCoefficient;
- (id)_binomialCoefficientContent;
- (id)_treePositionForBinomialCoefficientContentWithOuterTreePosition:(id)arg1;

@end

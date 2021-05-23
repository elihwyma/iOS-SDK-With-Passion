/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REComparisonCondition.h>

@interface _RETrueConstantComparisonCondition : REComparisonCondition

+ (id)sharedInstance;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_notCondition;
- (id)_inflectionFeatureValuePairs;
- (_Bool)_validForRanking;
- (_Bool)_acceptsLeftFeatureMap:(id)arg1 rightFeatureMap:(id)arg2;

@end

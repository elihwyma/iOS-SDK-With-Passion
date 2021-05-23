/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@interface REMLExplanation : NSObject

+ (id)explanationForCondition:(id)arg1;
+ (id)explanationForFeature:(id)arg1 mean:(float)arg2 variance:(float)arg3;
+ (id)explanationForFilteringRule:(id)arg1;

- (_Bool)canCombineExplanationWithExplanation:(id)arg1;
- (id)explanationByCombiningWithExplanation:(id)arg1;
- (_Bool)shouldProvideExplanation;
- (long long)rankExplanationToExplanation:(id)arg1;
- (id)explanationWithStyle:(unsigned long long)arg1;
- (_Bool)_isSystemFeature:(id)arg1;
- (id)_formattedNameForFeature:(id)arg1 style:(unsigned long long)arg2;
- (_Bool)_canCombineWithSimilarExplanation:(id)arg1;
- (long long)_rankExplanationToSimilarExplanation:(id)arg1;
- (id)_formattedFeatureListFromFeatures:(id)arg1 style:(unsigned long long)arg2;

@end

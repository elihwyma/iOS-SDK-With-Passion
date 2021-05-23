/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REMLModel.h>

@interface REStaticMLModel : REMLModel

+ (unsigned long long)featureBitWidth;

- (float)_relevanceForFeatureMap:(id)arg1;
- (float)_usageForFeatureSet:(id)arg1;
- (id)_predictWithFeatures:(id)arg1;

@end

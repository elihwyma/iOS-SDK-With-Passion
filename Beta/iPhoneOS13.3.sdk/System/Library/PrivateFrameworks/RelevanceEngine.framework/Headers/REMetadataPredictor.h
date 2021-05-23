/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REPredictor.h>

@class NSMutableDictionary;

@interface REMetadataPredictor : REPredictor

{
    NSMutableDictionary *_interactionFeatureValueCache;
    NSMutableDictionary *_sectionFeatureValueCache;
}

+ (id)supportedFeatures;

- (id)_init;
- (void)update;
- (id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4;

@end

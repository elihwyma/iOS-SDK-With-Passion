/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSArray, NSLock, NSMutableOrderedSet, REFeatureMap, REFeatureMapGenerator, REFeatureSet;

@interface REFeatureTransmuter : NSObject

{
    REFeatureSet *_inputSet;
    REFeatureSet *_outputSet;
    NSArray *_orderedFeatures;
    REFeatureMapGenerator *_orderedFeatureMapGenerator;
    REFeatureMap *_scratchValues;
    unsigned long long *_scratchTaggedValues;
    REFeatureMapGenerator *_outputFeatureMapGenerator;
    NSMutableOrderedSet *_featureValuesCache;
    NSLock *_featureValuesCacheLock;
}

@property (nonatomic, readonly) REFeatureSet *inputFeatures;
@property (nonatomic, readonly) REFeatureSet *outputFeatures;

- (void)dealloc;
- (id)initWithInputFeatures:(id)arg1 outputFeatures:(id)arg2 outputFeatureMapGenerator:(id)arg3;
- (id)_buildGraph;
- (_Bool)_supportedFeature:(id)arg1;
- (id)transformFeatureMaps:(id)arg1;

@end

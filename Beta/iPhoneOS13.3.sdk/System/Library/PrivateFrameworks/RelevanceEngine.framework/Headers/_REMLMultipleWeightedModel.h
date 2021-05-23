/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/_REMLWeightedModel.h>

@class NSDictionary, NSMutableDictionary, REFeature, REFeatureSet;

@interface _REMLMultipleWeightedModel : _REMLWeightedModel

{
    REFeature *_identificationFeature;
    REFeatureSet *_featureSet;
    float _priorMean;
    float _varianceEpsilon;
    NSMutableDictionary *_models;
    struct os_unfair_lock_s _lock;
}

@property (nonatomic, readonly) NSDictionary *models;

- (_Bool)loadModelFromURL:(id)arg1 error:(id *)arg2;
- (_Bool)saveModelToURL:(id)arg1 error:(id *)arg2;
- (id)predictWithFeatures:(id)arg1;
- (void)trainModelWithFeatureMap:(id)arg1 positiveEvent:(id)arg2;
- (void)enumerateModels:(CDUnknownBlockType)arg1;
- (id)initWithFeature:(id)arg1 featureSet:(id)arg2 priorMean:(float)arg3 biasFeature:(id)arg4 modelVarianceEpsilon:(float)arg5;
- (id)_modelForKey:(id)arg1;
- (id)_modelForFeatureMap:(id)arg1;

@end

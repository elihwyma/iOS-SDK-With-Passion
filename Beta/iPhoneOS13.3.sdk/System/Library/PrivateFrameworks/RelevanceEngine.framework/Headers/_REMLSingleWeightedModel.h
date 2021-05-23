/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/_REMLWeightedModel.h>

@class REMLModel;

@interface _REMLSingleWeightedModel : _REMLWeightedModel

{
    REMLModel *_model;
}

@property (nonatomic, readonly) REMLModel *model;

- (_Bool)loadModelFromURL:(id)arg1 error:(id *)arg2;
- (_Bool)saveModelToURL:(id)arg1 error:(id *)arg2;
- (id)predictWithFeatures:(id)arg1;
- (void)trainModelWithFeatureMap:(id)arg1 positiveEvent:(id)arg2;
- (void)enumerateModels:(CDUnknownBlockType)arg1;
- (id)initWithFeatureSet:(id)arg1 priorMean:(float)arg2 biasFeature:(id)arg3 modelVarianceEpsilon:(float)arg4;

@end

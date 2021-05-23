/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class REFeature, REInteractionDescriptor;

@interface _REMLWeightedModel : NSObject

{
    REInteractionDescriptor *_descriptor;
    REFeature *_biasFeature;
}

@property (nonatomic, readonly) float weight;
@property (nonatomic, readonly) REFeature *selectionFeature;

+ (id)weightedModelWithDescriptor:(id)arg1 featureSet:(id)arg2;

- (_Bool)loadModelFromURL:(id)arg1 error:(id *)arg2;
- (_Bool)saveModelToURL:(id)arg1 error:(id *)arg2;
- (id)predictWithFeatures:(id)arg1;
- (void)trainModelWithFeatureMap:(id)arg1 positiveEvent:(id)arg2;
- (void)enumerateModels:(CDUnknownBlockType)arg1;
- (void)_configureMode:(id)arg1;
- (id)initWithBiasFeature:(id)arg1;
- (float)_biasForFeatureSet:(id)arg1;
- (_Bool)_loadModel:(id)arg1 fromURL:(id)arg2 error:(id *)arg3;

@end

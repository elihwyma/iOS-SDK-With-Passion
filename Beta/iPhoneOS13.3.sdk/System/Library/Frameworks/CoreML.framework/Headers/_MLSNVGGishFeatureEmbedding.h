/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

@class MLModelDescription;

@protocol MLCustomModel;

__attribute__((visibility("hidden")))
@interface _MLSNVGGishFeatureEmbedding : NSObject

{
    id <MLCustomModel> _featureEmbeddingModel;
    MLModelDescription *_modelDescription;
}

@property (nonatomic, readonly) MLModelDescription *modelDescription;

- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)initWithModelDescription:(id)arg1 parameterDictionary:(id)arg2 error:(id *)arg3;

@end

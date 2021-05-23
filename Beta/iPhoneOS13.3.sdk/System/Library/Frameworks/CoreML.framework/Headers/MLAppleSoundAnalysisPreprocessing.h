/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <CoreML/MLModel.h>

@class NSString;

@protocol MLCustomModel;

@interface MLAppleSoundAnalysisPreprocessing : MLModel

{
    NSString *_inputFeatureName;
    NSString *_outputFeatureName;
    id <MLCustomModel> _frontendProcessingModel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)loadModelFromSpecification:(struct _MLModelSpecification *)arg1 configuration:(id)arg2 error:(id *)arg3;

- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)initWithDescription:(id)arg1 configuration:(id)arg2 error:(id *)arg3;

@end

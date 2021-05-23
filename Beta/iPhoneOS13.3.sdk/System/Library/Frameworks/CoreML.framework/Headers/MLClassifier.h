/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <CoreML/MLModel.h>

@class MLModelDescription, MLModelInterface, MLModelMetadata;

@interface MLClassifier : MLModel

@property (retain, nonatomic) MLModelDescription *modelDescription;
@property (readonly) MLModelInterface *interface;
@property (readonly) MLModelMetadata *metadata;

+ (id)predictionFromFeatures:(id)arg1 classifier:(id)arg2 options:(id)arg3 error:(id *)arg4;

- (id)classLabels;
- (id)classify:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)initWithInterface:(id)arg1 metadata:(id)arg2 configuration:(id)arg3 error:(id *)arg4;
- (id)initDescriptionOnlyWithSpecification:(struct _MLModelSpecification *)arg1 configuration:(id)arg2 error:(id *)arg3;
- (id)classifierResultFromOutputFeatures:(id)arg1 error:(id *)arg2;

@end

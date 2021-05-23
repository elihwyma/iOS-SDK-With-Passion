/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <CoreML/MLModel.h>

@class MLNonMaximumSuppressionParameters, NSString;

@interface MLNonMaximumSuppression : MLModel

{
    MLNonMaximumSuppressionParameters *_parameters;
}

@property (readonly) MLNonMaximumSuppressionParameters *parameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)loadModelFromSpecification:(struct _MLModelSpecification *)arg1 configuration:(id)arg2 error:(id *)arg3;

- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)initWithParameters:(id)arg1 modelDescription:(id)arg2 configuration:(id)arg3 error:(id *)arg4;

@end

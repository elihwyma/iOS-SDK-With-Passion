/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <CoreML/MLModel.h>

@class MLFeatureValue, NSDictionary, NSString;

@interface MLCategoricalMapping : MLModel

{
    NSDictionary *_mapping;
    MLFeatureValue *_valueOnUnknown;
}

@property (nonatomic, readonly) NSDictionary *mapping;
@property (nonatomic, readonly) MLFeatureValue *valueOnUnknown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)loadModelFromSpecification:(struct _MLModelSpecification *)arg1 configuration:(id)arg2 error:(id *)arg3;

- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)initWithMapping:(id)arg1 valueOnUnknown:(id)arg2 dataTransformerName:(id)arg3 inputDescription:(id)arg4 outputDescription:(id)arg5 orderedInputFeatureNames:(id)arg6 orderedOutputFeatureNames:(id)arg7 configuration:(id)arg8;
- (id)mapFeature:(id)arg1 error:(id *)arg2;

@end

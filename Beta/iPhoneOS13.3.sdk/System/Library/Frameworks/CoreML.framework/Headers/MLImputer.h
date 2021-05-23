/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <CoreML/MLModel.h>

@class MLFeatureValue, NSString;

@interface MLImputer : MLModel

{
    MLFeatureValue *_imputeValue;
    MLFeatureValue *_replaceValue;
}

@property (nonatomic, readonly) MLFeatureValue *imputeValue;
@property (nonatomic, readonly) MLFeatureValue *replaceValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)loadModelFromSpecification:(struct _MLModelSpecification *)arg1 configuration:(id)arg2 error:(id *)arg3;
+ (id)imputeValueFrom:(id)arg1 replaceValue:(id)arg2 inputDescription:(id)arg3 outputDescription:(id)arg4 orderedInputFeatureNames:(id)arg5 orderedOutputFeatureNames:(id)arg6 error:(id *)arg7;
+ (id)imputeValueFrom:(id)arg1 replaceValue:(id)arg2 dataTransformerName:(id)arg3 inputDescription:(id)arg4 outputDescription:(id)arg5 orderedInputFeatureNames:(id)arg6 orderedOutputFeatureNames:(id)arg7 error:(id *)arg8;

- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)initWith:(id)arg1 imputeValue:(id)arg2 replaceValue:(id)arg3 inputDescription:(id)arg4 outputDescription:(id)arg5 orderedInputFeatureNames:(id)arg6 orderedOutputFeatureNames:(id)arg7 configuration:(id)arg8 error:(id *)arg9;

@end

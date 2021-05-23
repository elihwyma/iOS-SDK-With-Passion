/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <CoreML/MLModel.h>

@class MLFeatureValue, NSString;

@interface MLScaler : MLModel

{
    MLFeatureValue *_shiftValue;
    MLFeatureValue *_scaleValue;
}

@property (nonatomic, readonly) MLFeatureValue *shiftValue;
@property (nonatomic, readonly) MLFeatureValue *scaleValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)loadModelFromSpecification:(struct _MLModelSpecification *)arg1 configuration:(id)arg2 error:(id *)arg3;

- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)initWith:(id)arg1 scaleValue:(id)arg2 dataTransformerName:(id)arg3 inputDescription:(id)arg4 outputDescription:(id)arg5 orderedInputFeatureNames:(id)arg6 orderedOutputFeatureNames:(id)arg7 configuration:(id)arg8 error:(id *)arg9;

@end

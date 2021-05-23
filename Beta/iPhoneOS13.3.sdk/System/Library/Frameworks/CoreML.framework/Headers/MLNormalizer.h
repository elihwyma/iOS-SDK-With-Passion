/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <CoreML/MLModel.h>

@class NSString;

@interface MLNormalizer : MLModel

{
    int _norm;
}

@property (nonatomic, readonly) int norm;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)loadModelFromSpecification:(struct _MLModelSpecification *)arg1 configuration:(id)arg2 error:(id *)arg3;
+ (id)inputDescriptionFrom:(id)arg1 outputDescription:(id)arg2 orderedInputFeatureNames:(id)arg3 orderedOutputFeatureNames:(id)arg4;
+ (id)normFrom:(int)arg1 inputDescription:(id)arg2 outputDescription:(id)arg3 orderedInputFeatureNames:(id)arg4 orderedOutputFeatureNames:(id)arg5;
+ (id)normFrom:(int)arg1 dataTransformerName:(id)arg2 inputDescription:(id)arg3 outputDescription:(id)arg4 orderedInputFeatureNames:(id)arg5 orderedOutputFeatureNames:(id)arg6;

- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)initWith:(int)arg1 dataTransformerName:(id)arg2 inputDescription:(id)arg3 outputDescription:(id)arg4 orderedInputFeatureNames:(id)arg5 orderedOutputFeatureNames:(id)arg6 configuration:(id)arg7;
- (void)computeSingleNorm:(double)arg1 lastValue:(double *)arg2;

@end

/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

#import <CoreML/Swift-Protocol.h>

@class MLFeatureDescription, NSDictionary, NSOrderedSet, NSString;

@interface MLModelInterface : NSObject <Swift>

{
    NSDictionary *_inputDescription;
    NSDictionary *_outputDescription;
    NSString *_predictedFeatureName;
    NSString *_predictedProbabilitiesName;
    NSDictionary *_trainingInputDescription;
    NSOrderedSet *_inputFeatureNames;
    NSOrderedSet *_outputFeatureNames;
}

@property (readonly) MLFeatureDescription *predictedValueFeatureDescription;
@property (readonly) MLFeatureDescription *predictedClassFeatureDescription;
@property (readonly) MLFeatureDescription *classProbabilityFeatureDescription;
@property (readonly, getter=isValidRegressorInterface) _Bool validRegressorInterface;
@property (readonly, getter=isValidClassifierInterface) _Bool validClassifierInterface;
@property (readonly) NSDictionary *inputDescription;
@property (readonly) NSDictionary *outputDescription;
@property (readonly) NSOrderedSet *inputFeatureNames;
@property (readonly) NSOrderedSet *outputFeatureNames;
@property (readonly) NSDictionary *trainingInputDescription;
@property (readonly) NSString *predictedFeatureName;
@property (readonly) NSString *predictedProbabilitiesName;

+ (_Bool)supportsSecureCoding;
+ (id)modelInterfaceWithInputDescription:(id)arg1 orderedInputFeatureNames:(id)arg2 outputDescription:(id)arg3 orderedOutputFeatureNames:(id)arg4 predictedFeatureName:(id)arg5 predictedProbabilitiesName:(id)arg6 trainingInputDescription:(id)arg7;
+ (id)modelInterfaceWithInputDescription:(id)arg1 orderedInputFeatureNames:(id)arg2 outputDescription:(id)arg3 orderedOutputFeatureNames:(id)arg4 predictedFeatureName:(id)arg5 predictedProbabilitiesName:(id)arg6;
+ (_Bool)validateSingleFeatureInDescription:(id)arg1 withSet:(id)arg2;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInterfaceFormat:(struct _MLModelDescriptionSpecification *)arg1 error:(id *)arg2;
- (id)initWithSpecification:(struct _MLModelSpecification *)arg1 error:(id *)arg2;
- (id)initWithInputDescription:(id)arg1 outputDescription:(id)arg2 orderedInputFeatureNames:(id)arg3 orderedOutputFeatureNames:(id)arg4 predictedFeatureName:(id)arg5 predictedProbabilitiesName:(id)arg6 trainingInputDescription:(id)arg7;
- (_Bool)validateRegressorInterfaceWithError:(id *)arg1;
- (_Bool)validateClassifierInterfaceWithError:(id *)arg1;

@end

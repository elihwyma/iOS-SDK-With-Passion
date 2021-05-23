/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

#import <CoreML/Swift-Protocol.h>

@class NSDictionary, NSOrderedSet, NSString, NSURL;

@interface MLModelDescription : NSObject <Swift>

{
    _Bool _isUpdatable;
    NSDictionary *_inputDescriptionsByName;
    NSDictionary *_outputDescriptionsByName;
    NSString *_predictedFeatureName;
    NSString *_predictedProbabilitiesName;
    NSDictionary *_metadata;
    NSOrderedSet *_inputFeatureNames;
    NSOrderedSet *_outputFeatureNames;
    NSURL *_modelURL;
    NSDictionary *_trainingInputDescriptionsByName;
    NSDictionary *_parameterDescriptionsByKey;
}

@property (retain) NSOrderedSet *inputFeatureNames;
@property (retain) NSOrderedSet *outputFeatureNames;
@property (retain, nonatomic) NSURL *modelURL;
@property (nonatomic) _Bool isUpdatable;
@property (retain, nonatomic) NSDictionary *trainingInputDescriptionsByName;
@property (retain, nonatomic) NSDictionary *parameterDescriptionsByKey;
@property (nonatomic, readonly) NSDictionary *inputDescriptionsByName;
@property (nonatomic, readonly) NSDictionary *outputDescriptionsByName;
@property (copy, nonatomic, readonly) NSString *predictedFeatureName;
@property (copy, nonatomic, readonly) NSString *predictedProbabilitiesName;
@property (nonatomic, readonly) NSDictionary *metadata;

+ (_Bool)supportsSecureCoding;
+ (id)metadataWithFormat:(struct _MLModelMetadataSpecification *)arg1;
+ (id)metadataWithSpecification:(struct _MLModelSpecification *)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)debugQuickLookObject;
- (id)initWithInputDescriptions:(id)arg1 outputDescriptions:(id)arg2 predictedFeatureName:(id)arg3 predictedProbabilitiesName:(id)arg4 trainingInputDescriptions:(id)arg5 metadata:(id)arg6;
- (id)initWithInputDescriptions:(id)arg1 outputDescriptions:(id)arg2 predictedFeatureName:(id)arg3 predictedProbabilitiesName:(id)arg4 metadata:(id)arg5;
- (id)initWithModelDescriptionSpecification:(struct _MLModelDescriptionSpecification *)arg1 error:(id *)arg2;
- (_Bool)isEqualToDescription:(id)arg1;
- (_Bool)verifyInput:(id)arg1 error:(id *)arg2;

@end

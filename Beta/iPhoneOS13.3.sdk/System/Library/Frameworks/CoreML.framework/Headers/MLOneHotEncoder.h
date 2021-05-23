/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <CoreML/MLModel.h>

#import <CoreML/Swift-Protocol.h>

@class MLModelDescription, MLModelInterface, MLModelMetadata, NSOrderedSet, NSString;

@interface MLOneHotEncoder : MLModel <Swift>

{
    _Bool _ouputSparse;
    _Bool _handleUnknown;
    NSOrderedSet *_featureEncoding;
}

@property (nonatomic, readonly) NSOrderedSet *featureEncoding;
@property (nonatomic, readonly) _Bool ouputSparse;
@property (nonatomic, readonly) _Bool handleUnknown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) MLModelDescription *modelDescription;
@property (readonly) MLModelInterface *interface;
@property (readonly) MLModelMetadata *metadata;

+ (id)loadModelFromSpecification:(struct _MLModelSpecification *)arg1 configuration:(id)arg2 error:(id *)arg3;
+ (id)featureEncoderFrom:(id)arg1 inputDescription:(id)arg2 orderedInputFeatureNames:(id)arg3;
+ (id)featureEncoderFrom:(id)arg1 inputDescription:(id)arg2 outputDescription:(id)arg3 orderedInputFeatureNames:(id)arg4 orderedOutputFeatureNames:(id)arg5;
+ (id)featureEncoderFrom:(id)arg1 dataTransformerName:(id)arg2 ouputSparse:(_Bool)arg3 handleUnknown:(_Bool)arg4 inputDescription:(id)arg5 outputDescription:(id)arg6 orderedInputFeatureNames:(id)arg7 orderedOutputFeatureNames:(id)arg8;

- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)initWith:(id)arg1 dataTransformerName:(id)arg2 ouputSparse:(_Bool)arg3 handleUnknown:(_Bool)arg4 inputDescription:(id)arg5 outputDescription:(id)arg6 orderedInputFeatureNames:(id)arg7 orderedOutputFeatureNames:(id)arg8 configuration:(id)arg9;
- (id)encodeFeatureValue:(id)arg1;
- (id)unknownDenseVector;
- (id)encodeFeatureValueIntString:(unsigned long long)arg1;

@end

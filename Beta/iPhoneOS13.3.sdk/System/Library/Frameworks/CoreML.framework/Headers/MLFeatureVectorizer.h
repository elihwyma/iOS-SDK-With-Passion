/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <CoreML/MLModel.h>

@class NSArray, NSString;

@interface MLFeatureVectorizer : MLModel

{
    NSArray *_output_array_shape;
    struct vector<std::__1::pair<unsigned long, unsigned long>, std::__1::allocator<std::__1::pair<unsigned long, unsigned long>>> index_mapping;
    NSArray *_columnNameEncoding;
    NSArray *_dimensionEncoding;
}

@property (nonatomic, readonly) NSArray *columnNameEncoding;
@property (nonatomic, readonly) NSArray *dimensionEncoding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)loadModelFromSpecification:(struct _MLModelSpecification *)arg1 configuration:(id)arg2 error:(id *)arg3;

- (id).cxx_construct;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)initWith:(id)arg1 dimensionEncoding:(id)arg2 dataTransformerName:(id)arg3 inputDescription:(id)arg4 outputDescription:(id)arg5 orderedInputFeatureNames:(id)arg6 orderedOutputFeatureNames:(id)arg7 configuration:(id)arg8;
- (id)vectorizeOneHotEncoderDict:(id)arg1 index:(unsigned long long)arg2 error:(id *)arg3;

@end

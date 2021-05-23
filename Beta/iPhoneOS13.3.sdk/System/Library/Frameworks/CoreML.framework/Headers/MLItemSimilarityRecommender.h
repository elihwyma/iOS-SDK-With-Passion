/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <CoreML/MLModel.h>

#import <CoreML/Swift-Protocol.h>

@class MLModelDescription, MLModelInterface, MLModelMetadata, NSArray, NSDictionary, NSString;

@interface MLItemSimilarityRecommender : MLModel <Swift>

{
    struct shared_ptr<Archiver::MMappedFile> m_mmapped_model;
    struct vector<unsigned char, std::__1::allocator<unsigned char>> m_cached_model;
    unsigned long long m_num_items;
    NSString *m_item_data_feature_name;
    NSString *m_num_recommendations_feature_name;
    NSString *m_item_restriction_feature_name;
    NSString *m_item_exclusion_feature_name;
    NSString *m_item_list_output_feature_name;
    NSString *m_item_score_output_feature_name;
    NSDictionary *m_item_mapping;
    NSArray *m_item_string_list;
    NSArray *m_item_integer_list;
    struct vector<double, std::__1::allocator<double>> _m_scores;
    vector_7984f87c _m_items;
    vector_7984f87c _m_item_buffer;
    struct vector<unsigned char, std::__1::allocator<unsigned char>> _m_item_invalid_mask;
    struct vector<double, std::__1::allocator<double>> _m_item_predictions;
    struct vector<std::__1::pair<unsigned long long, double>, std::__1::allocator<std::__1::pair<unsigned long long, double>>> _m_item_heap;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) MLModelDescription *modelDescription;
@property (readonly) MLModelInterface *interface;
@property (readonly) MLModelMetadata *metadata;

+ (id)loadModelFromSpecification:(struct _MLModelSpecification *)arg1 configuration:(id)arg2 error:(id *)arg3;
+ (id)compileSpecification:(struct _MLModelSpecification *)arg1 toArchive:(struct _MLModelOutputArchiver *)arg2 options:(id)arg3 error:(id *)arg4;
+ (id)compiledVersionForSpecification:(struct _MLModelSpecification *)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)loadModelFromCompiledArchive:(struct _MLModelInputArchiver *)arg1 modelVersionInfo:(id)arg2 compilerVersionInfo:(id)arg3 configuration:(id)arg4 error:(id *)arg5;
+ (id)loadModelFromSpecificationWithCompilationOptions:(struct _MLModelSpecification *)arg1 options:(id)arg2 error:(id *)arg3;

- (id).cxx_construct;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (const char *)_model_data;
- (id)_itemForIndex:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)_mapItemSequence:(id)arg1 dest:(vector_7984f87c *)arg2 error:(id *)arg3;

@end

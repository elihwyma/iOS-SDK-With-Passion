/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <CoreML/MLClassifier.h>

@class NSArray, NSString;

@interface MLTreeEnsembleClassifier : MLClassifier

{
    struct shared_ptr<Archiver::MMappedFile> _mmapped_model;
    struct vector<unsigned char, std::__1::allocator<unsigned char>> _cached_model;
    unsigned long long num_dimensions;
    struct vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char>>> _classes_by_string;
    struct vector<long long, std::__1::allocator<long long>> _classes_by_int64_t;
    long long _class_type;
    NSArray *_class_values;
    NSString *_single_array_key;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)loadModelFromSpecification:(struct _MLModelSpecification *)arg1 configuration:(id)arg2 error:(id *)arg3;
+ (id)compileSpecification:(struct _MLModelSpecification *)arg1 toArchive:(struct _MLModelOutputArchiver *)arg2 options:(id)arg3 error:(id *)arg4;
+ (id)compiledVersionForSpecification:(struct _MLModelSpecification *)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)loadModelFromCompiledArchive:(struct _MLModelInputArchiver *)arg1 modelVersionInfo:(id)arg2 compilerVersionInfo:(id)arg3 configuration:(id)arg4 error:(id *)arg5;
+ (id)loadModelFromSpecificationWithCompilationOptions:(struct _MLModelSpecification *)arg1 options:(id)arg2 error:(id *)arg3;

- (id).cxx_construct;
- (id)classify:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (const char *)_model_data;
- (void)_setSingleArrayLookupField;
- (id)_buildClassificationClasses:(double *)arg1 topk:(unsigned long long)arg2 error:(id *)arg3;

@end

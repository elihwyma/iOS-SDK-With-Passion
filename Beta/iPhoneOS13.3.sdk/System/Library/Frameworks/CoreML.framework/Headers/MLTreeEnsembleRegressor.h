/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <CoreML/MLRegressor.h>

@class NSArray, NSString;

@interface MLTreeEnsembleRegressor : MLRegressor

{
    struct shared_ptr<Archiver::MMappedFile> _mmapped_model;
    struct vector<unsigned char, std::__1::allocator<unsigned char>> _cached_model;
    unsigned long long num_dimensions;
    NSArray *output_classes;
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
- (id)regress:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (const char *)_model_data;
- (double)scalarRegress:(id)arg1 error:(id *)arg2;
- (double)scalarRegress:(double *)arg1;
- (void)vectorRegress:(double *)arg1 dest:(double *)arg2;

@end

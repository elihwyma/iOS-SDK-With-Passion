/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <CoreML/MLModel.h>

@class NSArray;

@interface MLPipeline : MLModel

{
    NSArray *_models;
    NSArray *_modelNames;
}

@property (retain) NSArray *models;
@property (retain) NSArray *modelNames;

+ (id)compileSpecification:(struct _MLModelSpecification *)arg1 toArchive:(struct _MLModelOutputArchiver *)arg2 options:(id)arg3 error:(id *)arg4;
+ (id)compiledVersionForSpecification:(struct _MLModelSpecification *)arg1 options:(id)arg2 error:(id *)arg3;
+ (void)archivePipelineUpdateParameterForModels:(const RepeatedPtrField_f3160e5f *)arg1 to:(struct _MLModelOutputArchiver *)arg2 updatable:(_Bool)arg3;
+ (void)archiveCustomModelNames:(const RepeatedPtrField_fe7cf120 *)arg1 to:(struct _MLModelOutputArchiver *)arg2;
+ (id)compileWithModelsInPipeline:(const struct Pipeline *)arg1 toArchive:(struct _MLModelOutputArchiver *)arg2 options:(id)arg3 updatable:(_Bool)arg4 error:(id *)arg5;

- (_Bool)writeToURL:(id)arg1 error:(id *)arg2;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)predictionsFromBatch:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)parameterValueForKey:(id)arg1 error:(id *)arg2;
- (id)extractModelNamesFromArchive:(struct _MLModelInputArchiver *)arg1 numModels:(unsigned long long)arg2;
- (void)updateParameterDescriptionsByKeyBasedOnSubModel;
- (id)initModelFromMetadataAndArchive:(struct _MLModelInputArchiver *)arg1 versionInfo:(id)arg2 interface:(id)arg3 metadata:(id)arg4 configuration:(id)arg5 error:(id *)arg6;
- (void)replaceModelAtIndex:(unsigned long long)arg1 with:(id)arg2;

@end

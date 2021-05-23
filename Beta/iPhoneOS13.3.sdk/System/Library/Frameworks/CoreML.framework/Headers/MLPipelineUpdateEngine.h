/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <CoreML/MLPipeline.h>

@class MLUpdateProgressHandlers, NSObject, NSString;

@protocol OS_dispatch_queue;

@interface MLPipelineUpdateEngine : MLPipeline

{
    MLUpdateProgressHandlers *_progressHandlers;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    vector_7984f87c _updatableModelIndicies;
}

@property (readonly) vector_7984f87c updatableModelIndicies;
@property (retain) MLUpdateProgressHandlers *progressHandlers;
@property (retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)loadModelFromCompiledArchive:(struct _MLModelInputArchiver *)arg1 modelVersionInfo:(id)arg2 compilerVersionInfo:(id)arg3 configuration:(id)arg4 error:(id *)arg5;

- (_Bool)writeToURL:(id)arg1 error:(id *)arg2;
- (id).cxx_construct;
- (id)parameterValueForKey:(id)arg1 error:(id *)arg2;
- (void)setUpdateProgressHandlers:(id)arg1 dispatchQueue:(id)arg2;
- (void)updateModelWithData:(id)arg1;
- (void)resumeUpdateWithParameters:(id)arg1;
- (void)resumeUpdate;
- (void)cancelUpdate;
- (id)initFromCompiledArchive:(struct _MLModelInputArchiver *)arg1 modelVersionInfo:(id)arg2 compilerVersionInfo:(id)arg3 configuration:(id)arg4 error:(id *)arg5;

@end

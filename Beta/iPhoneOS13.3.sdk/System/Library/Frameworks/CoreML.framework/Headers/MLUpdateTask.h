/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <CoreML/MLTask.h>

@class MLModel, MLUpdateProgressHandlers, NSObject, NSString, NSURL;

@protocol MLBatchProvider, MLUpdatable, OS_dispatch_queue;

@interface MLUpdateTask : MLTask

{
    _Bool _updateHasStarted;
    MLModel<MLUpdatable> *_updatableModel;
    id <MLBatchProvider> _trainingData;
    MLUpdateProgressHandlers *_progressHandlers;
    NSObject<OS_dispatch_queue> *_updateQueue;
    NSURL *_updatableModelURL;
}

@property (nonatomic, readonly) MLModel<MLUpdatable> *updatableModel;
@property (nonatomic, readonly) id <MLBatchProvider> trainingData;
@property (nonatomic, readonly) MLUpdateProgressHandlers *progressHandlers;
@property (nonatomic) _Bool updateHasStarted;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *updateQueue;
@property (nonatomic, readonly) NSURL *updatableModelURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)updateModelAtURL:(id)arg1 trainingData:(id)arg2 configuration:(id)arg3 writeToURL:(id)arg4 error:(id *)arg5;
+ (id)updateTaskForModelAtURL:(id)arg1 trainingData:(id)arg2 configuration:(id)arg3 completionHandler:(CDUnknownBlockType)arg4 error:(id *)arg5;
+ (id)updateTaskForModelAtURL:(id)arg1 trainingData:(id)arg2 configuration:(id)arg3 progressHandlers:(id)arg4 error:(id *)arg5;

- (void)onResumptionWithTaskContext:(id)arg1;
- (void)onSuspensionWithTaskContext:(id)arg1;
- (void)onCancellation;
- (void)onCompletionWithTaskContext:(id)arg1;
- (void)onFailureWithTaskContext:(id)arg1;
- (id)initWithModelAtURL:(id)arg1 trainingData:(id)arg2 configuration:(id)arg3 progressHandlers:(id)arg4 error:(id *)arg5;
- (void)resumeWithParameters:(id)arg1;
- (void)_invokeProgressHandlerForContext:(id)arg1;
- (CDUnknownBlockType)_progressHandlerBlock;
- (CDUnknownBlockType)_completionHandlerBlock;

@end

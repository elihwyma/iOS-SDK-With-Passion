/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class NSMapTable;

@protocol OS_dispatch_workloop;

@interface BWInferenceScheduler : NSObject

{
    struct os_unfair_lock_s _connectionsLock;
    NSMapTable *_connectionsByIdentifier;
    NSObject<OS_dispatch_workloop> *_inferenceWorkloop;
    NSObject<OS_dispatch_workloop> *_scalingWorkloop;
    NSObject<OS_dispatch_workloop> *_submissionWorkloop;
}

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (id)_queueForJob:(CDStruct_cc69c771 *)arg1 fromConnection:(id)arg2;
- (void)_processJobsFromFramebuffer:(id)arg1 usingInputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 inferencePropagationHandler:(CDUnknownBlockType)arg3 atExecutionTime:(CDStruct_1b6d18a9)arg4 forConnection:(id)arg5;
- (unsigned long long)registerInferenceConnection;
- (void)unregisterInferenceConnection:(unsigned long long)arg1;
- (int)prepareForInferenceRequirements:(id)arg1 dependencyProviderSource:(id)arg2 formatProvider:(id)arg3 pixelBufferPoolProvider:(id)arg4 connection:(unsigned long long)arg5;
- (int)performInferencesForConnection:(unsigned long long)arg1 usingInputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 attachingResultsToSampleBuffer:(struct opaqueCMSampleBuffer *)arg3;

@end

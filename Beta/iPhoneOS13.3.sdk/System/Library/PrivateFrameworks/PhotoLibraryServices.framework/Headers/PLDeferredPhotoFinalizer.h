/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class AVCaptureDeferredPhotoProcessor, NSMutableDictionary, NSMutableSet, NSString;

@protocol OS_dispatch_queue;

@interface PLDeferredPhotoFinalizer : NSObject

{
    NSMutableDictionary *_identifierToAssetMap;
    NSMutableDictionary *_identifierToCompletionHandler;
    AVCaptureDeferredPhotoProcessor *_finalizer;
    struct os_unfair_lock_s _identifierToAssetMapLock;
    NSObject<OS_dispatch_queue> *_serializationQueue;
    NSMutableSet *_taskIdentifiersToFinalize;
    struct os_unfair_lock_s _taskIdentifiersToFinalizeLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)processor:(id)arg1 didFinishProcessingPhotoProxy:(id)arg2 finalPhoto:(id)arg3 error:(id)arg4;
- (_Bool)_errorIsRecoverable:(id)arg1;
- (void)_writeDebugFileFromProxyMetadata:(id)arg1 forAsset:(id)arg2 isWide:(_Bool)arg3;
- (void)enqueueAssetForFinalization:(id)arg1 forWide:(_Bool)arg2 withTaskIdentifier:(id)arg3 taskDidBeginHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)cancelFinalizationForTaskIdentifier:(id)arg1;
- (void)requestFinalizationOfAsset:(id)arg1 forWide:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)requestCancellationOfAsset:(id)arg1;
- (void)_callCompletionHandlersWithPhotoProxy:(id)arg1 processor:(id)arg2 success:(_Bool)arg3 error:(id)arg4;
- (int)deleteIntermediatesExcludingDeferredIdentifiers:(id)arg1;

@end

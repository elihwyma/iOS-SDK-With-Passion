/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSProgress, PLDeferredPhotoFinalizer, PLPhotoLibrary, PLPhotoLibraryBundle;

@protocol OS_dispatch_queue;

@interface PLReframeService : NSObject

{
    struct os_unfair_lock_s _lock;
    _Atomic long long _cancellationGenerationCounter;
    NSProgress *_currentProgress;
    PLPhotoLibraryBundle *_libraryBundle;
    PLPhotoLibrary *_photoLibrary;
    PLDeferredPhotoFinalizer *_deferredPhotoFinalizer;
    NSObject<OS_dispatch_queue> *_serializationQueue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serializationQueue;

- (id)photoLibrary;
- (id)initWithLibraryBundle:(id)arg1;
- (id)deferredPhotoFinalizer;
- (id)enqueueReframeRequestForAssetUUID:(id)arg1 imageConversionClient:(id)arg2 videoConversionClient:(id)arg3 isOnDemand:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;

@end

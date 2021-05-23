/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class MPMediaItem, NSHashTable, VUIMPMediaItemDownloadControllerState;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VUIMPMediaItemDownloadController : NSObject

{
    NSObject<OS_dispatch_queue> *_observerDispatchQueue;
    MPMediaItem *_mediaItem;
    VUIMPMediaItemDownloadControllerState *_state;
    NSObject<OS_dispatch_queue> *_serialProcessingDispatchQueue;
    NSHashTable *_observers;
}

@property (retain, nonatomic) MPMediaItem *mediaItem;
@property (copy, nonatomic) VUIMPMediaItemDownloadControllerState *state;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue;
@property (retain, nonatomic) NSHashTable *observers;
@property (nonatomic, readonly) _Bool supportsCancellation;
@property (nonatomic, readonly) _Bool supportsPausing;
@property (nonatomic, readonly, getter=isRestoreDownload) _Bool restoreDownload;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *observerDispatchQueue;

- (id)init;
- (void)invalidate;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)_setState:(id)arg1;
- (void)cancelDownload;
- (void)resumeDownload;
- (void)_enqueueAsyncProcessingQueueBlock:(CDUnknownBlockType)arg1;
- (id)initWithMediaItem:(id)arg1 state:(id)arg2 serialProcessingDispatchQueue:(id)arg3;
- (void)_onProcessingQueue_invalidate;
- (void)_onProcessingQueue_cancelDownload;
- (void)_onProcessingQueue_pauseDownload;
- (void)_onProcessingQueue_resumeDownload;
- (void)pauseDownload;
- (void)_enqueueAsyncStrongSelfProcessingQueueBlock:(CDUnknownBlockType)arg1;
- (void)_onProcessingQueue_setState:(id)arg1;
- (void)_notifyObservers:(id)arg1 stateDidChange:(id)arg2;
- (void)_enqueueObserverQueueBlock:(CDUnknownBlockType)arg1;

@end

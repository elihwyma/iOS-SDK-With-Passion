/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class MPMediaItem, NSString, VUIMPMediaItemDownloadController, VUIMediaEntityAssetControllerState, VUIMediaEntityType;

@protocol OS_dispatch_queue, VUIMediaEntityAssetControllerDelegate, VUIMediaEntityIdentifier;

__attribute__((visibility("hidden")))
@interface VUIMPMediaItemAssetController : NSObject

{
    _Bool _supportsStartingDownload;
    _Bool _requestingPermissionToDownload;
    NSObject<OS_dispatch_queue> *_completionDispatchQueue;
    id <VUIMediaEntityAssetControllerDelegate> _delegate;
    VUIMediaEntityAssetControllerState *_state;
    NSObject<VUIMediaEntityIdentifier> *_mediaEntityIdentifier;
    VUIMPMediaItemDownloadController *_downloadController;
    NSObject<OS_dispatch_queue> *_serialProcessingDispatchQueue;
    MPMediaItem *_mediaItem;
}

@property (copy, nonatomic) NSObject<VUIMediaEntityIdentifier> *mediaEntityIdentifier;
@property (retain, nonatomic) VUIMPMediaItemDownloadController *downloadController;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue;
@property (nonatomic, getter=isRequestingPermissionToDownload) _Bool requestingPermissionToDownload;
@property (nonatomic, readonly) MPMediaItem *mediaItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) VUIMediaEntityType *mediaEntityType;
@property (weak, nonatomic) id <VUIMediaEntityAssetControllerDelegate> delegate;
@property (nonatomic, readonly) _Bool supportsStartingDownload;
@property (copy, nonatomic, readonly) VUIMediaEntityAssetControllerState *state;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionDispatchQueue;

+ (_Bool)_supportsStartingDownloadWithMediaItem:(id)arg1;
+ (unsigned long long)_assetControllerStatusFromDownloadControllerState:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (_Bool)_isDownloaded;
- (void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3;
- (void)resumeDownload;
- (void)cancelAndRemoveDownload;
- (void)_enqueueCompletionQueueBlock:(CDUnknownBlockType)arg1;
- (id)initWithMediaItem:(id)arg1 mediaEntityIdentifier:(id)arg2 serialProcessingDispatchQueue:(id)arg3;
- (void)_handleMediaLibraryContentsDidChangeNotification:(id)arg1;
- (void)_onProcessingQueue_invalidate;
- (void)startDownloadWithCompletion:(CDUnknownBlockType)arg1;
- (void)pauseDownload;
- (void)_onProcessingQueue_calculateStateAndNotify:(_Bool)arg1;
- (void)_onProcessingQueue_invalidateAndSetState;
- (void)_enqueueAsyncProcessingQueueStrongSelfBlock:(CDUnknownBlockType)arg1;
- (void)_onProcessingQueue_startDownloadWithCompletion:(CDUnknownBlockType)arg1;
- (id)_onProcessingQueue_downloadController;
- (void)_onProcessingQueue_cancelAndRemoveDownload;
- (void)_onProcessingQueue_updateStateWithStatus:(unsigned long long)arg1 downloadProgress:(double)arg2 bytesDownloaded:(unsigned long long)arg3 bytesToDownload:(unsigned long long)arg4 supportsPausing:(_Bool)arg5 supportsCancellation:(_Bool)arg6 notify:(_Bool)arg7;
- (void)_onProcessingQueue_startMonitoringDownload;
- (void)_onProcessingQueue_updateStateWithStatus:(unsigned long long)arg1 notify:(_Bool)arg2;
- (void)_onProcessingQueue_setDownloadController:(id)arg1;
- (void)_notifyDelegateStateDidChange:(id)arg1;
- (void)mediaItemDownloadController:(id)arg1 stateDidChange:(id)arg2;

@end

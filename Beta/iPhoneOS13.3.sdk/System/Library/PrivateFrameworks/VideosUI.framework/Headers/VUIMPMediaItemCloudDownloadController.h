/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIMPMediaItemDownloadController.h>

@class MPStoreDownload, NSString;

__attribute__((visibility("hidden")))
@interface VUIMPMediaItemCloudDownloadController : VUIMPMediaItemDownloadController

{
    MPStoreDownload *_storeDownload;
}

@property (retain, nonatomic) MPStoreDownload *storeDownload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_stateFromStoreDownload:(id)arg1;

- (void)dealloc;
- (void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2;
- (void)downloadManager:(id)arg1 downloadDidProgress:(id)arg2;
- (id)initWithMediaItem:(id)arg1 serialProcessingDispatchQueue:(id)arg2;
- (_Bool)supportsPausing;
- (id)initWithMediaItem:(id)arg1 state:(id)arg2 serialProcessingDispatchQueue:(id)arg3;
- (void)_addStoreObserver;
- (void)_removeStoreObserver;
- (void)_onProcessingQueue_invalidate;
- (_Bool)isRestoreDownload;
- (void)_onProcessingQueue_cancelDownload;
- (void)_onProcessingQueue_pauseDownload;
- (void)_onProcessingQueue_resumeDownload;

@end

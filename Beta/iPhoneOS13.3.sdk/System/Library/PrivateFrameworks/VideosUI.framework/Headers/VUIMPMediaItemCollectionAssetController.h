/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class MPMediaItemCollection, NSArray, NSString, VUIMediaEntityAssetControllerState, VUIMediaEntityType;

@protocol OS_dispatch_queue, VUIMediaEntityAssetControllerDelegate, VUIMediaEntityIdentifier;

__attribute__((visibility("hidden")))
@interface VUIMPMediaItemCollectionAssetController : NSObject

{
    _Bool _supportsStartingDownload;
    NSObject<OS_dispatch_queue> *_completionDispatchQueue;
    id <VUIMediaEntityAssetControllerDelegate> _delegate;
    NSObject<VUIMediaEntityIdentifier> *_mediaEntityIdentifier;
    VUIMediaEntityAssetControllerState *_state;
    MPMediaItemCollection *_mediaItemCollection;
    NSObject<OS_dispatch_queue> *_serialProcessingDispatchQueue;
    NSArray *_assetControllers;
    unsigned long long _fullyDownloadedAssetBytes;
}

@property (copy, nonatomic) NSObject<VUIMediaEntityIdentifier> *mediaEntityIdentifier;
@property (copy, nonatomic) VUIMediaEntityAssetControllerState *state;
@property (retain, nonatomic) MPMediaItemCollection *mediaItemCollection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue;
@property (retain, nonatomic) NSArray *assetControllers;
@property (nonatomic) unsigned long long fullyDownloadedAssetBytes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) VUIMediaEntityType *mediaEntityType;
@property (weak, nonatomic) id <VUIMediaEntityAssetControllerDelegate> delegate;
@property (nonatomic, readonly) _Bool supportsStartingDownload;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionDispatchQueue;

+ (id)_downloadingAssetControllersWithAssetControllers:(id)arg1;
+ (id)_stateFromDownloadingAssetControllers:(id)arg1 fullyDownloadedAssetBytes:(unsigned long long)arg2;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)resumeDownload;
- (void)cancelAndRemoveDownload;
- (void)_enqueueCompletionQueueBlock:(CDUnknownBlockType)arg1;
- (id)initWithMediaItemCollection:(id)arg1 mediaEntityIdentifier:(id)arg2 serialProcessingDispatchQueue:(id)arg3;
- (void)mediaEntityAssetController:(id)arg1 stateDidChange:(id)arg2;
- (void)_onProcessingQueue_invalidate;
- (void)_onProcessingQueue_pauseDownload;
- (void)_onProcessingQueue_resumeDownload;
- (void)startDownloadWithCompletion:(CDUnknownBlockType)arg1;
- (void)pauseDownload;
- (void)_enqueueAsyncProcessingQueueStrongSelfBlock:(CDUnknownBlockType)arg1;
- (void)_onProcessingQueue_startDownloadWithCompletion:(CDUnknownBlockType)arg1;
- (void)_onProcessingQueue_cancelAndRemoveDownload;
- (void)_notifyDelegateStateDidChange:(id)arg1;
- (void)_onProcessingQueue_updateStateAndNotifyDelegate:(_Bool)arg1;
- (void)_onProcessingQueue_setState:(id)arg1 andNotifyDelegate:(_Bool)arg2;
- (_Bool)_allAssetsDownloaded;

@end

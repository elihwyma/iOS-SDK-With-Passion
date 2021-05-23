/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSString, TVPDownload, VUIMediaEntityAssetControllerState, VUIMediaEntityType, VUIVideoManagedObject;

@protocol OS_dispatch_queue, VUIMediaEntityAssetControllerDelegate, VUIMediaEntityIdentifier;

__attribute__((visibility("hidden")))
@interface VUISidebandMediaItemAssetController : NSObject

{
    VUIVideoManagedObject *_videoManagedObjectInternal;
    NSObject<VUIMediaEntityIdentifier> *_mediaEntityIdentifierInternal;
    id <VUIMediaEntityAssetControllerDelegate> _delegateInternal;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_completionDispatchQueueInternal;
    VUIMediaEntityAssetControllerState *_stateInternal;
    TVPDownload *_downloadInternal;
}

@property (retain, nonatomic) VUIVideoManagedObject *videoManagedObjectInternal;
@property (retain, nonatomic) NSObject<VUIMediaEntityIdentifier> *mediaEntityIdentifierInternal;
@property (weak, nonatomic) id <VUIMediaEntityAssetControllerDelegate> delegateInternal;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionDispatchQueueInternal;
@property (retain, nonatomic) VUIMediaEntityAssetControllerState *stateInternal;
@property (retain, nonatomic) TVPDownload *downloadInternal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSObject<VUIMediaEntityIdentifier> *mediaEntityIdentifier;
@property (copy, nonatomic, readonly) VUIMediaEntityType *mediaEntityType;
@property (weak, nonatomic) id <VUIMediaEntityAssetControllerDelegate> delegate;
@property (nonatomic, readonly) _Bool supportsStartingDownload;
@property (copy, nonatomic, readonly) VUIMediaEntityAssetControllerState *state;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionDispatchQueue;

- (void)dealloc;
- (void)invalidate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)downloadManagerDownloadsDidChange:(id)arg1;
- (void)resumeDownload;
- (void)download:(id)arg1 progressDidChange:(double)arg2;
- (void)download:(id)arg1 didChangeStateTo:(long long)arg2;
- (void)cancelAndRemoveDownload;
- (void)_updateObservedDownload;
- (void)_updateDownloadStateAndNotifyDelegates;
- (void)startDownloadWithCompletion:(CDUnknownBlockType)arg1;
- (void)pauseDownload;
- (id)initWithVideoManagedObject:(id)arg1 mediaEntityIdentifier:(id)arg2;

@end

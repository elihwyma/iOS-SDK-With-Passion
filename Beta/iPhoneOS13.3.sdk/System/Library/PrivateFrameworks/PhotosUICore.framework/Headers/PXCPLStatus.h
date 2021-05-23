/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXObservable.h>

@class CPLStatus, NSObject, NSProgress, NSString, PHPhotoLibrary, PLPhotoLibrary, PXAssetCountObserver, PXCPLState;

@protocol OS_dispatch_queue;

@interface PXCPLStatus : PXObservable

{
    PXCPLState *_state;
    NSObject<OS_dispatch_queue> *_serialUpdateQueue;
    CPLStatus *_cplStatus;
    unsigned long long _syncProgressState;
    id _syncProgressSubscriber;
    NSProgress *_syncProgress;
    PXAssetCountObserver *_numberOfReferencedItemsObserver;
    unsigned long long _numberOfReferencedItems;
    PHPhotoLibrary *_ph_photoLibrary;
    PLPhotoLibrary *_pl_photoLibrary;
    unsigned long long _needsUpdate;
    double _lastUpdate;
    _Bool _isUpdating;
    CDUnknownBlockType _handler;
}

@property (nonatomic, readonly) PXCPLState *state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)currentStatusProvider;

- (id)init;
- (void)dealloc;
- (CDUnknownBlockType)handler;
- (void)setHandler:(CDUnknownBlockType)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setState:(id)arg1;
- (void)statusDidChange:(id)arg1;
- (void)assetCountObserver:(id)arg1 didChangeNumberOfAssets:(long long)arg2;
- (id)_initWithInitialUpdateType:(unsigned long long)arg1 isSynchronous:(_Bool)arg2;
- (id)_initWithInitialSynchronousUpdateType:(unsigned long long)arg1;
- (id)_updateState:(id)arg1 requestedTypes:(unsigned long long)arg2;
- (void)_performUpdate;
- (void)_schedulePendingUpdates;
- (void)_scheduleUpdateForType:(unsigned long long)arg1;
- (void)_powerStateDidChange:(id)arg1;
- (void)_setSyncProgress:(id)arg1;
- (void)_subscribeToSyncProgress;
- (void)_unsubscribeFromSyncProgress;
- (void)userPauseICloudPhotos;
- (void)userResumeICloudPhotos;
- (void)userPauseCloudPhotos:(_Bool)arg1;
- (void)syncWithCloudPhotoLibrary;

@end

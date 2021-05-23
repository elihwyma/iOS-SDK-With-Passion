/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHImportSource.h>

@class ICCameraDevice, ICCameraDeviceRemovedItemsCoalescer, NSArray, NSDate, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject, NSProgress, NSString;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PHImportDeviceSource : PHImportSource

{
    double _idleTimeout;
    NSDate *_timeoutStart;
    NSObject<OS_dispatch_source> *_idleTimer;
    NSObject<OS_dispatch_queue> *_timeoutSerializer;
    NSMutableArray *_assetThumbnailRequests;
    _Bool _waitingForAssetThumbnailRequest;
    NSMutableArray *_assetMetadataRequests;
    _Bool _waitingForAssetMetadataRequest;
    NSMutableArray *_assetThumbnailHighPriorityRequests;
    NSMapTable *_assetDataRequestsByCameraItem;
    NSObject<OS_dispatch_queue> *_assetDataRequestQueue;
    _Bool _isEjecting;
    _Bool _ejectAfterDelete;
    NSObject<OS_dispatch_queue> *_deleteEjectQueue;
    ICCameraDeviceRemovedItemsCoalescer *_removalCoalescer;
    NSMutableSet *_removedCameraFiles;
    NSMutableDictionary *_assetByCameraFile;
    NSObject<OS_dispatch_queue> *_assetByCameraFileAccess;
    NSProgress *_deleteProgress;
    NSArray *_avchdAssets;
    NSObject<OS_dispatch_queue> *_serialHackQueue;
    NSMutableArray *_deleteJobs;
    ICCameraDevice *_camera;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *deleteEjectQueue;
@property (retain, nonatomic) ICCameraDeviceRemovedItemsCoalescer *removalCoalescer;
@property (retain, nonatomic) NSMutableSet *removedCameraFiles;
@property (nonatomic) _Bool isEjecting;
@property (nonatomic) _Bool ejectAfterDelete;
@property (retain, nonatomic) NSMutableDictionary *assetByCameraFile;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *assetByCameraFileAccess;
@property (retain, nonatomic) NSProgress *deleteProgress;
@property (retain, nonatomic) NSArray *avchdAssets;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialHackQueue;
@property (retain, nonatomic) NSMutableArray *deleteJobs;
@property (retain) ICCameraDevice *camera;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)name;
- (id)path;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)uuid;
- (id)initWithDevice:(id)arg1;
- (_Bool)isAvailable;
- (struct CGImage *)icon;
- (_Bool)isAppleDevice;
- (void)device:(id)arg1 didEncounterError:(id)arg2;
- (void)cameraDevice:(id)arg1 didAddItems:(id)arg2;
- (void)cameraDevice:(id)arg1 didRemoveItems:(id)arg2;
- (void)deviceDidBecomeReady:(id)arg1;
- (void)device:(id)arg1 didOpenSessionWithError:(id)arg2;
- (void)device:(id)arg1 didCloseSessionWithError:(id)arg2;
- (id)volumePath;
- (id)productKind;
- (void)cameraDeviceDidChangeCapability:(id)arg1;
- (void)didRemoveDevice:(id)arg1;
- (_Bool)canReference;
- (void)beginWork;
- (id)assetsByProcessingItem:(id)arg1;
- (void)endWork;
- (void)dispatchAssetDataRequestAsync:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)cameraDevice:(id)arg1 didReceiveThumbnailForItem:(id)arg2;
- (void)cameraDevice:(id)arg1 didReceiveMetadataForItem:(id)arg2;
- (void)device:(id)arg1 didReceiveStatusInformation:(id)arg2;
- (void)setupDeviceTimeoutHandler;
- (_Bool)canUseCachedThumbnailForRequest:(id)arg1;
- (void)fetchDataUsingRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)sendNextRequestOfType:(unsigned char)arg1;
- (void)finishMetadataForRequest:(id)arg1 importAsset:(id)arg2 error:(id)arg3 atEnd:(CDUnknownBlockType)arg4;
- (void)deviceTimeoutHandler;
- (id)importAssetForCameraFile:(id)arg1 create:(_Bool)arg2;
- (void)removeAssetForCameraFile:(id)arg1;
- (void)cancelAssetLoading;
- (id)deleteImportAssets:(id)arg1 isConfirmed:(_Bool)arg2 isCancelable:(_Bool)arg3 atEnd:(CDUnknownBlockType)arg4;
- (id)cameraFilesForAssets:(id)arg1;
- (_Bool)canDeleteContent;
- (_Bool)canAutolaunch;
- (_Bool)isConnectedDevice;
- (void)eject;
- (void)deviceFinishedEnumeratingItems:(id)arg1;

@end

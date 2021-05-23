/*
 Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <CoreMediaStream/MSASAssetTransferer.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet;

@protocol MSASAssetUploaderDelegate;

@interface MSASAssetUploader : MSASAssetTransferer

{
    _Bool _didEncounterNetworkConditionError;
    int _state;
    NSMutableArray *_itemsInFlight;
    NSMutableDictionary *_assetCollectionsToItemInFlightMap;
    NSMutableDictionary *_assetToAssetCollectionMap;
    NSMutableArray *_finishedAssetCollections;
    NSMutableSet *_assetCollectionsWithAuthorizationError;
    NSMutableDictionary *_assetCollectionGUIDToRequestorContext;
}

@property (nonatomic) int state;
@property (retain, nonatomic) NSMutableArray *itemsInFlight;
@property (retain, nonatomic) NSMutableDictionary *assetCollectionsToItemInFlightMap;
@property (retain, nonatomic) NSMutableDictionary *assetToAssetCollectionMap;
@property (retain, nonatomic) NSMutableArray *finishedAssetCollections;
@property (retain, nonatomic) NSMutableSet *assetCollectionsWithAuthorizationError;
@property (nonatomic) _Bool didEncounterNetworkConditionError;
@property (retain, nonatomic) NSMutableDictionary *assetCollectionGUIDToRequestorContext;
@property (weak, nonatomic) id <MSASAssetUploaderDelegate> delegate;

- (void)workQueueRetryOutstandingActivities;
- (id)_pathForPersonID:(id)arg1;
- (void)workQueueGoIdle;
- (void)_workQueueStop;
- (void)workQueueStop;
- (void)workQueueShutDownCompletionBlock:(CDUnknownBlockType)arg1;
- (void)workQueueCancel;
- (id)_orphanedAssetCollectionError;
- (void)workQueueUploadNextBatch;
- (void)workQueueCancelAssetCollections:(id)arg1;
- (void)workQueueRegisterAssets:(id)arg1 index:(unsigned long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)workQueueRegisterAssetCollections:(id)arg1 index:(unsigned long long)arg2 results:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)registerAssetCollections:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)unregisterAssetCollections:(id)arg1;
- (void)unregisterAssetCollections:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)cancelAssetCollections:(id)arg1;
- (void)workQueueStopTrackingItem:(id)arg1;
- (void)workQueueDidFinishWithItem:(id)arg1 error:(id)arg2;
- (void)MMCSEngine:(id)arg1 didFinishPuttingAsset:(id)arg2 putReceipt:(id)arg3 error:(id)arg4;
- (void)MMCSEngine:(id)arg1 didCreateRequestorContext:(id)arg2 forAssets:(id)arg3;
- (void)MMCSEngine:(id)arg1 didMakePutProgress:(float)arg2 state:(int)arg3 onAsset:(id)arg4;
- (void)didFinishPuttingAllAssets;
- (void)MMCSEngine:(id)arg1 didFinishGettingAsset:(id)arg2 path:(id)arg3 error:(id)arg4;
- (void)MMCSEngine:(id)arg1 didMakeGetProgress:(float)arg2 state:(int)arg3 onAsset:(id)arg4;
- (void)didFinishGettingAllAssets;

@end

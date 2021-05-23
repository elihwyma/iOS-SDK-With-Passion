/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSURL;

@protocol OS_dispatch_queue;

@interface PKRemoteAssetManager : NSObject

{
    NSURL *_directoryURL;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_manifestItemsByRelativeURL;
    NSMutableDictionary *_sha1HexFromRelativeManifest;
    NSMutableArray *_completionHandlers;
}

- (id)remoteAssetManifests;
- (_Bool)assetExistsLocally:(id)arg1;
- (void)downloadRemoteAssetsWithScreenScale:(double)arg1 suffix:(id)arg2 cloudStoreCoordinatorDelegate:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithFileURL:(id)arg1 queue:(id)arg2;
- (void)downloadRemoteAssetsWithScreenScale:(double)arg1 suffix:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)deviceSpecificItemsForScreenScale:(double)arg1 suffix:(id)arg2;
- (id)itemWithRelativePath:(id)arg1;
- (id)sha1HexFromRelativeManifestWithRelativePath:(id)arg1;
- (void)downloadRemoteAssetsWithCompletion:(CDUnknownBlockType)arg1;
- (id)pendingRemoteAssetsItemsForScreenScale:(double)arg1 suffix:(id)arg2;
- (void)_downloadRemoteAssetItem:(id)arg1 withCloudStoreCoordinatorDelegate:(id)arg2 shouldWriteData:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_downloadRemoteAssetsWithScreenScale:(double)arg1 suffix:(id)arg2 cloudStoreCoordinatorDelegate:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_flushBundleCaches;
- (void)_callCompletionHandlersWithFinishState:(_Bool)arg1 progress:(float)arg2 error:(id)arg3;
- (_Bool)addRemoteAssetData:(id)arg1 shouldWriteData:(_Bool)arg2 forManifestItem:(id)arg3 error:(id *)arg4;
- (_Bool)addRemoteAssetData:(id)arg1 forManifestItem:(id)arg2 error:(id *)arg3;
- (id)deviceSpecificItems;
- (id)pendingRemoteAssetsItems;
- (void)downloadRemoteAssetItem:(id)arg1 withCloudStoreCoordinatorDelegate:(id)arg2 shouldWriteData:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;

@end

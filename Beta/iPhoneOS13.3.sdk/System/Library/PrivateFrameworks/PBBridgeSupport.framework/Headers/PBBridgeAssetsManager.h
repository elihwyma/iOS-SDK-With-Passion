/*
 Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface PBBridgeAssetsManager : NSObject

{
    CDUnknownBlockType _assetDownloadCompletion;
    CDUnknownBlockType _allAssetsDownloadCompletion;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (copy, nonatomic) CDUnknownBlockType assetDownloadCompletion;
@property (copy, nonatomic) CDUnknownBlockType allAssetsDownloadCompletion;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)init;
- (void)beginPullingAssetsForAdvertisingName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_runAssetQuery:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_beginPullingAssetsForDeviceAttributes:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)hardwareGenerationForProductType:(id)arg1;
- (id)_gatherQueries:(id)arg1 withAtlas:(id)arg2;
- (void)_beginDownloadsForAssets:(id)arg1;
- (void)_runMultipleAssetQueries:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_assetQueryForDeviceAttributes:(unsigned long long)arg1 deviceAttributes:(id)arg2 atlasDetails:(id)arg3;
- (void)_checkAssetDownloadStateWithAssets:(id)arg1;
- (void)beginPullingAssetsForDeviceMaterial:(unsigned long long)arg1 size:(unsigned long long)arg2 branding:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)beginPullingAssetsForDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)purgeAllAssetsLocalOnly:(_Bool)arg1;
- (id)_assetQueryForType:(unsigned long long)arg1 forDevice:(id)arg2 atlasDetails:(id)arg3;

@end

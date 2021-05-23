/*
 Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

#import <NSObject.h>

@class NSMutableSet, NSString;

@interface ATDetailedProgressInfoForAssetType : NSObject

{
    NSMutableSet *failedAssetIds;
    unsigned long long _totalBytesToSync;
    unsigned long long _totalBytesSynced;
    unsigned long long _totalAssetsToSync;
    unsigned long long _totalAssetsSynced;
    unsigned long long _failedAssetCount;
    double _progress;
    NSString *_atAssetType;
}

@property (nonatomic, getter=getTotalBytesToSync) unsigned long long totalBytesToSync;
@property (nonatomic, getter=getTotalBytesSynced) unsigned long long totalBytesSynced;
@property (nonatomic, getter=getTotalAssetsToSync) unsigned long long totalAssetsToSync;
@property (nonatomic, getter=getTotalAssetsSynced) unsigned long long totalAssetsSynced;
@property (nonatomic, getter=getFailedAssetsCount) unsigned long long failedAssetCount;
@property (nonatomic, getter=getSyncProgress) double progress;
@property (retain, nonatomic, getter=getAssetType) NSString *atAssetType;

+ (id)serializedProgressInfoFromATDetailedProgressInfoForAssetType:(id)arg1;

- (id)description;
- (void)_computeProgress;
- (void)updateBytesDownloaded:(unsigned long long)arg1;
- (id)initWithAssetType:(id)arg1 assetCountToSync:(unsigned long long)arg2 byteCountToSync:(unsigned long long)arg3;
- (id)initWithAssetType:(id)arg1 assetCountToSync:(unsigned long long)arg2 byteCountToSync:(unsigned long long)arg3 assetCountSynced:(unsigned long long)arg4 byteCountSyned:(unsigned long long)arg5;
- (void)updateAsset:(id)arg1 syncedWithSuccess:(_Bool)arg2 bytesDownloaded:(unsigned long long)arg3;
- (void)updateBytesToDownload:(unsigned long long)arg1;
- (void)updateAssetsToDownload:(unsigned long long)arg1;

@end

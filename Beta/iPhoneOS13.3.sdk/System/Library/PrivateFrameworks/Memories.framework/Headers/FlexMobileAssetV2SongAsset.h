/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/FlexCloudSongAsset.h>

@class MAAsset;

@interface FlexMobileAssetV2SongAsset : FlexCloudSongAsset

{
    MAAsset *_mobileAsset;
}

@property (readonly) MAAsset *mobileAsset;

- (_Bool)contentUpdateAvaliable;
- (unsigned long long)assetStatus;
- (long long)contentVersionForAssetLocation:(unsigned long long)arg1;
- (id)_metadataForAssetWithNewestContentVersion;
- (id)initWithAssetID:(id)arg1 asset:(id)arg2 localURL:(id)arg3 cloudManager:(id)arg4 contentVersion:(long long)arg5 compatibilityVersion:(long long)arg6;
- (long long)compatibilityVersionForAssetLocation:(unsigned long long)arg1;

@end

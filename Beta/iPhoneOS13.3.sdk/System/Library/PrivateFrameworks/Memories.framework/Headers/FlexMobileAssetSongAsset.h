/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/FlexCloudSongAsset.h>

@class NSString;

@interface FlexMobileAssetSongAsset : FlexCloudSongAsset

{
    NSString *_mobileAssetTypeIdentifier;
    NSString *_mobileAssetPropertyType;
}

@property (readonly) NSString *mobileAssetTypeIdentifier;
@property (readonly) NSString *mobileAssetPropertyType;

- (_Bool)contentUpdateAvaliable;
- (long long)contentVersionForAssetLocation:(unsigned long long)arg1;
- (long long)compatibilityVersionForAssetLocation:(unsigned long long)arg1;
- (id)_assetCachedMetadata;
- (id)initWithAssetID:(id)arg1 assetStatus:(unsigned long long)arg2 localURL:(id)arg3 cloudManager:(id)arg4 mobileAssetTypeIdentifier:(id)arg5 mobileAssetPropertyType:(id)arg6 contentVersion:(long long)arg7 compatibilityVersion:(long long)arg8;

@end

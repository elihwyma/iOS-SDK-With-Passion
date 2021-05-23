/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <CameraEffectsKit/JTLocalAssetMediaItem.h>

@class NSString, NSURL, PHAsset;

@interface JTAssetMediaItem : JTLocalAssetMediaItem

{
    PHAsset *_asset;
    NSString *_assetIdentifier;
    NSString *_masterFingerprint;
    NSString *_adjustedFingerprint;
    NSURL *_assetLocalURL;
}

@property (copy, nonatomic) NSString *assetIdentifier;
@property (copy, nonatomic) NSString *masterFingerprint;
@property (copy, nonatomic) NSString *adjustedFingerprint;
@property (retain, nonatomic) PHAsset *asset;
@property (retain, nonatomic) NSURL *assetLocalURL;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)info;
- (void)cancelDownload;
- (id)initWithAssetIdentifier:(id)arg1;
- (id)initWithInfo:(id)arg1 delegate:(id)arg2;
- (void)checkIfAssetIsMissing;
- (void)fetchAssetForce:(_Bool)arg1;
- (void)downloadAssetsWithProgressHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)reloadAsset;

@end

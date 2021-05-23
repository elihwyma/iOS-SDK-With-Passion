/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol PXDisplayAsset, PXDisplayAssetCollection;

@interface PXProgrammaticNavigationDestination : NSObject

{
    id <PXDisplayAsset> _asset;
    id <PXDisplayAssetCollection> _assetCollection;
    long long _type;
    long long _revealMode;
    NSString *_assetUUID;
    NSString *_assetLocalIdentifier;
    NSString *_assetCollectionUUID;
    long long _assetCollectionType;
    long long _assetCollectionSubtype;
}

@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) long long revealMode;
@property (copy, nonatomic, readonly) NSString *assetUUID;
@property (copy, nonatomic, readonly) NSString *assetLocalIdentifier;
@property (nonatomic, readonly) id <PXDisplayAsset> asset;
@property (copy, nonatomic, readonly) NSString *assetCollectionUUID;
@property (nonatomic, readonly) long long assetCollectionType;
@property (nonatomic, readonly) long long assetCollectionSubtype;
@property (nonatomic, readonly) id <PXDisplayAssetCollection> assetCollection;

- (id)description;
- (id)initWithURL:(id)arg1;
- (id)initWithObject:(id)arg1 revealMode:(long long)arg2;
- (id)initWithType:(long long)arg1 revealMode:(long long)arg2;
- (id)initWithType:(long long)arg1 revealMode:(long long)arg2 assetUUID:(id)arg3 assetCollectionUUID:(id)arg4;

@end

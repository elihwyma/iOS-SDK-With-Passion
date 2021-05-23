/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSectionedObjectReference.h>

@class NSString;

@protocol PXDisplayAsset, PXDisplayAssetCollection;

@interface PXAssetReference : PXSectionedObjectReference

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id asset;
@property (nonatomic, readonly) id assetCollection;
@property (nonatomic, readonly) struct PXSimpleIndexPath simpleIndexPath;
@property (nonatomic, readonly) id <PXDisplayAsset> asset;
@property (nonatomic, readonly) id <PXDisplayAssetCollection> assetCollection;

@end

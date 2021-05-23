/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

#import <PhotosUI/Swift-Protocol.h>

@class NSIndexPath, NSString;

@protocol PUDisplayAsset, PUDisplayAssetCollection;

@interface PUAssetReference : NSObject <Swift>

{
    id <PUDisplayAsset> _asset;
    id <PUDisplayAssetCollection> _assetCollection;
    NSIndexPath *_indexPath;
    NSString *_dataSourceIdentifier;
}

@property (nonatomic, readonly) id <PUDisplayAsset> asset;
@property (nonatomic, readonly) id <PUDisplayAssetCollection> assetCollection;
@property (nonatomic, readonly) NSIndexPath *indexPath;
@property (nonatomic, readonly) NSString *dataSourceIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) struct PXSimpleIndexPath simpleIndexPath;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAsset:(id)arg1 assetCollection:(id)arg2 indexPath:(id)arg3 dataSourceIdentifier:(id)arg4;

@end

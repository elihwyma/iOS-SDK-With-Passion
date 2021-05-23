/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class PXAssetReference;

@interface PXDraggingItemLocalObject : NSObject

{
    PXAssetReference *_assetReference;
}

@property (nonatomic, readonly) PXAssetReference *assetReference;
@property (nonatomic, readonly) _Bool needsImport;

- (id)init;
- (id)initWithAssetReference:(id)arg1;

@end

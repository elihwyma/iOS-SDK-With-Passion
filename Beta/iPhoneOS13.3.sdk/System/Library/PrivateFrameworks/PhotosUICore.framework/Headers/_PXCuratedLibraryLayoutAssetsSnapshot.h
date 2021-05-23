/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSDictionary, PXAssetsDataSource;

@protocol NSCopying;

@interface _PXCuratedLibraryLayoutAssetsSnapshot : NSObject

{
    PXAssetsDataSource *_dataSource;
    NSDictionary *_spriteSnapshotIndexByAssetIdentifier;
    long long _spriteSnapshotsCount;
    long long _spriteSnapshotsCapacity;
    CDStruct_fd7a954a *_spriteSnapshots;
    long long _zoomLevel;
    struct CGPoint _offset;
    struct CGRect _visibleRect;
    struct CGRect _fullyVisibleRect;
}

@property (nonatomic) struct CGPoint offset;
@property (retain, nonatomic) id <NSCopying> dominantAssetIdentifier;
@property (nonatomic, readonly) long long zoomLevel;
@property (nonatomic, readonly) struct CGRect visibleRect;
@property (nonatomic, readonly) struct CGRect fullyVisibleRect;

- (void)dealloc;
- (id)initWithLayout:(id)arg1;
- (CDStruct_fd7a954a)spriteSnapshotForAssetWithIdentifier:(id)arg1;
- (void)enumerateAssetInfoForGeometries:(const CDStruct_3ab912e1 *)arg1 styles:(const CDStruct_506f5052 *)arg2 infos:(const CDStruct_9d1ebe49 *)arg3 count:(unsigned int)arg4 options:(unsigned long long)arg5 usingBlock:(CDUnknownBlockType)arg6;
- (void)enumerateAssetIdentifiersUsingBlock:(CDUnknownBlockType)arg1;
- (long long)_addSpriteSnapshot:(CDStruct_fd7a954a)arg1;
- (id)assetIdentifierForAssetReference:(id)arg1;

@end

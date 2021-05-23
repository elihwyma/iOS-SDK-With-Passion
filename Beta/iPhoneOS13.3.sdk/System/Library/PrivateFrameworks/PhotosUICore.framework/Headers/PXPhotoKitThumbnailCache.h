/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSCache, NSMutableDictionary, NSString, PHPhotoLibrary;

@interface PXPhotoKitThumbnailCache : NSObject

{
    NSCache *_cache;
    PHPhotoLibrary *_photoLibrary;
    struct os_unfair_lock_s _lock;
    NSMutableDictionary *_lock_cachedThumbnailIndexByObjectID;
    unsigned long long _sizeLimit;
    NSString *_label;
}

@property (nonatomic, readonly) unsigned long long sizeLimit;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (copy) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (id)tableThumbnailDataForAsset:(id)arg1 dataSpecification:(struct PHAssetResourceTableDataSpecification *)arg2;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (id)initWithSizeLimit:(unsigned long long)arg1 photoLibrary:(id)arg2;
- (void)cacheThumbnailData:(id)arg1 specification:(const struct PHAssetResourceTableDataSpecification *)arg2 forAsset:(id)arg3;

@end

/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Photos/PHPhotoLibrary.h>

@class PXPhotoLibraryLocalDefaults;

@interface PHPhotoLibrary (PhotosUICore)

@property (nonatomic, readonly, getter=px_areChangesPaused) _Bool px_changesPaused;
@property (readonly) PXPhotoLibraryLocalDefaults *px_localDefaults;

+ (id)px_appPhotoLibrary;

- (void)px_unregisterChangeObserver:(id)arg1;
- (void)px_registerChangeObserver:(id)arg1;
- (id)px_changeDistributor;
- (id)px_beginPausingChangesWithTimeout:(double)arg1;
- (void)px_endPausingChanges:(id)arg1;
- (_Bool)px_fetchHasNoVisibleAssets;
- (id)px_objectWithLocalIdentifier:(id)arg1;
- (id)px_assetCollectionForSmartAlbumWithSubtype:(long long)arg1;
- (id)px_assetCollectionWithLocalIdentifier:(id)arg1;
- (id)px_memoryWithLocalIdentifier:(id)arg1;
- (id)px_assetCollectionWithTransientIdentifier:(id)arg1;
- (id)px_collectionListWithTransientIdentifier:(id)arg1;
- (id)px_collectionListWithLocalIdentifier:(id)arg1;

@end

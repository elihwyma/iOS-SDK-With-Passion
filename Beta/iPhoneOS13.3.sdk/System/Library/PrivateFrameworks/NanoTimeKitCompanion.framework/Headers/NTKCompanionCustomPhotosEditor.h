/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKCompanionResourceDirectoryEditor.h>

@class NSCache, NSMutableArray, NSMutableDictionary;

@interface NTKCompanionCustomPhotosEditor : NTKCompanionResourceDirectoryEditor

{
    NSMutableDictionary *_pickedPhotos;
    NSMutableDictionary *_newPhotos;
    NSMutableArray *_orderList;
    NSCache *_scaledImageCache;
    _Bool _previewIsValid;
}

@property (nonatomic, readonly) long long photosCount;

- (_Bool)canChangeOriginalCropOfPhotoAtIndex:(long long)arg1;
- (struct CGSize)minimumNormalizedCropSizeForPhotoAtIndex:(long long)arg1;
- (struct CGRect)originalCropForPhotoAtIndex:(long long)arg1;
- (void)imageAndCropForPhotoAtIndex:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)imageInPhotoLibraryForPhotoAtIndex:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deletePhotoAtIndex:(long long)arg1;
- (_Bool)setOriginalCrop:(struct CGRect)arg1 forPhotoAtIndex:(long long)arg2;
- (id)initWithResourceDirectory:(id)arg1 forDevice:(id)arg2;
- (void)_readPickedPhotosFrom:(id)arg1;
- (void)_fetchAssetsForPickedPhotos;
- (id)_copyOrTranscodePhotosTo:(id)arg1;
- (void)_reinitializeWithImageList:(id)arg1 andResourceDirectory:(id)arg2;
- (id)_fetchAssetsForNewPhotos:(id)arg1;
- (_Bool)addAssetsFromAssetList:(id)arg1;
- (_Bool)isPhotoInPhotoLibraryAtIndex:(long long)arg1;
- (void)generateGalleryPreviewResourceDirectoryWithCompletion:(CDUnknownBlockType)arg1;
- (void)finalizeWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)addPhotosFromUIImagePicker:(id)arg1;
- (void)movePhotoAtIndex:(long long)arg1 toIndex:(long long)arg2;

@end

/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKCompanionCustomPhotosEditor.h>

@class NSMutableArray;

@interface NTKCompanionTransientCustomPhotosEditor : NTKCompanionCustomPhotosEditor

{
    NSMutableArray *_photos;
    _Bool _previewIsValid;
}

- (long long)photosCount;
- (_Bool)canChangeOriginalCropOfPhotoAtIndex:(long long)arg1;
- (struct CGSize)minimumNormalizedCropSizeForPhotoAtIndex:(long long)arg1;
- (struct CGRect)originalCropForPhotoAtIndex:(long long)arg1;
- (void)imageAndCropForPhotoAtIndex:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)imageInPhotoLibraryForPhotoAtIndex:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deletePhotoAtIndex:(long long)arg1;
- (_Bool)setOriginalCrop:(struct CGRect)arg1 forPhotoAtIndex:(long long)arg2;
- (id)initWithResourceDirectory:(id)arg1 forDevice:(id)arg2;
- (_Bool)addAssetsFromAssetList:(id)arg1;
- (_Bool)isPhotoInPhotoLibraryAtIndex:(long long)arg1;
- (void)generateGalleryPreviewResourceDirectoryWithCompletion:(CDUnknownBlockType)arg1;
- (void)finalizeWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)addPhotosFromUIImagePicker:(id)arg1;
- (void)movePhotoAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (id)_writeTransientPhotosInto:(id)arg1;
- (_Bool)addImageList:(id)arg1;

@end

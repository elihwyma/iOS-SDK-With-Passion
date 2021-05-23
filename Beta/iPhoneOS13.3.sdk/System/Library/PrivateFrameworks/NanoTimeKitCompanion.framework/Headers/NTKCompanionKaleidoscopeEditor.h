/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKCompanionResourceDirectoryEditor.h>

@class NTKPhoto, PHAsset, UIImage;

@interface NTKCompanionKaleidoscopeEditor : NTKCompanionResourceDirectoryEditor

{
    NTKPhoto *_pickedPhoto;
    UIImage *_pickedImage;
    PHAsset *_newAsset;
    UIImage *_newImage;
}

@property (nonatomic, readonly) long long photosCount;

+ (id)_fetchAssetForPhoto:(id)arg1;

- (id)initWithResourceDirectory:(id)arg1 forDevice:(id)arg2;
- (void)generateGalleryPreviewResourceDirectoryWithCompletion:(CDUnknownBlockType)arg1;
- (void)finalizeWithCompletion:(CDUnknownBlockType)arg1;
- (void)_readPickedPhoto;
- (void)_reinitializeWithPhoto:(id)arg1 image:(id)arg2;
- (void)setPhoto:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setRawImage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)imageForPhotoWithCompletion:(CDUnknownBlockType)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class CLKDevice, NSString;

@interface NTKCompanionResourceDirectoryEditor : NSObject

{
    _Bool _resourceDirectoryIsHardLink;
    CLKDevice *_device;
    NSString *_resourceDirectory;
    long long _state;
    NSString *_galleryPreviewResourceDirectory;
}

@property (retain, nonatomic) NSString *resourceDirectory;
@property (nonatomic) long long state;
@property (retain, nonatomic) NSString *galleryPreviewResourceDirectory;
@property (nonatomic, readonly) CLKDevice *device;

+ (id)_linkPhoto:(id)arg1 to:(id)arg2 previewOnly:(_Bool)arg3;
+ (id)_transcodeAsset:(id)arg1 withCrop:(struct CGRect)arg2 into:(id)arg3 previewOnly:(_Bool)arg4;
+ (struct CGSize)_watchPhotoImageSize;
+ (id)_videoAssetOf:(id)arg1;
+ (struct CGSize)_watchPhotoVideoSize;
+ (id)_subsampledImageWithData:(id)arg1 orientation:(long long)arg2 subsampleFactor:(unsigned long long)arg3;
+ (void)_imageDataForAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)_createResourceDirectoryWithAsset:(id)arg1 forDevice:(id)arg2 previewOnly:(_Bool)arg3;
+ (id)_writeAsset:(id)arg1 image:(id)arg2 withImageCrop:(struct CGRect)arg3 to:(id)arg4;
+ (id)_scaleImage:(id)arg1 toLongestEdgeInPixels:(double)arg2;
+ (id)_cropAndScaleUIImage:(id)arg1 cropRect:(struct CGRect)arg2 outputSize:(struct CGSize)arg3;
+ (_Bool)_transcodeStillImageOf:(id)arg1 forPhoto:(id)arg2 withCrop:(struct CGRect)arg3 into:(id)arg4;
+ (_Bool)_transcodeIrisVideoOf:(id)arg1 forPhoto:(id)arg2 withCrop:(struct CGRect)arg3 into:(id)arg4 previewOnly:(_Bool)arg5;
+ (unsigned long long)_subsampleFactorForScale:(double)arg1;

- (void)dealloc;
- (id)initWithResourceDirectory:(id)arg1 forDevice:(id)arg2;
- (void)generateGalleryPreviewResourceDirectoryWithCompletion:(CDUnknownBlockType)arg1;
- (void)finalizeWithCompletion:(CDUnknownBlockType)arg1;
- (void)_deleteResourceDirectoryHardLinkIfNecessary;

@end

/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <CameraEffectsKit/JTAssetMediaItem.h>

@class JTThumbnailGenerator;

@interface JTStillMediaItem : JTAssetMediaItem

{
    JTThumbnailGenerator *_thumbnailGenerator;
    struct CGSize _sourceImageSize;
}

@property (nonatomic) struct CGSize sourceImageSize;
@property (retain, nonatomic) JTThumbnailGenerator *thumbnailGenerator;

+ (void)stillMediaItemWithAssetIdentifier:(id)arg1 progressHandlerBlock:(CDUnknownBlockType)arg2 delegate:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)stillMediaItemWithLocalURL:(id)arg1 delegate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)info;
- (void)commonInit;
- (id)assetURL;
- (int)durationAt30fps;
- (struct CGSize)sizeForQuality:(int)arg1;
- (id)initWithInfo:(id)arg1 delegate:(id)arg2;
- (_Bool)canBeAddedToSequence;
- (_Bool)hasVisualCharacteristic;
- (_Bool)hasPhotoCharacteristic;
- (void)generateThumbnailWithProgressHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)generateLocalURLForAsset;
- (struct CGSize)playBackImageSize:(struct CGSize)arg1;
- (struct CGSize)exportImageSize:(struct CGSize)arg1;
- (struct CGSize)imageSizeForRenderingIntent:(int)arg1 originalSize:(struct CGSize)arg2;
- (struct CGSize)sizeForMaxPixels:(double)arg1 sourceSize:(struct CGSize)arg2;
- (struct CGSize)thumbImageSize:(struct CGSize)arg1;
- (struct CGImage *)imageForURL:(id)arg1 renderingIntent:(int)arg2;
- (_Bool)isImageValid:(id)arg1 renderingIntent:(int)arg2 size:(struct CGSize *)arg3;

@end

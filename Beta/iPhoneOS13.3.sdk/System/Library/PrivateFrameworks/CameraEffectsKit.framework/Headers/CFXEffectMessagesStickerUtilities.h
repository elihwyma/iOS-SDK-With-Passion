/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@interface CFXEffectMessagesStickerUtilities : NSObject

+ (id)animatedPreviewsDirectory;
+ (id)animatedPreviewFileNameForOverlayID:(id)arg1;
+ (struct CGSize)JFX_recommendedStickerPreviewSizeInPixelsForStickerSize:(long long)arg1;
+ (void)cacheAnimatedStickerPreviewsForOverlayTypeId:(id)arg1 atStickerSize:(long long)arg2 previewDuration:(double)arg3 previewFrameRate:(unsigned long long)arg4 previewCompletedBlock:(CDUnknownBlockType)arg5;
+ (id)overlayIDFromAnimatedPreviewFileName:(id)arg1;
+ (long long)numberOfStickersForEffectTypeId:(id)arg1;
+ (id)stickerPropertiesForIndex:(long long)arg1 forEffectTypeId:(id)arg2;

@end

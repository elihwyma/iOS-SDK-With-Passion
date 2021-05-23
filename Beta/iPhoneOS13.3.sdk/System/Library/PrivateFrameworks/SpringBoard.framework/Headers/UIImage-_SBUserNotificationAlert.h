/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIImage.h>

@interface UIImage (_SBUserNotificationAlert)

@property (nonatomic, readonly) struct CGSize pixelSize;

- (_Bool)isAnimated;
- (_Bool)sbs_hasAlpha;
- (void)_sbSetAssociatedAssetManager:(id)arg1;
- (id)_thumbnailFitToSize:(struct CGSize)arg1;
- (struct CGImage *)_newThumbnailWithJPEG:(id)arg1 forMaxPixelDimension:(double)arg2;
- (struct CGImageSource *)_newSource;
- (struct CGImage *)_newThumbnailWithImageSource:(struct CGImageSource *)arg1 forMaxPixelDimension:(double)arg2;
- (id)sbg_thumbnailFitToSize:(struct CGSize)arg1;
- (id)sbg_squareImage;

@end

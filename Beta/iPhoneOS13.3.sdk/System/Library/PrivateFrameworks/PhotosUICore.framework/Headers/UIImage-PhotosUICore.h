/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIImage.h>

@interface UIImage (PhotosUICore)

@property (nonatomic, readonly) struct CGSize px_pixelSize;

+ (id)px_imageFromSolidColor:(id)arg1;
+ (void)px_preloadPlayOverlayGlyphsIfNeeded;
+ (id)px_imageWithSize:(struct CGSize)arg1 path:(id)arg2 color:(id)arg3 displayScale:(double)arg4;
+ (id)px_roundedCornerMaskImage:(CDStruct_2bd92d94)arg1 size:(struct CGSize)arg2;
+ (id)px_playOverlayImage:(unsigned long long)arg1;
+ (id)px_imageNamed:(id)arg1;
+ (id)_px_createOverlayImageWithGlyphStyle:(unsigned long long)arg1 backgroundWhite:(double)arg2 backgroundAlpha:(double)arg3 glyphAlpha:(double)arg4;

- (id)px_debugImageWithStrokeRect:(struct CGRect)arg1 color:(id)arg2 text:(id)arg3;
- (_Bool)px_isLargerThan:(id)arg1;
- (id)px_tintedImageWithColor:(id)arg1;
- (id)px_tintedCircularImageWithColor:(id)arg1 backgroundColor:(id)arg2;
- (id)px_imageWithDebugRect:(struct CGRect)arg1;
- (id)px_imageByCroppingEdgeInsets:(struct UIEdgeInsets)arg1;
- (id)px_imageByCroppingRect:(struct CGRect)arg1 pixelTargetSize:(struct CGSize)arg2 cornerRadius:(double)arg3;
- (id)px_extractPlayOverlayBackgroundImageFromLocation:(struct CGPoint)arg1 inViewportWithSize:(struct CGSize)arg2 contentMode:(long long)arg3 contentsRect:(struct CGRect)arg4 asynchronously:(_Bool)arg5 handler:(CDUnknownBlockType)arg6;
- (id)px_ASTCCompressedImageWithBlockSize:(unsigned int)arg1;
- (id)px_debugImageWithStrokeRect:(struct CGRect)arg1 color:(id)arg2;
- (id)px_backdropImageWithStyle:(long long)arg1;
- (id)px_predrawnImage;
- (id)px_imageByCroppingRect:(struct CGRect)arg1;
- (void)px_drawInRect:(struct CGRect)arg1 withContentMode:(long long)arg2;

@end

/*
 Image: /System/Library/Frameworks/VisionKit.framework/VisionKit
 */

#import <UIKit/UIImage.h>

@interface UIImage (DCUtilities)

+ (id)dc_largeSystemImageNamed:(id)arg1;
+ (struct UIImage *)dc_imageWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 orientation:(long long)arg3;
+ (struct UIImage *)dc_imageWithCGImage:(struct CGImage *)arg1;
+ (struct UIImage *)dc_orientedImageFromCGImage:(struct CGImage *)arg1 scale:(double)arg2 transform:(struct CGAffineTransform)arg3;
+ (id)dc_orientationMetadataFromImageOrientation:(long long)arg1;
+ (id)dc_systemImageNamed:(id)arg1 scale:(long long)arg2;
+ (struct UIImage *)dc_orientedImageFromImage:(struct UIImage *)arg1 fromOrientation:(long long)arg2;
+ (struct UIImage *)dc_orientedImageFromImage:(struct UIImage *)arg1 toOrientation:(long long)arg2;
+ (struct CGRect)dc_aspectFitImageFrameForViewWithFrame:(struct CGRect)arg1 imageSize:(struct CGSize)arg2;
+ (id)dc_systemImageNamed:(id)arg1 textStyle:(id)arg2;
+ (id)dc_systemImageNamed:(id)arg1 textStyle:(id)arg2 scale:(long long)arg3;
+ (id)dc_systemImageNamed:(id)arg1 fromFont:(id)arg2;
+ (id)dc_systemImageNamed:(id)arg1 fromFont:(id)arg2 scale:(long long)arg3;

- (struct UIImage *)dc_scaledImageWithSize:(struct CGSize)arg1 scale:(double)arg2;
- (id)dc_JPEGData;
- (struct CGImage *)dc_CGImage;
- (id)dc_JPEGDataWithOrientation:(long long)arg1;
- (id)dc_imageDataWithUTType:(id)arg1 metadata:(id)arg2;
- (id)dc_imageWithTextStyle:(id)arg1;
- (id)dc_imageWithTextStyle:(id)arg1 scale:(long long)arg2;
- (id)dc_imageWithFont:(id)arg1;
- (id)dc_imageWithScale:(long long)arg1;
- (id)dc_imageWithFont:(id)arg1 scale:(long long)arg2;
- (struct UIImage *)dc_scaledImageMinDimension:(double)arg1 scale:(double)arg2;
- (struct UIImage *)dc_scaledImageMaxDimension:(double)arg1 scale:(double)arg2;
- (long long)dc_imageOrientation;
- (id)dc_imageDataWithUTType:(id)arg1;

@end

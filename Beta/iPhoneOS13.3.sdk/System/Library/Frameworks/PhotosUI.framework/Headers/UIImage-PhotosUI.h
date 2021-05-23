/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIImage.h>

@interface UIImage (PhotosUI)

+ (id)pu_PhotosUIImageNamed:(id)arg1;
+ (id)pu_imageWithIconImage:(id)arg1 iconImageColor:(id)arg2 text:(id)arg3 font:(id)arg4 textColor:(id)arg5 fillColor:(id)arg6 strokeColor:(id)arg7 cornerRadius:(double)arg8 inset:(struct CGPoint)arg9;
+ (id)pu_imageWithIconImage:(id)arg1 iconImageColor:(id)arg2 text:(id)arg3 font:(id)arg4 textColor:(id)arg5 fillColor:(id)arg6 strokeColor:(id)arg7 cornerRadius:(double)arg8;
+ (id)pu_imageWithText:(id)arg1 font:(id)arg2 textColor:(id)arg3 fillColor:(id)arg4 strokeColor:(id)arg5 cornerRadius:(double)arg6;

- (id)pu_tintedImageWithColor:(id)arg1;
- (id)pu_overlayedImageWithColor:(id)arg1;
- (id)pu_extractPlayOverlayBackgroundImageFromCenter:(struct CGPoint)arg1 inRect:(struct CGRect)arg2 contentMode:(long long)arg3 asynchronously:(_Bool)arg4 handler:(CDUnknownBlockType)arg5;

@end

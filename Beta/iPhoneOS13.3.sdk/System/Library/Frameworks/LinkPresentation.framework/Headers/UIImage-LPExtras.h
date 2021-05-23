/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <UIKit/UIImage.h>

@interface UIImage (LPExtras)

+ (id)_lp_createImageWithCGImage:(struct CGImage *)arg1;

- (struct CGSize)_lp_pixelSize;
- (_Bool)_lp_hasTransparency;
- (struct CGImage *)_lp_CGImage;

@end

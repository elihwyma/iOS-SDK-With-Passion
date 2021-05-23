/*
 Image: /System/Library/PrivateFrameworks/PersonaUI.framework/PersonaUI
 */

#import <UIKit/UIImage.h>

@interface UIImage (PRLikenessView)

+ (id)pr_imageWithCGImage:(struct CGImage *)arg1 size:(struct CGSize)arg2 scale:(double)arg3;
+ (id)pr_imageWithCGImage:(struct CGImage *)arg1;
+ (id)pr_imageWithCGImage:(struct CGImage *)arg1 cropRect:(struct CGRect)arg2;

- (struct CGImage *)pr_imageRef;
- (id)pr_circleImageOfDiameter:(double)arg1 cropRect:(struct CGRect)arg2;
- (id)pr_circleImageWithCropRect:(struct CGRect)arg1;

@end

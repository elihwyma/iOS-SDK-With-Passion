/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <UIKit/UIImage.h>

@interface UIImage (AKPlatformImageExtensions)

+ (id)akImageNamed:(id)arg1;
+ (id)ak_colorSwatchPickerImageWithColor:(id)arg1 size:(struct CGSize)arg2 selected:(_Bool)arg3;
+ (id)ak_colorSwatchToolbarButtonImageWithColor:(id)arg1 size:(struct CGSize)arg2 selected:(_Bool)arg3;
+ (id)ak_boldTextStyleImage;
+ (id)ak_italicTextStyleImage;
+ (id)ak_underlineTextStyleImage;
+ (id)ak_strikethroughTextStyleImage;

- (struct CGImage *)akCGImage;

@end

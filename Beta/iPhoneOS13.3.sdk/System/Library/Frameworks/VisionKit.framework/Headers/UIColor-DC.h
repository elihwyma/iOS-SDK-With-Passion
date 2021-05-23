/*
 Image: /System/Library/Frameworks/VisionKit.framework/VisionKit
 */

#import <UIKit/UIColor.h>

@interface UIColor (DC)

+ (struct UIColor *)dc_barColor;
+ (struct UIColor *)DCExtractedDocumentViewControllerBackgroundColor;
+ (id)dc_darkerAccessibilityColorForColor:(id)arg1;
+ (struct UIColor *)dc_editBackgroundColor;
+ (struct UIColor *)colorInBundleWithName:(id)arg1;
+ (struct UIImage *)dc_paperImage;
+ (struct UIImage *)dc_lightPaperImage;
+ (struct UIColor *)dc_paperTexture;
+ (struct UIColor *)dc_lightPaperTexture;
+ (struct UIColor *)dc_labelBackgroundColor;

- (_Bool)dc_colorIsLight;

@end

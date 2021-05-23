/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UIColor.h>

@interface UIColor (MobileCal)

+ (id)colorWithY:(double)arg1 U:(double)arg2 V:(double)arg3 alpha:(double)arg4;
+ (id)tableViewBackgroundColorOpaque;

- (double)redComponent;
- (double)greenComponent;
- (double)blueComponent;
- (id)soverWithColor:(id)arg1;
- (_Bool)isGreenOrYellow;
- (id)overlayWithColor:(id)arg1;
- (double)luminance;
- (double)differenceFromColor:(id)arg1;
- (double)hueComponent;
- (double)saturationComponent;
- (double)brightnessComponent;
- (void)getY:(double *)arg1 U:(double *)arg2 V:(double *)arg3 alpha:(double *)arg4;
- (id)burnWithColor:(id)arg1;

@end

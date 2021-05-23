/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <UIKit/UIButton.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface WKColorButton : UIButton

{
    UIColor *_color;
}

@property (retain, nonatomic) UIColor *color;

+ (id)colorButtonWithColor:(id)arg1;

@end

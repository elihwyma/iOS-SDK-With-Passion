/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <UIKit/UIButton.h>

@class UIColor, UIView;

@interface MFComposeTextColorButton : UIButton

{
    UIColor *_color;
    UIView *_colorView;
    UIView *_colorRingView;
}

@property (retain, nonatomic) UIView *colorView;
@property (retain, nonatomic) UIView *colorRingView;
@property (retain, nonatomic) UIColor *color;

+ (id)buttonWithColor:(id)arg1;

- (void)layoutSubviews;

@end

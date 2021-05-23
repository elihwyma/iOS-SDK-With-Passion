/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <UIView.h>

@class UIButton;

@interface SiriUIObjectPickerButtonView : UIView

{
    UIButton *_button;
}

@property (nonatomic, readonly) UIButton *button;

+ (double)defaultHeight;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end

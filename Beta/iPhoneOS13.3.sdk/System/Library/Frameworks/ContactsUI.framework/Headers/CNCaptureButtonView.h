/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UIView.h>

@class UIButton;

__attribute__((visibility("hidden")))
@interface CNCaptureButtonView : UIView

{
    UIButton *_button;
}

@property (retain, nonatomic) UIButton *button;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end

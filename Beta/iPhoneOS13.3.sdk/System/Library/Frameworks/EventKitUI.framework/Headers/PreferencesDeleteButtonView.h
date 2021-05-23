/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UIView.h>

@class UIButton;

@interface PreferencesDeleteButtonView : UIView

{
    UIButton *_button;
}

@property (retain, nonatomic, readonly) UIButton *button;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;

@end

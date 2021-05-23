/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <UIKit/UIView.h>

@class DevicePINKeypad, UIVisualEffectView;

@interface DevicePINKeypadContainerView : UIView

{
    DevicePINKeypad *_keypad;
    UIVisualEffectView *_backdropView;
    double _iPadKeypadHeight;
}

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithKeypad:(id)arg1;

@end

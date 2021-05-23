/*
 Image: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
 */

#import <UIKit/UIView.h>

@class TVRUIDevicePickerViewController;

@interface _TVRUIDevicePickerView : UIView

{
    TVRUIDevicePickerViewController *_viewController;
}

@property (weak, nonatomic) TVRUIDevicePickerViewController *viewController;

- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)_initWithViewController:(id)arg1;

@end

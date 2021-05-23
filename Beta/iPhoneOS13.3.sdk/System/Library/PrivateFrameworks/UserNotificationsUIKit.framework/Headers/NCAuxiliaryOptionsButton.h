/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

#import <UIKit/UIButton.h>

@class UIView;

@interface NCAuxiliaryOptionsButton : UIButton

{
    UIView *_backgroundView;
}

- (void)layoutSubviews;
- (void)_setCornerRadius:(double)arg1;
- (void)_configureBackgroundViewIfNecessary;

@end

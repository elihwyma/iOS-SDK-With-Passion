/*
 Image: /System/Library/PrivateFrameworks/SpotlightUIInternal.framework/SpotlightUIInternal
 */

#import <UIKit/UIView.h>

@class UIButton;

@interface SPUILockScreenFooterView : UIView

{
    UIButton *_unlockScreenButton;
}

@property (retain) UIButton *unlockScreenButton;

- (id)init;
- (void)unlockButtonPressed:(id)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <UIKit/UIView.h>

@class UILabel;

@interface STUnlockForContentView : UIView

{
    UILabel *_unlockToViewContentLabel;
}

@property (nonatomic, readonly) UILabel *unlockToViewContentLabel;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_stUnlockForContentViewCommonInit;

@end

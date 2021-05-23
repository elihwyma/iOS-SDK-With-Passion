/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <UIKit/UIView.h>

@protocol AVTNotifyingContainerViewDelegate;

@interface AVTNotifyingContainerView : UIView

{
    id <AVTNotifyingContainerViewDelegate> _delegate;
}

@property (weak, nonatomic) id <AVTNotifyingContainerViewDelegate> delegate;

- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;

@end

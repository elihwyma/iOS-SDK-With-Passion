/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIView.h>

@class SBFStatusBarLegibilityView;

@interface SBHomeScreenView : UIView

{
    SBFStatusBarLegibilityView *_statusBarLegibilityView;
}

@property (nonatomic, readonly) SBFStatusBarLegibilityView *statusBarLegibilityView;

- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;

@end

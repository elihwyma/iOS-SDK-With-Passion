/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

@class NAUILayoutConstraintSet;

@protocol HULayoutAnchorProviding;

@interface _HUQuickControlSingleControlHostView : UIView

{
    id <HULayoutAnchorProviding> _preferredFrameLayoutGuide;
    UIView *_contentView;
    NAUILayoutConstraintSet *_constraintSet;
}

@property (nonatomic, readonly) NAUILayoutConstraintSet *constraintSet;
@property (retain, nonatomic) id <HULayoutAnchorProviding> preferredFrameLayoutGuide;
@property (nonatomic, readonly) UIView *contentView;

+ (_Bool)requiresConstraintBasedLayout;

- (id)initWithContentView:(id)arg1;
- (void)updateConstraints;
- (void)didMoveToWindow;
- (_Bool)hasSingleControlView;
- (void)_setupConstraintSet;

@end

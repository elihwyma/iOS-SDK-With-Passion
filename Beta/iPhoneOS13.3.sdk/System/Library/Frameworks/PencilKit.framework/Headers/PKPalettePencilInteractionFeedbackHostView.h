/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSTimer, PKPalettePencilInteractionFeedbackView, UILayoutGuide, UIViewFloatAnimatableProperty;

@protocol PKPalettePencilInteractionFeedbackHostViewDelegate;

@interface PKPalettePencilInteractionFeedbackHostView : UIView

{
    _Bool _pencilInteractionFeedbackViewVisible;
    id <PKPalettePencilInteractionFeedbackHostViewDelegate> _delegate;
    PKPalettePencilInteractionFeedbackView *_pencilInteractionFeedbackView;
    NSTimer *_pencilInteractionFeedbackViewAutodismissTimer;
    UILayoutGuide *_pencilInteractionFeedbackViewLayoutGuide;
    NSLayoutConstraint *_layoutGuideWidthConstraint;
    NSLayoutConstraint *_layoutGuideHeightConstraint;
    NSLayoutConstraint *_layoutGuideCenterXConstraint;
    NSLayoutConstraint *_layoutGuideCenterYConstraint;
    NSLayoutConstraint *_pencilInteractionFeedbackViewBottomConstraint;
    NSLayoutConstraint *_pencilInteractionFeedbackViewLeftConstraint;
    NSLayoutConstraint *_pencilInteractionFeedbackViewTopConstraint;
    NSLayoutConstraint *_pencilInteractionFeedbackViewRightConstraint;
    NSLayoutConstraint *_pencilInteractionFeedbackViewCenterXConstraint;
    NSLayoutConstraint *_pencilInteractionFeedbackViewCenterYConstraint;
    UIViewFloatAnimatableProperty *_feedbackViewVisibilityAnimatableProperty;
}

@property (weak, nonatomic) id <PKPalettePencilInteractionFeedbackHostViewDelegate> delegate;
@property (retain, nonatomic) PKPalettePencilInteractionFeedbackView *pencilInteractionFeedbackView;
@property (retain, nonatomic) NSTimer *pencilInteractionFeedbackViewAutodismissTimer;
@property (retain, nonatomic) UILayoutGuide *pencilInteractionFeedbackViewLayoutGuide;
@property (retain, nonatomic) NSLayoutConstraint *layoutGuideWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *layoutGuideHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *layoutGuideCenterXConstraint;
@property (retain, nonatomic) NSLayoutConstraint *layoutGuideCenterYConstraint;
@property (retain, nonatomic) NSLayoutConstraint *pencilInteractionFeedbackViewBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *pencilInteractionFeedbackViewLeftConstraint;
@property (retain, nonatomic) NSLayoutConstraint *pencilInteractionFeedbackViewTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *pencilInteractionFeedbackViewRightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *pencilInteractionFeedbackViewCenterXConstraint;
@property (retain, nonatomic) NSLayoutConstraint *pencilInteractionFeedbackViewCenterYConstraint;
@property (nonatomic, getter=isPencilInteractionFeedbackViewVisible) _Bool pencilInteractionFeedbackViewVisible;
@property (retain, nonatomic) UIViewFloatAnimatableProperty *feedbackViewVisibilityAnimatableProperty;

- (id)initWithDelegate:(id)arg1;
- (void)layoutSubviews;
- (long long)_palettePosition;
- (void)hideFeedbackView;
- (void)showFeedbackForCurrentlySelectedToolInPaletteView;
- (void)_animatePencilInteractionFeedbackViewToVisible:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_updateLayoutGuideConstraints;
- (_Bool)_isPencilInteractionFeedbackViewAlmostOffScreen;

@end

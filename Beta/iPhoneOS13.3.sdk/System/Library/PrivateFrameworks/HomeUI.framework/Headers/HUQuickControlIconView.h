/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

@class HUIconView, HUQuickControlIconViewProfile, NSString, UILabel;

@protocol HUQuickControlViewInteractionDelegate;

@interface HUQuickControlIconView : UIView

{
    _Bool _userInteractionActive;
    HUQuickControlIconViewProfile *_profile;
    id <HUQuickControlViewInteractionDelegate> _interactionDelegate;
    unsigned long long _reachabilityState;
    HUIconView *_iconView;
    UILabel *_statusLabel;
    UILabel *_supplementaryLabel;
    id _viewValue;
}

@property (retain, nonatomic) HUIconView *iconView;
@property (retain, nonatomic) UILabel *statusLabel;
@property (retain, nonatomic) UILabel *supplementaryLabel;
@property (retain, nonatomic) id viewValue;
@property (nonatomic, getter=isUserInteractionActive) _Bool userInteractionActive;
@property (copy, nonatomic) HUQuickControlIconViewProfile *profile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) id value;
@property (retain, nonatomic) id secondaryValue;
@property (nonatomic) unsigned long long reachabilityState;
@property (weak, nonatomic) id <HUQuickControlViewInteractionDelegate> interactionDelegate;

+ (_Bool)requiresConstraintBasedLayout;

- (id)initWithProfile:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)_updateLayout;
- (void)_updateUI;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1;
- (void)_updateUIForReachabilityState:(unsigned long long)arg1;
- (double)_iconAndLabelsHeight;
- (void)_updateLabelSizes;
- (struct CGRect)_getLabelsContainingRect;
- (void)_updateLabelFramesOrigins;

@end

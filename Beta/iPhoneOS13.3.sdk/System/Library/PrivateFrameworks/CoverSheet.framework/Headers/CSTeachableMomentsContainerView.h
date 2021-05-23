/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <CoverSheet/CSCoverSheetViewBase.h>

#import <CoverSheet/Swift-Protocol.h>

@class NSString, SBUILegibilityLabel, UIImageView, UIStatusBar, UIView, _UILegibilitySettings;

@interface CSTeachableMomentsContainerView : CSCoverSheetViewBase <Swift>

{
    _UILegibilitySettings *_legibilitySettings;
    UIView *_controlCenterGrabberView;
    UIView *_controlCenterGrabberPositionPlaceholderView;
    UIImageView *_controlCenterGlyphView;
    SBUILegibilityLabel *_callToActionLabel;
    UIView *_callToActionLabelPositionPlaceholderView;
    UIStatusBar *_statusBarToFollow;
    UIView *_controlCenterGrabberEffectContainerView;
    UIView *_controlCenterTutorsContainerView;
    UIView *_controlCenterGrabberContainerView;
    UIView *_controlCenterGlyphContainerView;
    UIView *_callToActionLabelContainerView;
    UIView *_homeAffordanceContainerView;
    UIView *_homeAffordanceView;
}

@property (retain, nonatomic) UIView *controlCenterGrabberEffectContainerView;
@property (retain, nonatomic) UIView *controlCenterTutorsContainerView;
@property (retain, nonatomic) UIView *controlCenterGrabberContainerView;
@property (retain, nonatomic) UIView *controlCenterGlyphContainerView;
@property (retain, nonatomic) UIView *callToActionLabelContainerView;
@property (retain, nonatomic) UIView *homeAffordanceContainerView;
@property (retain, nonatomic) UIView *homeAffordanceView;
@property (retain, nonatomic) UIView *controlCenterGrabberView;
@property (retain, nonatomic) UIView *controlCenterGrabberPositionPlaceholderView;
@property (retain, nonatomic) UIImageView *controlCenterGlyphView;
@property (retain, nonatomic) SBUILegibilityLabel *callToActionLabel;
@property (retain, nonatomic) UIView *callToActionLabelPositionPlaceholderView;
@property (weak, nonatomic) UIStatusBar *statusBarToFollow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_preferredTextSizeChanged:(id)arg1;
- (id)presentationRegions;
- (_Bool)statusBarIsReady;
- (id)createCallToActionLabel;
- (void)_updateViewsForLegibilitySettings;
- (void)_addCallToActionLabel;
- (void)_addControlCenterTutors;
- (void)_layoutHomeAffordanceContainer;
- (void)_layoutCallToActionLabel;
- (void)_layoutControlCenterGrabberAndGlyph;
- (id)_callToActionLabelFont;
- (struct CGPoint)_grabberCenterForCointainerBounds:(struct CGRect)arg1 grabberTop:(double)arg2 grabberSize:(struct CGSize)arg3;

@end

/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <UIView.h>

@class NSLayoutConstraint, UILayoutGuide;

@interface AVPlayerViewControllerCustomControlsView : UIView

{
    _Bool _needsInitialConstraints;
    NSLayoutConstraint *_transportControlsVisibleConstraint;
    NSLayoutConstraint *_transportControlsHiddenConstraint;
    NSLayoutConstraint *_volumeControlsVisibleConstraint;
    NSLayoutConstraint *_volumeControlsHiddenConstraint;
    _Bool _areTransportControlsVisible;
    _Bool _areVolumeControlsVisible;
    UILayoutGuide *_transportControlsAreaLayoutGuide;
    UILayoutGuide *_displayModeControlsAreaLayoutGuide;
    UILayoutGuide *_volumeControlsAreaLayoutGuide;
    UILayoutGuide *_unobscuredCenterAreaLayoutGuide;
    UILayoutGuide *_animatedUnobscuredCenterAreaLayoutGuide;
    UILayoutGuide *_unobscuredTopAreaLayoutGuide;
    UIView *_transportControlsAreaLayoutGuideProvidingView;
    UIView *_displayModeControlsAreaLayoutGuideProvidingView;
    UIView *_volumeControlsAreaLayoutGuideProvidingView;
    UIView *_unobscuredTopAreaLayoutGuideProvidingView;
    UIView *_unobscuredCenterAreaLayoutGuideProvidingView;
    UIView *_animatedUnobscuredCenterAreaLayoutGuideProvidingView;
}

@property (nonatomic, readonly) UIView *transportControlsAreaLayoutGuideProvidingView;
@property (nonatomic, readonly) UIView *displayModeControlsAreaLayoutGuideProvidingView;
@property (nonatomic, readonly) UIView *volumeControlsAreaLayoutGuideProvidingView;
@property (nonatomic, readonly) UIView *unobscuredTopAreaLayoutGuideProvidingView;
@property (nonatomic, readonly) UIView *unobscuredCenterAreaLayoutGuideProvidingView;
@property (nonatomic, readonly) UIView *animatedUnobscuredCenterAreaLayoutGuideProvidingView;
@property (nonatomic) _Bool areTransportControlsVisible;
@property (nonatomic) _Bool areVolumeControlsVisible;
@property (nonatomic, readonly) UILayoutGuide *transportControlsAreaLayoutGuide;
@property (nonatomic, readonly) UILayoutGuide *displayModeControlsAreaLayoutGuide;
@property (nonatomic, readonly) UILayoutGuide *volumeControlsAreaLayoutGuide;
@property (nonatomic, readonly) UILayoutGuide *unobscuredCenterAreaLayoutGuide;
@property (nonatomic, readonly) UILayoutGuide *animatedUnobscuredCenterAreaLayoutGuide;
@property (nonatomic, readonly) UILayoutGuide *unobscuredTopAreaLayoutGuide;

+ (_Bool)requiresConstraintBasedLayout;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateConstraints;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

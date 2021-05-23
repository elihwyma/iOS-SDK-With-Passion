/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUQuickControlInteractionCoordinator.h>

#import <HomeUI/Swift-Protocol.h>

@class NSString, UIView, UIViewController;

@protocol HUQuickControlInteractiveView, HUQuickControlInteractiveViewController;

@interface HUQuickControlSimpleInteractionCoordinator : HUQuickControlInteractionCoordinator <Swift>

{
    _Bool _shouldDismissAutomatically;
    _Bool _hasStartedSecondTouch;
    id _value;
    UIViewController<HUQuickControlInteractiveViewController> *_contraptionViewController;
}

@property (nonatomic) _Bool hasStartedSecondTouch;
@property (nonatomic) _Bool shouldDismissAutomatically;
@property (nonatomic, readonly) UIView<HUQuickControlInteractiveView> *controlView;
@property (nonatomic, readonly) UIViewController<HUQuickControlInteractiveViewController> *contraptionViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)value;
- (void)setValue:(id)arg1;
- (void)setUserInteractionEnabled:(_Bool)arg1;
- (_Bool)isUserInteractionEnabled;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;
- (void)controlView:(id)arg1 interactionStateDidChange:(_Bool)arg2 forFirstTouch:(_Bool)arg3;
- (void)controlView:(id)arg1 valueDidChange:(id)arg2;
- (id)initWithControlView:(id)arg1 delegate:(id)arg2;
- (_Bool)isUserInteractionActive;
- (void)_setValue:(id)arg1 notifyDelegate:(_Bool)arg2 updateControlView:(_Bool)arg3;
- (void)_requestDismissalIfNecessary;
- (id)initWithContraptionViewController:(id)arg1 delegate:(id)arg2;

@end

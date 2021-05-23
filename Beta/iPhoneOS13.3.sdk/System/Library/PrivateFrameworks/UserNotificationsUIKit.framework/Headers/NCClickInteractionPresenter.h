/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

#import <Foundation/NSObject.h>

@class MTMaterialView, NCClickInteractionPresentedControl, NCTouchEaterGestureRecognizer, NSString, UIView, _UIClickInteraction;

@protocol NCClickInteractionPresenterDelegate;

@interface NCClickInteractionPresenter : NSObject

{
    _Bool _presented;
    _Bool _hinting;
    UIView *_sourceView;
    NSString *_groupName;
    long long _materialRecipe;
    id <NCClickInteractionPresenterDelegate> _delegate;
    long long _overrideUserInterfaceStyle;
    _UIClickInteraction *_clickInteraction;
    UIView *_containerView;
    UIView *_portalView;
    NCTouchEaterGestureRecognizer *_touchEater;
    NCClickInteractionPresentedControl *_presentedControl;
    MTMaterialView *_backgroundMaterialView;
    struct CGRect _sourceViewVisibleRect;
}

@property (nonatomic, readonly, getter=_clickInteraction) _UIClickInteraction *clickInteraction;
@property (nonatomic, readonly, getter=_containerView) UIView *containerView;
@property (nonatomic, readonly, getter=_portalView) UIView *portalView;
@property (weak, nonatomic, readonly, getter=_touchEater) NCTouchEaterGestureRecognizer *touchEater;
@property (nonatomic, readonly, getter=_presentedControl) NCClickInteractionPresentedControl *presentedControl;
@property (nonatomic, readonly, getter=_backgroundMaterialView) MTMaterialView *backgroundMaterialView;
@property (nonatomic, getter=_isHinting, setter=_setHinting:) _Bool hinting;
@property (nonatomic, getter=isPresented, setter=_setPresented:) _Bool presented;
@property (copy, nonatomic, readonly) NSString *title;
@property (weak, nonatomic, readonly) UIView *sourceView;
@property (nonatomic) struct CGRect sourceViewVisibleRect;
@property (copy, nonatomic) NSString *groupName;
@property (nonatomic, readonly) long long materialRecipe;
@property (weak, nonatomic) id <NCClickInteractionPresenterDelegate> delegate;
@property (nonatomic) long long overrideUserInterfaceStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)_tearDown;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)clickInteractionDidClickUp:(id)arg1;
- (_Bool)clickInteractionShouldBegin:(id)arg1;
- (id)highlightEffectForClickInteraction:(id)arg1;
- (void)clickInteractionDidEnd:(id)arg1;
- (void)_performPresentation;
- (void)_performCancel;
- (void)_configureBackgroundMaterialViewIfNecessary;
- (void)_handleEatenTouch:(id)arg1;
- (_Bool)dismissModalFullScreenIfNeeded;
- (id)initWithTitle:(id)arg1 sourceView:(id)arg2 materialRecipe:(long long)arg3;
- (void)_configurePresentedControlIfNecessaryWithTitle:(id)arg1;
- (void)_setUpSubviews;
- (void)_configureContainerViewIfNecessary;
- (void)_configurePortalViewIfNecessary;
- (struct CGRect)_initialPresentedViewFrame;
- (void)_setUpContainerView;
- (void)_setUpPortalView;
- (void)_setUpBackgroundMaterialView;
- (void)_setUpPresentedControl;
- (double)_tensionForTransitionPresentation:(_Bool)arg1 cancelled:(_Bool)arg2;
- (struct CGRect)_finalPresentedViewFrame;
- (double)_frictionForTransitionPresentation:(_Bool)arg1 cancelled:(_Bool)arg2;
- (void)_animatePresentation:(_Bool)arg1 cancelled:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;

@end

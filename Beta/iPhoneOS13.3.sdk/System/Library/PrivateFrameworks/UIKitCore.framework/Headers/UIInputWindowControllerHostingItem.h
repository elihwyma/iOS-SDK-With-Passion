/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSLayoutConstraint, NSMutableDictionary, NSString, UIInputSetHostView, UIInputViewSet, UIInputViewSetPlacement, UIInputWindowController, UIInputWindowControllerHosting, UIKBInputBackdropView, UIScrollToDismissSupport, UISplitKeyboardSupport, UISystemKeyboardDockController, UIView, UIViewController;

@protocol UIInputViewSetPlacementApplicator, _UIRemoteKeyboardControllerDelegate;

__attribute__((visibility("hidden")))
@interface UIInputWindowControllerHostingItem : NSObject <Swift>

{
    UISplitKeyboardSupport *_cachedSplitKeyboardController;
    UIScrollToDismissSupport *_cachedScrollDismissController;
    CDUnknownBlockType _interactiveTransitionCleanupBlock;
    double _backdropHeightDelta;
    NSLayoutConstraint *_inputViewHeightConstraint;
    NSLayoutConstraint *_assistantViewHeightConstraint;
    NSLayoutConstraint *_accessoryViewHeightConstraint;
    NSLayoutConstraint *_emptyHeightConstraint;
    NSMutableDictionary *_inputViewEdgeConstraints;
    NSMutableDictionary *_assistantViewEdgeConstraints;
    NSMutableDictionary *_accessoryViewEdgeConstraints;
    NSMutableDictionary *_inputBackdropViewEdgeConstraints;
    NSMutableDictionary *_inputBackdropBackgroundViewEdgeConstraints;
    NSMutableDictionary *_inputDockViewEdgeConstraints;
    NSMutableDictionary *_assistantBackdropViewEdgeConstraints;
    NSMutableDictionary *_accessoryBackdropViewEdgeConstraints;
    UIView *_inputBackdropBackgroundView;
    UISystemKeyboardDockController *_dockViewController;
    _Bool _scrolling;
    UIInputViewSetPlacement *_cachedPlacement;
    _Bool _supportsDockViewController;
    UIInputWindowControllerHosting *_container;
    UIKBInputBackdropView *_inputBackdropView;
    UIKBInputBackdropView *_inputAssistantBackdropView;
    UIKBInputBackdropView *_inputAccessoryBackdropView;
    id <_UIRemoteKeyboardControllerDelegate> _controllerDelegate;
    UIInputSetHostView *_hostView;
    id <UIInputViewSetPlacementApplicator> _applicator;
    UIView *_floatingKeyboardMaskView;
}

@property (retain, nonatomic) id <UIInputViewSetPlacementApplicator> applicator;
@property (weak, nonatomic, readonly) UIInputWindowController *owner;
@property (weak, nonatomic, readonly) UIInputWindowControllerHosting *container;
@property (retain, nonatomic) UIView *floatingKeyboardMaskView;
@property (retain, nonatomic, setter=setInputBackdropView:) UIKBInputBackdropView *_inputBackdropView;
@property (retain, nonatomic, setter=setInputAssistantBackdropView:) UIKBInputBackdropView *_inputAssistantBackdropView;
@property (retain, nonatomic, setter=setInputAccessoryBackdropView:) UIKBInputBackdropView *_inputAccessoryBackdropView;
@property (retain, nonatomic) UIInputSetHostView *hostView;
@property (nonatomic) UIView *inputView;
@property (nonatomic) UIView *inputAccessoryView;
@property (nonatomic) UIView *inputAssistantView;
@property (nonatomic, readonly) UIView *dockView;
@property (retain, nonatomic, readonly) UISplitKeyboardSupport *splitKeyboardController;
@property (nonatomic, readonly) _Bool scrollKeyboardActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) _Bool keyboardController;
@property (retain, readonly) UIInputViewSetPlacement *placement;
@property (retain, readonly) UIInputViewSet *inputViewSet;
@property (retain, readonly) UIView *containerView;
@property _Bool hideInputViewBackdrops;
@property (readonly) long long inputViewBackdropStyle;
@property (retain, nonatomic) id <_UIRemoteKeyboardControllerDelegate> controllerDelegate;
@property (nonatomic, readonly) _Bool isOnScreenRotating;
@property (nonatomic) _Bool dontDismissReachability;
@property (retain, nonatomic, readonly) UIView *view;
@property (nonatomic, readonly) _Bool isChangingPlacement;
@property (nonatomic, readonly) struct CGPoint positionConstraintConstant;
@property (retain, nonatomic, readonly) UIViewController *_inputViewController;

- (void)dealloc;
- (id)inputViewController;
- (void)setAccessoryViewVisible:(_Bool)arg1 delay:(double)arg2;
- (void)transitionDidFinish:(_Bool)arg1;
- (void)updateViewConstraints;
- (struct CGRect)visibleFrame;
- (id)inputAccessoryViewController;
- (void)setPlacement:(id)arg1;
- (void)extendKeyboardBackdropHeight:(double)arg1 withDuration:(double)arg2;
- (void)updateViewSizingConstraints;
- (void)checkPlaceholdersForRemoteKeyboards;
- (void)updateForKeyplaneChangeWithContext:(id)arg1;
- (void)willBeginTranslation;
- (void)finishSplitTransition:(_Bool)arg1;
- (void)didFinishTranslation;
- (void)updateKeyboardDockViewVisibility;
- (void)setInterfaceAutorotationDisabled:(_Bool)arg1;
- (void)prepareForSplitTransition;
- (void)finishSplitTransition;
- (void)placementNeedsUpdate:(id)arg1;
- (void)updateSupportsDockViewController;
- (void)updateVisibilityConstraintsForPlacement:(id)arg1;
- (void)updateConstraintInsets;
- (void)someViewDidLayoutSubviews;
- (void)refreshApplicator;
- (void)clearInputViewEdgeConstraints;
- (void)resetBackdropHeight;
- (void)_updateBackdropViews;
- (void)clearInteractiveTransitionStateIfNecessary;
- (void)prepareTranslationFromPlacement:(id)arg1 to:(id)arg2;
- (void)willBeginTranslationFromPlacement:(id)arg1 to:(id)arg2;
- (void)didFinishTranslationFromPlacement:(id)arg1 to:(id)arg2;
- (void)setPlacement:(id)arg1 quietly:(_Bool)arg2 animated:(_Bool)arg3 generateSplitNotification:(_Bool)arg4;
- (void)clearInputAssistantViewEdgeConstraints;
- (void)clearInputAccessoryViewEdgeConstraints;
- (void)disableViewSizingConstraints:(unsigned long long)arg1 forNewView:(id)arg2;
- (void)updateInputAssistantBackdropView;
- (void)initializeTranslateGestureRecognizerIfNecessary;
- (void)updateInputBackdropView;
- (void)updateInputBackdropViewVisibility;
- (void)updateInputAccessoryBackdropView;
- (void)updateEmptyHeightConstraint;
- (id)initWithContainer:(id)arg1;
- (void)resetPlacement;
- (void)setPlacement;
- (void)configureSplitKeyboardController:(_Bool)arg1;
- (void)configureScrollDismissController:(_Bool)arg1;
- (struct UIEdgeInsets)_aligningInsetsForChildInputViewController:(id)arg1 includeSceneBounds:(_Bool)arg2;
- (id)inputAssistantViewController;
- (id)viewMatchingConstraintForAttribute:(long long)arg1 primaryView:(id)arg2 secondaryView:(id)arg3;
- (id)_updateOrCreateConstraintInDict:(id)arg1 key:(id)arg2 fromView:(id)arg3 toView:(id)arg4 tracker:(id)arg5 creator:(CDUnknownBlockType)arg6;
- (void)updateViewSizingConstraints:(id)arg1;
- (void)rebuildConstraints:(id)arg1 forView:(id)arg2 toMatchView:(id)arg3 tracker:(id)arg4;
- (void)configureDockViewController:(_Bool)arg1;
- (_Bool)_shouldShowInputDockView;
- (void)resetVerticalConstraint;
- (void)_fillInNotificationInfo:(id)arg1 forDismissMode:(unsigned long long)arg2;
- (void)updateTransition:(id)arg1 withInfo:(id)arg2;
- (_Bool)_isForSelf:(id)arg1;
- (void)updateProgress:(double)arg1 startHeight:(double)arg2 endHeight:(double)arg3;
- (void)finishScrollViewTransition;
- (_Bool)_isForSplitKeyboard;
- (_Bool)_isForDragToDismiss;
- (id)constructNotificationInfoForScrollWithMode:(unsigned long long)arg1;
- (void)startTransition:(id)arg1 withInfo:(id)arg2;
- (void)completeTransition:(id)arg1 withInfo:(id)arg2;
- (void)enumerateBoundingRects:(CDUnknownBlockType)arg1;

@end

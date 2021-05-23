/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSDate, NSHashTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, UIInputViewPostPinningReloadState, UIInputViewSet, UIInputWindowController, UIKBRenderConfig, UIResponder, UIScene, UISystemInputAssistantViewController, UITextEffectsWindow, UITextFormattingCoordinator, UIView, UIWindowScene;

@interface UIInputResponderController : NSObject

{
    unsigned long long _hostedUseCount;
    UITextEffectsWindow *_containerWindow;
    UIResponder *_responder;
    UIResponder *_responderWithoutAutomaticAppearanceEnabled;
    UIResponder *_selfHostingTrigger;
    UIInputViewSet *_inputViewSet;
    UIInputViewSet *_transientInputViewSet;
    NSMutableDictionary *_preservedViewSets;
    NSMutableArray *_animationStyleStack;
    NSHashTable *_visibilityObservers;
    UIInputViewPostPinningReloadState *_postPinningReloadState;
    NSMutableSet *_pinningResponders;
    NSMutableDictionary *_persistentInputAccessoryResponders;
    NSMutableArray *_persistentInputAccessoryResponderOrder;
    NSDate *_transitionStartTime;
    UITextFormattingCoordinator *_textFormattingCoordinator;
    UISystemInputAssistantViewController *_systemInputAssistantViewController;
    int _ignoringReloadInputViews;
    int _ignoredReloads;
    int _disableAnimationsCount;
    _Bool _ignoresPinning;
    _Bool _interfaceAutorotationDisabled;
    _Bool _automaticAppearanceEnabled;
    _Bool _automaticAppearanceEnabledInternal;
    _Bool _dontNeedAssistantBar;
    _Bool _allowNilResponderReload;
    _Bool _reloadInputViewsForcedIsAllowed;
    _Bool _blockedReloadInputViewsForDictation;
    _Bool _hideSystemInputAssistantView;
    _Bool _preservingInputViews;
    UIScene *_scene;
    long long _currentState;
    UIKBRenderConfig *_restorableRenderConfig;
    unsigned long long _deactivationCount;
}

@property (nonatomic) _Bool useHostedInstance;
@property (nonatomic, readonly) UITextEffectsWindow *containerWindow;
@property (nonatomic, readonly) UITextEffectsWindow *existingContainerWindow;
@property (nonatomic, readonly) UIInputWindowController *containerRootController;
@property (nonatomic, readonly) UISystemInputAssistantViewController *systemInputAssistantViewController;
@property (nonatomic, readonly) UIView *containerView;
@property (nonatomic) _Bool hideSystemInputAssistantView;
@property (nonatomic, readonly) UIInputViewSet *inputViews;
@property (nonatomic, readonly) UIInputViewSet *transientInputViews;
@property (nonatomic, readonly) long long currentState;
@property (retain, nonatomic) UIKBRenderConfig *restorableRenderConfig;
@property (nonatomic) _Bool preservingInputViews;
@property (nonatomic, readonly) _Bool deactivated;
@property (nonatomic) unsigned long long deactivationCount;
@property (nonatomic) _Bool automaticAppearanceInternalEnabled;
@property (nonatomic, readonly) _Bool automaticAppearanceReallyEnabled;
@property (nonatomic, readonly) NSDate *_transitionStartTime;
@property (nonatomic, readonly) UITextFormattingCoordinator *textFormattingCoordinator;
@property (nonatomic, readonly, getter=_isIgnoringReloadInputViews) _Bool ignoringReloadInputViews;
@property (nonatomic) _Bool ignoresPinning;
@property (nonatomic, readonly) UIWindowScene *scene;
@property (nonatomic, readonly) UIResponder *responder;
@property (nonatomic, readonly) _Bool isOnScreen;
@property (nonatomic) _Bool automaticAppearanceEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene;

+ (void)initialize;
+ (void)performOnControllers:(CDUnknownBlockType)arg1;
+ (id)activeInputResponderController;
+ (void)_pinInputViewsForInputResponderController:(id)arg1 onBehalfOfResponder:(id)arg2 duringBlock:(CDUnknownBlockType)arg3;

- (void)dealloc;
- (void)_scene:(id)arg1 willTransitionToActivationState:(long long)arg2 withReasonsMask:(unsigned long long)arg3;
- (id)initWithScene:(id)arg1;
- (void)_preserveInputViewsWithId:(id)arg1 animated:(_Bool)arg2;
- (_Bool)_restoreInputViewsWithId:(id)arg1 animated:(_Bool)arg2;
- (void)_clearPreservedInputViewsWithRestorableResponder:(id)arg1;
- (struct CGRect)visibleFrameInView:(id)arg1;
- (id)passthroughViews;
- (struct CGRect)visibleInputViewFrameInView:(id)arg1;
- (void)pushAnimationStyle:(id)arg1;
- (void)popAnimationStyle;
- (id)nextAnimationStyle;
- (void)_setIgnoresPinning:(_Bool)arg1 allowImmediateReload:(_Bool)arg2;
- (void)_beginDisablingAnimations;
- (void)_endDisablingAnimations;
- (void)_preserveInputViewsWithId:(id)arg1;
- (void)forceOrderOutAutomaticExceptAccessoryView;
- (void)forceOrderOutAutomaticAnimated:(_Bool)arg1;
- (double)verticalOverlapForView:(id)arg1 usingKeyboardInfo:(id)arg2;
- (void)_clearPreservedInputViewsWithId:(id)arg1 clearKeyboard:(_Bool)arg2;
- (void)_endPersistingInputAccessoryViewWithId:(id)arg1;
- (void)_beginPersistingInputAccessoryViewForResponder:(id)arg1 withId:(id)arg2;
- (void)_restoreInputAccessoryViewOverrideWithId:(id)arg1;
- (void)_beginIgnoringReloadInputViews;
- (int)_endIgnoringReloadInputViews;
- (void)forceOrderOutAutomaticToDirection:(int)arg1 withDuration:(double)arg2;
- (void)prepareForAlongsideTransitionWithContext:(id)arg1;
- (void)inputResponderControllerWillResume:(id)arg1;
- (void)inputModeChangedForRenderConfig:(id)arg1;
- (id)_renderConfigForResponder:(id)arg1;
- (void)updateRenderConfigForCurrentResponder;
- (void)_reloadInputViewsForResponder:(id)arg1;
- (id)nextAnimationStyle:(_Bool)arg1;
- (void)setTextEffectsWindowLevelForInputView:(id)arg1 responder:(id)arg2;
- (void)traitCollectionDidChange;
- (void)updateRenderConfigForResponder:(id)arg1;
- (void)_reloadInputViewsForKeyWindowSceneResponder:(id)arg1;
- (void)_reloadInputViewsForWindowSceneResponder:(id)arg1;
- (void)disableInterfaceAutorotation:(_Bool)arg1;
- (id)_inputViewsForResponder:(id)arg1 withAutomaticKeyboard:(_Bool)arg2;
- (_Bool)pinningPreventsInputViews:(id)arg1;
- (_Bool)hasDictationKeyboard;
- (void)setInputViews:(id)arg1;
- (void)setKeyWindowSceneInputViews:(id)arg1 animationStyle:(id)arg2;
- (void)setWindowSceneInputViews:(id)arg1 animationStyle:(id)arg2;
- (void)prepareToMoveKeyboardForInputViewSet:(id)arg1 animationStyle:(id)arg2;
- (void)setInputViews:(id)arg1 animationStyle:(id)arg2;
- (_Bool)animationsEnabled;
- (void)setInputViews:(id)arg1 animated:(_Bool)arg2;
- (_Bool)minimizeWithAnimationStyle:(id)arg1;
- (void)performMultipleOperations:(CDUnknownBlockType)arg1 withAnimationStyle:(id)arg2;
- (_Bool)maximizeWithAnimation:(_Bool)arg1;
- (_Bool)maximizeWithAnimationStyle:(id)arg1;
- (id)_inputViewsForResponder:(id)arg1;
- (void)createAutomaticKeyboardIfNeeded;
- (void)orderInWithAnimationStyle:(id)arg1;
- (void)orderOutWithAnimationStyle:(id)arg1;
- (void)_beginPinningInputViewsOnBehalfOfResponder:(id)arg1;
- (void)_stopPinningInputViewsOnBehalfOfResponder:(id)arg1;
- (_Bool)_preserveMultiDocumentTokenIfNecessary:(id)arg1 withId:(id)arg2 reset:(_Bool)arg3;
- (void)_updateVisibilityObserversWithVisibility:(_Bool)arg1 reset:(_Bool)arg2;
- (void)_preserveInputViewsWithId:(id)arg1 animated:(_Bool)arg2 reset:(_Bool)arg3;
- (_Bool)_restoreMultiDocumentTokenIfNecessary:(id)arg1 withId:(id)arg2;
- (void)_clearMultiDocumentTokenIfNecessary:(id)arg1 withId:(id)arg2;
- (void)performWithAllowingNilResponderReload:(CDUnknownBlockType)arg1;
- (void)_updateContainerWindowLevel;
- (void)_setReloadInputViewsForcedIsAllowed:(_Bool)arg1;
- (void)forceReloadInputViews;
- (_Bool)minimize;
- (_Bool)maximize;
- (id)_placementForDeactivatedKeyboard:(_Bool)arg1;
- (void)forceOrderInAutomaticFromDirection:(int)arg1 withDuration:(double)arg2;
- (void)forceOrderInAutomaticAnimated:(_Bool)arg1;
- (void)_clearPinningResponders;
- (_Bool)_isPinningInputViewsOnBehalfOfResponder:(id)arg1;
- (_Bool)_hasPostPinningReloadState;
- (_Bool)_isTrackingResponder:(id)arg1;
- (void)addVisibilityObserver:(id)arg1;
- (void)removeVisibilityObserver:(id)arg1;
- (void)_removePreservedInputViewSetForInputView:(id)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSString, UIFocusAnimationCoordinator, UIResponder, UIView, _UIFocusAnimationCoordinatorManager, _UIFocusSoundGenerator, _UIFocusUpdateRequest;

@protocol UIFocusEnvironment, UIFocusItem, UIFocusItemContainer, _UIFocusHapticFeedbackGenerator, _UIFocusRegionContainer, _UIFocusSystemDelegate;

@interface UIFocusSystem : NSObject <Swift>

{
    _UIFocusUpdateRequest *_pendingFocusUpdateRequest;
    struct {
        unsigned int shouldIgnoreFocusUpdateIfNeeded:1;
        unsigned int isPendingFocusRestoration:1;
        unsigned int delegateRespondsToPreferredFocusEnvironments:1;
        unsigned int delegateRespondsToPrefersDeferralForFocusUpdateInContext:1;
        unsigned int delegateRespondsToShouldRestoreFocusInContext:1;
        unsigned int delegateRespondsToDidFinishUpdatingFocusInContext:1;
        unsigned int delegateRespondsToFocusMapContainer:1;
        unsigned int delegateRespondsToFocusItemContainer:1;
    } _flags;
    _Bool _enabled;
    id <UIFocusItem> _focusedItem;
    _UIFocusAnimationCoordinatorManager *_focusAnimationCoordinatorManager;
    id <_UIFocusSystemDelegate> _delegate;
    id <UIFocusItem> _previousFocusedItem;
    _UIFocusSoundGenerator *_focusSoundGenerator;
    id <_UIFocusHapticFeedbackGenerator> _focusHapticFeedbackGenerator;
}

@property (retain, nonatomic, getter=_focusAnimationCoordinatorManager, setter=_setFocusAnimationCoordinatorManager:) _UIFocusAnimationCoordinatorManager *focusAnimationCoordinatorManager;
@property (weak, nonatomic, getter=_delegate, setter=_setDelegate:) id <_UIFocusSystemDelegate> delegate;
@property (weak, nonatomic, readonly, getter=_focusedView) UIView *focusedView;
@property (nonatomic, readonly, getter=_currentFocusAnimationCoordinator) UIFocusAnimationCoordinator *currentFocusAnimationCoordinator;
@property (weak, nonatomic, readonly, getter=_previousFocusedItem) id <UIFocusItem> previousFocusedItem;
@property (weak, nonatomic, readonly, getter=_hostFocusSystem) UIFocusSystem *hostFocusSystem;
@property (weak, nonatomic, readonly, getter=_preferredFirstResponderFocusSystem) UIFocusSystem *preferredFirstResponderFocusSystem;
@property (weak, nonatomic, readonly, getter=_preferredFirstResponder) UIResponder *preferredFirstResponder;
@property (retain, nonatomic, getter=_focusSoundGenerator, setter=_setFocusSoundGenerator:) _UIFocusSoundGenerator *focusSoundGenerator;
@property (retain, nonatomic, getter=_focusHapticFeedbackGenerator, setter=_setFocusHapticFeedbackGenerator:) id <_UIFocusHapticFeedbackGenerator> focusHapticFeedbackGenerator;
@property (nonatomic, getter=_isEnabled, setter=_setEnabled:) _Bool enabled;
@property (weak, nonatomic, readonly) id <UIFocusItem> focusedItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSArray *preferredFocusEnvironments;
@property (weak, nonatomic, readonly) id <UIFocusEnvironment> parentFocusEnvironment;
@property (nonatomic, readonly) id <UIFocusItemContainer> focusItemContainer;
@property (weak, nonatomic, readonly) UIView *preferredFocusedView;
@property (nonatomic) _Bool areChildrenFocused;
@property (nonatomic, readonly, getter=_isEligibleForFocusInteraction) _Bool eligibleForFocusInteraction;
@property (nonatomic, readonly, getter=_preferredFocusMovementStyle) long long preferredFocusMovementStyle;
@property (copy, nonatomic, readonly, getter=_linearFocusMovementSequences) NSArray *linearFocusMovementSequences;
@property (weak, nonatomic, readonly, getter=_focusMapContainer) id <_UIFocusRegionContainer> focusMapContainer;

+ (id)focusSystemForEnvironment:(id)arg1;
+ (id)_allFocusSystems;
+ (_Bool)environment:(id)arg1 containsEnvironment:(id)arg2;
+ (void)registerURL:(id)arg1 forSoundIdentifier:(id)arg2;

- (id)init;
- (id)_init;
- (void)setNeedsFocusUpdate;
- (void)updateFocusIfNeeded;
- (_Bool)shouldUpdateFocusInContext:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)requestFocusUpdateToEnvironment:(id)arg1;
- (void)_requestFocusUpdate:(id)arg1;
- (void)_setEnabled:(_Bool)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)_uiktest_updateFocusToItem:(id)arg1;
- (_Bool)_debug_isEnvironmentEligibleForFocusUpdate:(id)arg1 debugReport:(id)arg2;
- (id)_simulatedProgrammaticFocusUpdateToEnvironment:(id)arg1;
- (_Bool)_updateFocusImmediatelyWithContext:(id)arg1;
- (id)_initWithFocusEnabled:(_Bool)arg1;
- (id)_contextForUpdateToEnvironment:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)_shouldRestoreFocusInContext:(id)arg1;
- (_Bool)_updateFocusWithContext:(id)arg1 report:(id)arg2;
- (void)_setNeedsFocusRestoration;
- (_Bool)_requiresFocusedItemToHaveContainingView;
- (id)_validatedPendingFocusUpdateRequest;
- (_Bool)_isEnvironmentEligibleForFocusUpdate:(id)arg1 shouldResetFocus:(_Bool *)arg2 debugReport:(id)arg3;
- (_Bool)_prefersDeferralForFocusUpdateInContext:(id)arg1;
- (void)_sendWillUpdateFocusNotificationsInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)_sendDidUpdateFocusNotificationsInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)_didFinishUpdatingFocusInContext:(id)arg1;
- (void)_sendNotificationsForFocusUpdateInContext:(id)arg1 withAnimationCoordinator:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (_Bool)_postsFocusUpdateNotifications;
- (id)_preferredFirstResponderFocusSystemForFocusedItem:(id)arg1;
- (void)_enableWithoutFocusRestoration;
- (void)_focusEnvironmentWillDisappear:(id)arg1;
- (void)_performWithoutFocusUpdates:(CDUnknownBlockType)arg1;
- (void)_cancelPendingFocusRestoration;
- (void)_uiktest_setPreviousFocusedItem:(id)arg1;

@end

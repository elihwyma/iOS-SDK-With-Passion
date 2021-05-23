/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSwitcherModifier.h>

@class NSArray, NSString, SBAppLayout;

@protocol SBFluidSwitcherModifierProviding;

@interface SBAppExposeSwitcherModifier : SBSwitcherModifier

{
    NSString *_bundleIdentifier;
    SBAppLayout *_activatingAppLayout;
    unsigned long long _incomingTransitionPhase;
    NSArray *_appLayoutsToKeepDuringIncomingTransition;
    id <SBFluidSwitcherModifierProviding> _modifierProvider;
    SBSwitcherModifier *_outgoingTransitionModifier;
    _Bool _isFloating;
    _Bool _isShowingReopenClosedWindowsButton;
    long long _numberOfHiddenAppLayouts;
}

- (id)handleEvent:(id)arg1;
- (id)appExposeAccessoryButtonsBundleIdentifier;
- (long long)appExposeAccessoryButtonsOverrideUserInterfaceStyle;
- (long long)plusButtonStyle;
- (double)plusButtonAlpha;
- (double)reopenClosedWindowsButtonAlpha;
- (double)reopenClosedWindowsButtonScale;
- (long long)liveContentRasterizationStyle;
- (id)appLayoutToScrollToBeforeTransitioning;
- (id)handleTimerEvent:(id)arg1;
- (id)appLayoutToScrollToBeforeReopeningClosedWindows;
- (id)appLayoutsForInsertionOrRemoval;
- (id)adjustedAppLayoutsForAppLayouts:(id)arg1;
- (id)_updateReopenClosedWindowsButtonPresence;
- (_Bool)isTetheredScrollingEnabled;
- (id)handleMainTransitionEvent:(id)arg1;
- (id)handleRemovalEvent:(id)arg1;
- (id)handleAppExposeEvent:(id)arg1;
- (_Bool)_shouldFilteringIncludeAppLayout:(id)arg1;
- (id)handleInsertionEvent:(id)arg1;
- (id)handleTetheredRemovalEvent:(id)arg1;
- (id)handleTetheredInsertionEvent:(id)arg1;
- (_Bool)_canShowReopenClosedWindowsButton;
- (id)initWithBundleIdentifier:(id)arg1 modifierProvider:(id)arg2 floating:(_Bool)arg3;

@end

/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableOrderedSet, NSOrderedSet, NSSet, NSString, NSTimer, SBApplicationController, SBHomeGestureSettings;

@protocol BSInvalidatable, SBRecentDisplayItemsControllerDelegate;

@interface SBRecentDisplayItemsController : NSObject

{
    NSMutableOrderedSet *_recentDisplayItems;
    long long _removalPersonality;
    long long _movePersonality;
    NSSet *_relevantTransitionFromSources;
    unsigned long long _maxDisplayItems;
    SBApplicationController *_appController;
    id <BSInvalidatable> _stateCaptureInvalidatable;
    NSTimer *_delayAfterTransitionTimer;
    SBHomeGestureSettings *_homeGestureSettings;
    id <SBRecentDisplayItemsControllerDelegate> _delegate;
}

@property (copy, nonatomic) NSOrderedSet *recentDisplayItems;
@property (weak, nonatomic) id <SBRecentDisplayItemsControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)reset;
- (id)_addStateCaptureHandler;
- (id)initWithRemovalPersonality:(long long)arg1 movePersonality:(long long)arg2 transitionFromSources:(id)arg3 maxDisplayItems:(unsigned long long)arg4 eventSource:(id)arg5 applicationController:(id)arg6;
- (void)_removeDisplayItem:(id)arg1;
- (id)_allDisplayItemsPassingTest:(CDUnknownBlockType)arg1;
- (id)_allDisplayItemsForBundleID:(id)arg1;
- (void)_clearDelayAfterTransitionTimer;
- (id)_firstDisplayItemForBundleID:(id)arg1;
- (void)_moveDisplayItemToFront:(id)arg1;
- (id)_displayItemForLayoutElement:(id)arg1;
- (void)_addOrMoveDisplayItemToFront:(id)arg1;
- (void)_setupDelayAfterTransitionTimerForActivatingElement:(id)arg1;
- (void)_addDisplayItemToFront:(id)arg1;
- (_Bool)_displayItemIsExecutableOnCurrentPlatform:(id)arg1;
- (_Bool)_isDisallowedDisplayItem:(id)arg1;
- (void)eventSource:(id)arg1 applicationsBecameHidden:(id)arg2;
- (void)eventSource:(id)arg1 userRemovedSuggestions:(id)arg2;
- (void)eventSource:(id)arg1 userDeletedApplications:(id)arg2;
- (void)eventSource:(id)arg1 userQuitApplicationInSwitcher:(id)arg2;
- (void)eventSource:(id)arg1 applicationsBecameVisible:(id)arg2;
- (void)eventSource:(id)arg1 userTouchedApplication:(id)arg2;
- (void)eventSource:(id)arg1 keyboardFocusChangedToApplication:(id)arg2;
- (void)eventSource:(id)arg1 didBeginTransitionToMode:(long long)arg2 withLayoutState:(id)arg3 activatingElement:(id)arg4 triggeredBy:(long long)arg5;
- (void)eventSource:(id)arg1 didFinishTransitionToMode:(long long)arg2 withLayoutState:(id)arg3 activatingElement:(id)arg4 triggeredBy:(long long)arg5;
- (void)removeDisplayItem:(id)arg1;
- (id)_firstDisplayItemForUniqueID:(id)arg1;
- (id)_allDisplayItemsForUniqueID:(id)arg1;
- (void)_allowAppToAppearWhileHidden:(id)arg1;
- (void)_disallowAppFromAppearingWhileHidden:(id)arg1;

@end

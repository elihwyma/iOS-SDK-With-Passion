/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSHashTable, NSString, SBLayoutStateTransitionCoordinator;

@interface SBMainDisplayWorkspaceAppInteractionEventSource : NSObject <Swift>

{
    NSHashTable *_observers;
    SBLayoutStateTransitionCoordinator *_stateCoordinator;
    NSString *_currentFocusedBundleID;
}

@property (copy, nonatomic) NSString *currentFocusedBundleID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)touchUpOccuredForIdentifier:(unsigned int)arg1 detached:(_Bool)arg2 context:(unsigned int)arg3 pid:(int)arg4;
- (void)touchDetachedForIdentifier:(unsigned int)arg1 context:(unsigned int)arg2 pid:(int)arg3;
- (void)_installedAppsDidChange:(id)arg1;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2;
- (void)applicationRestrictionController:(id)arg1 didUpdateVisibleTags:(id)arg2 hiddenTags:(id)arg3;
- (void)_userQuitApplication:(id)arg1;
- (void)_iconVisibilityDidChange:(id)arg1;
- (void)_userRemovedSuggestion:(id)arg1;
- (void)_displayLayoutDidUpdate:(id)arg1;
- (void)_noteTouchForProcess:(int)arg1;
- (void)_notifyTransition:(id)arg1 beginning:(_Bool)arg2;
- (id)_bundleIDsForIcons:(id)arg1;

@end

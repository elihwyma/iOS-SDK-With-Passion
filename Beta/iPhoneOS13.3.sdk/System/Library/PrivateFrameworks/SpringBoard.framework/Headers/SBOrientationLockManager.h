/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface SBOrientationLockManager : NSObject

{
    long long _userLockedOrientation;
    long long _previousLockedOrientation;
    struct __CFRunLoopObserver *_runLoopObserver;
    NSMutableSet *_lockOverrideReasons;
    NSMutableDictionary *_shimmedDeviceOrientationAssertions;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)lock;
- (void)unlock;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (_Bool)isEffectivelyLocked;
- (void)lock:(long long)arg1;
- (void)setLockOverrideEnabled:(_Bool)arg1 forReason:(id)arg2;
- (void)restoreStateFromPrefs;
- (_Bool)isUserLocked;
- (long long)userLockOrientation;
- (_Bool)lockOverrideEnabled;
- (void)_updateLockStateWithOrientation:(long long)arg1 forceUpdateHID:(_Bool)arg2 changes:(CDUnknownBlockType)arg3;
- (void)_updateLockStateWithChanges:(CDUnknownBlockType)arg1;
- (void)_addLockOverrideReason:(id)arg1 orientation:(long long)arg2 force:(_Bool)arg3;
- (void)_removeLockOverrideReason:(id)arg1;
- (void)_setupRunLoopObserverIfNecessaryForOrientation:(long long)arg1 andInitialLockState:(_Bool)arg2;
- (void)_handler_runLoopObserverDispose;
- (long long)effectiveLockedOrientation;
- (long long)deviceOrientationAsFarAsAppsAreConcerned;
- (void)enableLockOverrideForReason:(id)arg1 suggestOrientation:(long long)arg2;
- (void)enableLockOverrideForReason:(id)arg1 forceOrientation:(long long)arg2;
- (void)_beginShimmingForReason:(id)arg1;
- (void)_endShimmingForReason:(id)arg1;
- (void)updateLockOverrideForCurrentDeviceOrientation;

@end

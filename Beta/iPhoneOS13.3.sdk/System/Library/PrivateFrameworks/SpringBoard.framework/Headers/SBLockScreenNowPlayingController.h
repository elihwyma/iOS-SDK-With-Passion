/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class CSLockScreenSettings, NSString, PCPersistentTimer, PTToggleTestRecipe, SBMediaController;

@protocol SBLockScreenNowPlayingControllerDelegate;

@interface SBLockScreenNowPlayingController : NSObject <Swift>

{
    SBMediaController *_mediaController;
    PCPersistentTimer *_disableTimer;
    CSLockScreenSettings *_testSettings;
    PTToggleTestRecipe *_testRecipe;
    _Bool _enabled;
    long long _currentState;
    id <SBLockScreenNowPlayingControllerDelegate> _delegate;
}

@property (weak, nonatomic) id <SBLockScreenNowPlayingControllerDelegate> delegate;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (nonatomic, readonly) long long currentState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (double)_timeoutInterval;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)_addObservers;
- (void)_removeObservers;
- (id)initWithMediaController:(id)arg1;
- (void)_updateNowPlayingPlugin;
- (void)_invalidateDisableTimer;
- (void)_updateToState:(long long)arg1;
- (_Bool)_isMediaRecentlyActive;
- (void)_startDisableTimer;
- (void)_disableTimerFired;
- (_Bool)isNowPlayingActive;

@end

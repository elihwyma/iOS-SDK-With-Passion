/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface SBStatusBarTapManager : NSObject

{
    NSMutableDictionary *_statusBarOverridesToRecentScenes;
    NSMutableDictionary *_statusBarOverridesToRecentSceneResetTimers;
}

- (id)_workspace;
- (_Bool)handleTapForStyleOverrides:(int)arg1;
- (_Bool)canHandleTapForStatusBarStyleOverrides:(int)arg1;
- (_Bool)_isUILocked;
- (id)_handlerForStyleOverrides:(int)arg1;
- (void)_addRecentlyTappedApplicationDestinations:(id)arg1 forStyleOverrides:(int)arg2;
- (_Bool)_performAfterAttemptingUnlockForAppWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_handlerForStyleOverrides:(int)arg1 orOutApplications:(id *)arg2;
- (id)_allApplicationDestinationsForApplications:(id)arg1;
- (id)_foregroundApplicationDestinationsForApplications:(id)arg1;
- (id)_appDestinationForNextSceneToVisitForApps:(id)arg1 styleOverrides:(int)arg2;
- (id)_recentlyTappedApplicationDestinationsForStyleOverrides:(int)arg1;
- (void)_resetRecentlyTappedSceneIdentifiersForStyleOverrides:(int)arg1;
- (void)_scheduleResetRecentlyTappedSceneIdentifiersForStyleOverrides:(int)arg1;

@end

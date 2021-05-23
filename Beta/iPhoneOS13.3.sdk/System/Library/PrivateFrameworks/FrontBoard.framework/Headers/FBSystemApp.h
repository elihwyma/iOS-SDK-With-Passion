/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <UIKit/UISystemShellApplication.h>

@class NSString;

@interface FBSystemApp : UISystemShellApplication

{
    id _didFinishLaunchingObserver;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)_principalClass;
+ (long long)startupInterfaceOrientation;
+ (double)systemIdleSleepInterval;
+ (id)sharedApplicationLibrary;
+ (id)_newApplicationLibrary;
+ (void)_instantiateAppInfoProvider;
+ (void)_setPrincipalClass:(Class)arg1;
+ (id)sharedApplicationInfoProvider;
+ (_Bool)_optsIntoUIKitWindowHosting;
+ (void)initializeSystemServices;
+ (void)preFrontBoardInitializationHook;
+ (void)postFrontBoardInitializationHook;
+ (_Bool)shouldCheckInWithBackboard;
+ (_Bool)shouldFixMainThreadPriority;

- (id)init;
- (_Bool)canOpenURL:(id)arg1;
- (id)_newSceneForWindow:(id)arg1 oldDisplay:(id)arg2 newDisplay:(id)arg3;
- (_Bool)isBootingDark;
- (void)_createFirstSceneIfNecessary;
- (_Bool)wasBootedDark;
- (unsigned long long)lastExitReason;
- (id)fbsSceneWithIdentifier:(id)arg1;
- (void)registerInvalidationAction:(id)arg1;
- (id)registerHost:(id)arg1 withInitialParameters:(id)arg2;
- (void)unregisterHost:(id)arg1;
- (void)sendActionsToBackboard:(id)arg1;

@end

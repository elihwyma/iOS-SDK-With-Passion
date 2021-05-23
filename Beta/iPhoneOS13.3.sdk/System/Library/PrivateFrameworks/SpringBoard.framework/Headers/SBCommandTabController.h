/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSOrderedSet, NSString, NSTimer, PTToggleTestRecipe, SBCommandTabViewController, SBRecentDisplayItemsController, SBRecentDisplayItemsDataStore, SBRecentDisplayItemsDefaults, SBWindow, UIApplicationSceneDeactivationAssertion;

@protocol BSInvalidatable, OS_dispatch_queue;

@interface SBCommandTabController : NSObject

{
    SBCommandTabViewController *_commandTabViewController;
    NSTimer *_timer;
    UIApplicationSceneDeactivationAssertion *_resignActiveAssertion;
    SBRecentDisplayItemsController *_recentDisplayItemsController;
    NSOrderedSet *_persistedRecentDisplayItems;
    NSMutableSet *_appsAllowedWhileHidden;
    NSObject<OS_dispatch_queue> *_recentDisplayItemsPersistenceQueue;
    SBRecentDisplayItemsDataStore *_dataStore;
    SBRecentDisplayItemsDefaults *_defaults;
    id <BSInvalidatable> _deferOrientationUpdatesAssertion;
    PTToggleTestRecipe *_testRecipe;
    SBWindow *_window;
}

@property (nonatomic, readonly) SBWindow *window;
@property (nonatomic, readonly, getter=isVisible) _Bool visible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)keyCommands;
+ (id)sharedInstanceIfExists;

- (id)init;
- (void)dealloc;
- (void)next;
- (void)previous;
- (void)dismiss;
- (void)_clearTimer;
- (void)launchCurrentSelectedApplication;
- (void)removeCurrentSelectedApplication;
- (void)activateWithKeyCommand:(id)arg1;
- (_Bool)recentDisplayItemsController:(id)arg1 shouldAddItem:(id)arg2;
- (void)recentDisplayItemsControllerDidUpdateDisplayItems:(id)arg1;
- (void)recentDisplayItemsController:(id)arg1 didRemoveItem:(id)arg2;
- (void)_allowAppToAppearWhileHidden:(id)arg1;
- (void)_disallowAppFromAppearingWhileHidden:(id)arg1;
- (void)_activateWithForwardDirection:(_Bool)arg1;
- (void)_showWindow:(_Bool)arg1;
- (void)viewController:(id)arg1 selectedApplicationWithDisplayItem:(id)arg2;
- (void)_emitAnalyticsEventForDisplayItem:(id)arg1;
- (void)_showCommandTabBarAfterTimer:(id)arg1;
- (void)viewControllerWantsDismissal:(id)arg1;
- (id)persistedDisplayItemsForDataStore:(id)arg1;
- (void)dataStore:(id)arg1 persistDisplayItems:(id)arg2;
- (_Bool)dataStore:(id)arg1 shouldRestorePersistedDisplayItem:(id)arg2;

@end

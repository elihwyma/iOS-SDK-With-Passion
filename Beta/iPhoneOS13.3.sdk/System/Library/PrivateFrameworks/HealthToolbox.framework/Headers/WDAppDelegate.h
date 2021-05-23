/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <UIKit/UIResponder.h>

@class HKNavigationController, NSString, UIWindow, WDHealthDataViewController, WDProfile, WDTabBarController;

__attribute__((visibility("hidden")))
@interface WDAppDelegate : UIResponder

{
    WDProfile *_profile;
    HKNavigationController *_profileNavigationController;
    HKNavigationController *_medicalIDNavigationController;
    HKNavigationController *_sourcesNavigationController;
    WDTabBarController *_tabBarController;
    WDHealthDataViewController *_healthDataViewController;
    UIWindow *_window;
}

@property (retain, nonatomic) UIWindow *window;
@property (nonatomic, readonly) WDProfile *profile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)currentDelegate;

- (id)tabBarController;
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;
- (_Bool)application:(id)arg1 shouldSaveApplicationState:(id)arg2;
- (_Bool)application:(id)arg1 shouldRestoreApplicationState:(id)arg2;
- (_Bool)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)application:(id)arg1 didFailToContinueUserActivityWithType:(id)arg2 error:(id)arg3;
- (_Bool)application:(id)arg1 willContinueUserActivityWithType:(id)arg2;
- (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)favoriteDisplayTypesControllerReady:(id)arg1;
- (void)_postAWDOnboardingMetricForType:(int)arg1;
- (void)presentProfileViewController;
- (void)_buildUIWithProfile:(id)arg1;
- (void)restoreStoreDemoModeFavoritesIfNeeded;
- (void)_configureNotificationPolicies;
- (void)_configureUserActivityPolicies;
- (_Bool)_openURL:(id)arg1 options:(id)arg2;
- (_Bool)_restoreApplicationStateWithOnboardingUserActivity:(id)arg1;
- (void)_restoreApplicationStateWithUserActivity:(id)arg1;
- (void)_restoreToBaseStateAndSelectTabAtIndex:(long long)arg1;
- (void)resetStoreDemoModeFavorites;
- (id)_storeDemoModeFavoriteDisplayTypes;
- (void)didTapProfileIcon;
- (void)openHealthAppURL:(id)arg1;
- (void)_postAWDMetricForFinishedAddingAccount;
- (void)_postAWDMetricForUsingDeepLink;

@end

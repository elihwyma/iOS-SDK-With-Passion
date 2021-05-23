/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthUI/HKTabBarController.h>

@class NSMutableDictionary, NSString, UIViewController, WDProfile;

__attribute__((visibility("hidden")))
@interface WDTabBarController : HKTabBarController

{
    WDProfile *_profile;
    NSMutableDictionary *_tabIndicesToNotificationDomains;
    _Bool _exportInProgress;
    UIViewController *_noDoubleTapViewController;
}

@property (retain, nonatomic) UIViewController *noDoubleTapViewController;
@property (nonatomic, readonly) _Bool exportInProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)activitiesForLevelLocators:(id)arg1 startAt:(unsigned long long)arg2;

- (void)dealloc;
- (id)initWithProfile:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)shouldAutorotate;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;
- (_Bool)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (void)applyChangeActivity:(id)arg1;
- (id)applyTransitionActivity:(id)arg1;
- (void)_updateActivityForViewDidAppear;
- (void)_registerForBadgeNotifications;
- (void)_deregisterFromBadgeNotifications;
- (void)_updateBadges;
- (void)addActivityForSwitchToIndex:(unsigned long long)arg1;
- (void)_updateBadgeForViewControllerAtIndex:(long long)arg1 domain:(long long)arg2;
- (void)setBadgeNotificationDomain:(long long)arg1 forTabAtIndex:(long long)arg2;

@end

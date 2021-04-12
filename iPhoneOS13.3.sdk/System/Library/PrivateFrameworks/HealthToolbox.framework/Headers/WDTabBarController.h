//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKTabBarController.h>

#import <HealthToolbox/MFMailComposeViewControllerDelegate-Protocol.h>
#import <HealthToolbox/WDUserActivityResponder-Protocol.h>

@class NSMutableDictionary, UIViewController, WDProfile;

__attribute__((visibility("hidden")))
@interface WDTabBarController : HKTabBarController <MFMailComposeViewControllerDelegate, WDUserActivityResponder>
{
    WDProfile *_profile;
    NSMutableDictionary *_tabIndicesToNotificationDomains;
    BOOL _exportInProgress;
    UIViewController *_noDoubleTapViewController;
}

+ (id)activitiesForLevelLocators:(id)arg1 startAt:(NSUInteger)arg2;
@property(readonly, nonatomic) BOOL exportInProgress; // @synthesize exportInProgress=_exportInProgress;
@property(retain, nonatomic) UIViewController *noDoubleTapViewController; // @synthesize noDoubleTapViewController=_noDoubleTapViewController;
// - (void).cxx_destruct;
- (void)_updateBadgeForViewControllerAtIndex:(long long)arg1 domain:(long long)arg2;
- (void)_updateBadges;
- (void)_deregisterFromBadgeNotifications;
- (void)_registerForBadgeNotifications;
- (void)setBadgeNotificationDomain:(long long)arg1 forTabAtIndex:(long long)arg2;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (id)applyTransitionActivity:(id)arg1;
- (void)applyChangeActivity:(id)arg1;
- (void)addActivityForSwitchToIndex:(NSUInteger)arg1;
- (void)_updateActivityForViewDidAppear;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (BOOL)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2;
- (void)setViewControllers:(id)arg1 animated:(BOOL)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (BOOL)shouldAutorotate;
- (void)dealloc;
- (id)initWithProfile:(id)arg1;

@end


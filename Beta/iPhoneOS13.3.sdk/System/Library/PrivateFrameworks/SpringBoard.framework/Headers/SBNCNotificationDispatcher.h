/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NCBulletinNotificationSource, NCNotificationDispatcher, NSString, SBCommunicationPolicyManager, SBLockScreenManager, SBLockStateAggregator, SBNCAlertingController, SBNCNotificationDispatcherDelegate, SBNotificationBannerDestination, SBNotificationCenterDestination, SBNotificationLegacyCarDestination, SBStarkNotificationSceneComponentManager, SBUserAlertNotificationSource, SBWalletNotificationSource;

@protocol SBNotificationDestination, SBStarkNotificationsAgent;

@interface SBNCNotificationDispatcher : NSObject

{
    SBNotificationBannerDestination *_bannerDestination;
    id <SBNotificationDestination> _dashBoardDestination;
    SBWalletNotificationSource *_walletNotificationSource;
    SBNotificationCenterDestination *_notificationCenterDestination;
    NCNotificationDispatcher *_dispatcher;
    SBNCNotificationDispatcherDelegate *_dispatcherDelegate;
    NCBulletinNotificationSource *_notificationSource;
    SBUserAlertNotificationSource *_userNotificationAlertSource;
    SBLockScreenManager *_lockScreenManager;
    SBLockStateAggregator *_lockStateAggregator;
    SBStarkNotificationSceneComponentManager *_starkComponentManager;
    SBNotificationLegacyCarDestination *_carDestination;
    SBCommunicationPolicyManager *_communicationPolicyManager;
    SBNCAlertingController *_alertingController;
}

@property (retain, nonatomic) NCNotificationDispatcher *dispatcher;
@property (retain, nonatomic) SBNCNotificationDispatcherDelegate *dispatcherDelegate;
@property (retain, nonatomic) NCBulletinNotificationSource *notificationSource;
@property (retain, nonatomic) SBUserAlertNotificationSource *userNotificationAlertSource;
@property (retain, nonatomic) SBLockScreenManager *lockScreenManager;
@property (retain, nonatomic) SBLockStateAggregator *lockStateAggregator;
@property (retain, nonatomic) SBStarkNotificationSceneComponentManager *starkComponentManager;
@property (retain, nonatomic) SBNotificationLegacyCarDestination *carDestination;
@property (retain, nonatomic) SBCommunicationPolicyManager *communicationPolicyManager;
@property (retain, nonatomic) SBNCAlertingController *alertingController;
@property (nonatomic, readonly) SBNotificationBannerDestination *bannerDestination;
@property (nonatomic, readonly) id <SBNotificationDestination> dashBoardDestination;
@property (nonatomic, readonly) SBWalletNotificationSource *walletNotificationSource;
@property (nonatomic, readonly) SBNotificationCenterDestination *notificationCenterDestination;
@property (nonatomic, readonly) id <SBStarkNotificationsAgent> carNotificationsAgent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)isNotificationContentExtensionVisible:(id)arg1;
- (void)coverSheetViewController:(id)arg1 didChangeActiveBehavior:(id)arg2;
- (void)_updateActiveDestinations;
- (void)_setupNewDestinationsForDispatcher:(id)arg1;
- (void)_aggregateLockStateDidChange;
- (void)_carNotificationActiveConfigurationDidChange;
- (_Bool)_lockScreenWantsBanners;

@end

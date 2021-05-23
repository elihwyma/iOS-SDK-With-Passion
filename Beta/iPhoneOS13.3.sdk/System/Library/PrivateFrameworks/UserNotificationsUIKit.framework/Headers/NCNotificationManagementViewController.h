/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

#import <UIKit/UIViewController.h>

@class NCNotificationManagementView, NCNotificationManagementViewPresenter, NCNotificationRequest, NSString, NSURL;

@protocol NCNotificationManagementControllerSettingsDelegate;

@interface NCNotificationManagementViewController : UIViewController

{
    NCNotificationManagementView *_platterView;
    NCNotificationRequest *_request;
    _Bool _isDeliveredQuietly;
    NSURL *_settingsURL;
    NCNotificationManagementViewPresenter *_viewPresenter;
    id <NCNotificationManagementControllerSettingsDelegate> _settingsDelegate;
}

@property (retain, nonatomic) NCNotificationRequest *request;
@property (retain, nonatomic) NSURL *settingsURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <NCNotificationManagementControllerSettingsDelegate> settingsDelegate;

+ (id)notificationManagementAlertControllerForNotificationRequest:(id)arg1 withPresentingView:(id)arg2 settingsDelegate:(id)arg3;

- (void)loadView;
- (struct CGSize)preferredContentSize;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)canBecomeFirstResponder;
- (_Bool)canResignFirstResponder;
- (id)initWithRequest:(id)arg1;
- (id)_sectionSettingsForSectionIdentifier:(id)arg1;
- (id)notificationManagementViewPresenter:(id)arg1 sectionSettingsForSectionIdentifier:(id)arg2;
- (void)notificationManagementViewPresenter:(id)arg1 setAllowsNotifications:(_Bool)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4;
- (void)notificationManagementViewPresenter:(id)arg1 setDeliverQuietly:(_Bool)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4;
- (void)notificationManagementViewPresenter:(id)arg1 setAllowsCriticalAlerts:(_Bool)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4;
- (id)notificationManagementController:(id)arg1 sectionSettingsForSectionIdentifier:(id)arg2;
- (void)notificationManagementController:(id)arg1 setAllowsNotifications:(_Bool)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4;
- (void)notificationManagementController:(id)arg1 setDeliverQuietly:(_Bool)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4;
- (void)notificationManagementController:(id)arg1 setAllowsCriticalAlerts:(_Bool)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4;
- (id)_newManagementView;
- (void)_deliveryButtonTapped:(id)arg1;
- (void)_onOffToggleButtonTapped:(id)arg1;
- (void)_setAllowsNotifications:(_Bool)arg1 forNotificationRequest:(id)arg2 withSectionIdentifier:(id)arg3;
- (void)_setDeliverQuietly:(_Bool)arg1 forNotificationRequest:(id)arg2 withSectionIdentifier:(id)arg3;
- (void)_setAllowsCriticalAlerts:(_Bool)arg1 forNotificationRequest:(id)arg2 withSectionIdentifier:(id)arg3;

@end

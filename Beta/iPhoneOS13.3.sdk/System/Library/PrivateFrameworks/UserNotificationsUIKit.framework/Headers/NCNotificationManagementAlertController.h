/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

#import <UIKit/UIAlertController.h>

@class NCNotificationRequest, NSString;

@protocol NCNotificationManagementControllerSettingsDelegate;

@interface NCNotificationManagementAlertController : UIAlertController

{
    id <NCNotificationManagementControllerSettingsDelegate> _settingsDelegate;
    NCNotificationRequest *_request;
}

@property (retain, nonatomic) NCNotificationRequest *request;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <NCNotificationManagementControllerSettingsDelegate> settingsDelegate;

- (void)viewDidLoad;
- (_Bool)shouldAutorotate;
- (id)initWithRequest:(id)arg1 withPresentingView:(id)arg2 settingsDelegate:(id)arg3;
- (void)_configureView;

@end

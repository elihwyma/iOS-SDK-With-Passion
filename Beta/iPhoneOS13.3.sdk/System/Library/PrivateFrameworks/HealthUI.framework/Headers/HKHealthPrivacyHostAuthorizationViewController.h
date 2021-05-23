/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/_UIRemoteViewController.h>

@protocol HKHealthPrivacyHostAuthorizationControllerDelegate, HKHealthPrivacyServiceRemoteAuthorizationViewController;

@interface HKHealthPrivacyHostAuthorizationViewController : _UIRemoteViewController

{
    id <HKHealthPrivacyHostAuthorizationControllerDelegate> _delegate;
}

@property (nonatomic, readonly) id <HKHealthPrivacyServiceRemoteAuthorizationViewController> _healthPrivacyServiceViewControllerProxy;
@property (weak, nonatomic) id <HKHealthPrivacyHostAuthorizationControllerDelegate> delegate;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (_Bool)shouldPropagateAppearanceCustomizations;
+ (id)requestRemoteViewControllerWithConnectionHandler:(CDUnknownBlockType)arg1;

- (void)show;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)didFinishWithError:(id)arg1;
- (void)setRequestRecord:(id)arg1 presentationRequests:(id)arg2;

@end

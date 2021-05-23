/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/_UIRemoteViewController.h>

@protocol HKHealthPrivacyHostDocumentPickerViewControllerDelegate, HKHealthPrivacyServiceRemoteDocumentPickerViewController;

@interface HKHealthPrivacyHostDocumentPickerViewController : _UIRemoteViewController

{
    id <HKHealthPrivacyHostDocumentPickerViewControllerDelegate> _delegate;
}

@property (nonatomic, readonly) id <HKHealthPrivacyServiceRemoteDocumentPickerViewController> _healthPrivacyServiceViewControllerProxy;
@property (weak, nonatomic) id <HKHealthPrivacyHostDocumentPickerViewControllerDelegate> delegate;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (_Bool)shouldPropagateAppearanceCustomizations;
+ (id)requestRemoteViewControllerWithConnectionHandler:(CDUnknownBlockType)arg1;

- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)didFinishWithError:(id)arg1;
- (void)setPromptSession:(id)arg1;

@end

/*
 Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

#import <UIKit/_UIRemoteViewController.h>

@class NSString;

@interface PKRemotePaymentSetupViewController : _UIRemoteViewController

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (_Bool)shouldPropagateAppearanceCustomizations;

- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)paymentSetupDidFinish;

@end

/*
 Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

#import <UIKit/_UIRemoteViewController.h>

@class NSString;

@protocol PKAddPaymentPassViewControllerDelegate;

@interface PKRemoteAddPaymentPassViewController : _UIRemoteViewController

{
    _Bool _finished;
    id <PKAddPaymentPassViewControllerDelegate> _delegate;
}

@property (weak, nonatomic) id <PKAddPaymentPassViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (_Bool)shouldPropagateAppearanceCustomizations;

- (void)dealloc;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)generateRequestWithCertificateChain:(id)arg1 nonce:(id)arg2 nonceSignature:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)didFinishWithPass:(id)arg1 error:(id)arg2;
- (id)_addPaymentPassVC;

@end

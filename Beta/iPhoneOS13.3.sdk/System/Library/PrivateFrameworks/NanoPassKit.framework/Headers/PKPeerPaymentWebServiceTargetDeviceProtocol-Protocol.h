/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <NanoPassKit/Swift-Protocol.h>

@protocol PKPeerPaymentWebServiceTargetDeviceProtocol <Swift>

- (unsigned short)account;
- (unsigned short)updateAccountWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)downloadPassIfNecessaryWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)cloudStoreStatusWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)secureElementIdentifiers;
- (unsigned short)bridgedClientInfo;
- (unsigned short)userHasDisabledPeerPayment;
- (unsigned short)setUserHasDisabledPeerPayment: /* Error: Ran out of types for this method. */;
- (unsigned short)provisionPeerPaymentPassWithProvisioningController:credential:completion: /* Error: Ran out of types for this method. */;

@end

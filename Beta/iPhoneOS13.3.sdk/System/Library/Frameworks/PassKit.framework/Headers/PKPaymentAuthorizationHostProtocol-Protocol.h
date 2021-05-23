/*
 Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

#import <PassKit/Swift-Protocol.h>

@protocol PKPaymentAuthorizationHostProtocol <Swift>

- (unsigned short)authorizationDidFinishWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)authorizationWillStart;
- (unsigned short)authorizationDidRequestMerchantSession;
- (unsigned short)authorizationDidAuthorizePayment: /* Error: Ran out of types for this method. */;
- (unsigned short)authorizationDidAuthorizePurchase: /* Error: Ran out of types for this method. */;
- (unsigned short)authorizationDidAuthorizePeerPaymentQuote: /* Error: Ran out of types for this method. */;
- (unsigned short)authorizationDidAuthorizeDisbursement: /* Error: Ran out of types for this method. */;
- (unsigned short)authorizationDidAuthorizeApplePayTrustSignature: /* Error: Ran out of types for this method. */;
- (unsigned short)authorizationDidUpdateAccountServicePaymentMethod: /* Error: Ran out of types for this method. */;
- (unsigned short)authorizationDidSelectShippingMethod: /* Error: Ran out of types for this method. */;
- (unsigned short)authorizationDidSelectShippingAddress: /* Error: Ran out of types for this method. */;
- (unsigned short)authorizationDidSelectPaymentMethod: /* Error: Ran out of types for this method. */;

@end

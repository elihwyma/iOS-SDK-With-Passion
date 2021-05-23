/*
 Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

#import <PassKit/Swift-Protocol.h>

@protocol PKPaymentAuthorizationServiceProtocol <Swift>

- (unsigned short)handleHostApplicationWillResignActive: /* Error: Ran out of types for this method. */;
- (unsigned short)handleHostApplicationDidBecomeActive;
- (unsigned short)authorizationDidRequestMerchantSessionCompleteWithSession:error: /* Error: Ran out of types for this method. */;
- (unsigned short)authorizationDidAuthorizePaymentCompleteWithResult: /* Error: Ran out of types for this method. */;
- (unsigned short)authorizationDidAuthorizePurchaseCompleteWithStatus: /* Error: Ran out of types for this method. */;
- (unsigned short)authorizationDidAuthorizePeerPaymentQuoteCompleteWithResult: /* Error: Ran out of types for this method. */;
- (unsigned short)authorizationDidAuthorizeDisbursementWithResult: /* Error: Ran out of types for this method. */;
- (unsigned short)authorizationDidAuthorizeApplePayTrustSignatureCompleteWithResult: /* Error: Ran out of types for this method. */;
- (unsigned short)authorizationDidUpdateAccountServicePaymentMethodCompleteWithUpdate:signatureRequest: /* Error: Ran out of types for this method. */;
- (unsigned short)authorizationDidSelectShippingMethodCompleteWithUpdate: /* Error: Ran out of types for this method. */;
- (unsigned short)authorizationDidSelectShippingAddressCompleteWithUpdate: /* Error: Ran out of types for this method. */;
- (unsigned short)authorizationDidSelectPaymentMethodCompleteWithUpdate: /* Error: Ran out of types for this method. */;

@end

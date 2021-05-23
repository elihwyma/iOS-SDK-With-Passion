/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/Swift-Protocol.h>

@protocol PDInAppPaymentServiceExportedInterface <Swift>

- (unsigned short)cardsAvailableForAMPWithCountryCode:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)cardDataForMerchantIdentifier:countryCode:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)registerPaymentListenerEndpoint:forHostIdentifier:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)retrievePaymentListenerEndpointForHostIdentifier:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)presentInAppPaymentInterfaceWithPaymentRequest:forHostIdentifier:orientation:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)merchantStatusCheck:merchantDomain:sourceApplicationSecondaryIdentifier:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)paymentServicesMerchantURLForAPIType:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)secureElementStatusWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)paymentHardwareStatusWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)enrollPaymentPassWithUniqueIdentifier:merchantSession:completion: /* Error: Ran out of types for this method. */;

@end

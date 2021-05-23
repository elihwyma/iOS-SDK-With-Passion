/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/Swift-Protocol.h>

@protocol PDPassLibraryInAppExportedInterface <Swift>

- (unsigned short)hasInAppPaymentPassesForNetworks:capabilities:issuerCountryCodes:withHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)inAppPaymentPassesForNetworks:capabilities:issuerCountryCodes:withHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)inAppPrivateLabelPaymentPassesForApplicationIdentifier:issuerCountryCodes:withHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)hasInAppPrivateLabelPaymentPassesForApplicationIdentifier:issuerCountryCodes:withHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)inAppPrivateLabelPaymentPassesForWebDomain:issuerCountryCodes:withHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)hasInAppPrivateLabelPaymentPassesForWebDomain:issuerCountryCodes:withHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)canPresentPaymentRequest:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)hasPassesWithSupportedNetworks:merchantCapabilities:webDomain:completion: /* Error: Ran out of types for this method. */;

@end

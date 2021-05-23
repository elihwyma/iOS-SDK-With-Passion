/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/Swift-Protocol.h>

@protocol PDContinuityPaymentServiceExportedInterface <Swift>

- (unsigned short)updatePaymentDevicesWithHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)sendRemotePaymentRequest:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)sendPaymentHostUpdate:forRemotePaymentRequest:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)sendPaymentClientUpdate:forRemotePaymentRequest:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)sendPayment:forRemotePaymentRequest:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)sendPaymentResult:forRemotePaymentRequest:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)requestInstrumentThumbnail:forRemoteDevice:size:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)presentContinuityPaymentInterfaceWithRequestIdentifier:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)cancelRemotePaymentRequest:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)hasRemoteDevicesWithHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)canMakePaymentsWithRemoteDevicesWithHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchRemoteDevicesWithHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)sendPaymentSetupRequest:appDisplayName:handler: /* Error: Ran out of types for this method. */;

@end

/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/Swift-Protocol.h>

@protocol PKPassLibraryDataProvider <Swift>

@property (nonatomic, readonly) _Bool canAddPaymentPass;

- (unsigned short)passWithPassTypeIdentifier:serialNumber: /* Error: Ran out of types for this method. */;
- (unsigned short)passWithUniqueID: /* Error: Ran out of types for this method. */;
- (unsigned short)peerPaymentPassUniqueID;
- (unsigned short)removePass: /* Error: Ran out of types for this method. */;
- (unsigned short)paymentPasses;

@end

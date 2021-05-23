/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/Swift-Protocol.h>

@class CNContact, NSDictionary;

@protocol PKPaymentOptionsProtocol <Swift>

@property (retain, nonatomic) CNContact *defaultShippingAddress;
@property (nonatomic, readonly) NSDictionary *defaultBillingAddresses;
@property (retain, nonatomic) CNContact *defaultContactEmail;
@property (retain, nonatomic) CNContact *defaultContactPhone;
@property (retain, nonatomic) CNContact *defaultContactName;

- (unsigned short)defaultBillingAddressForPaymentPass: /* Error: Ran out of types for this method. */;
- (unsigned short)setDefaultBillingAddress:forPaymentPass: /* Error: Ran out of types for this method. */;
- (unsigned short)defaultBillingAddressForRemotePaymentInstrument: /* Error: Ran out of types for this method. */;
- (unsigned short)setDefaultBillingAddress:forRemotePaymentInstrument: /* Error: Ran out of types for this method. */;

@end

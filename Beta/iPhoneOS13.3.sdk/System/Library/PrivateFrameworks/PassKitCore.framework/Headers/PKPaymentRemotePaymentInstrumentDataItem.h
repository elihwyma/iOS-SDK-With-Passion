/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentDataItem.h>

@class CNContact, PKPaymentApplication, PKRemoteDevice, PKRemotePaymentInstrument;

@interface PKPaymentRemotePaymentInstrumentDataItem : PKPaymentDataItem

@property (nonatomic, readonly) PKRemoteDevice *remoteDevice;
@property (nonatomic, readonly) PKRemotePaymentInstrument *remotePaymentInstrument;
@property (nonatomic, readonly) PKPaymentApplication *paymentApplication;
@property (nonatomic, readonly) _Bool requiresBillingAddress;
@property (nonatomic, readonly) CNContact *billingAddress;

+ (long long)dataType;

- (id)errors;
- (_Bool)hasAssociatedPeerPaymentAccount;
- (_Bool)isValidWithError:(id *)arg1;
- (unsigned long long)peerPaymentAccountState;
- (id)peerPaymentAccountBalance;

@end

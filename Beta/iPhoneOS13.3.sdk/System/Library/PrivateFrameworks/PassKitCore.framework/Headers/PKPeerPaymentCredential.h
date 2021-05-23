/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentCredential.h>

@class NSString, PKCurrencyAmount, PKPeerPaymentAccount, PKPeerPaymentPassDetailsResponse;

@interface PKPeerPaymentCredential : PKPaymentCredential

{
    NSString *_pendingPaymentSenderName;
    PKPeerPaymentAccount *_account;
    PKPeerPaymentPassDetailsResponse *_passDetailsResponse;
    PKCurrencyAmount *_amount;
    unsigned long long _state;
    NSString *_pendingPaymentSenderAddress;
}

@property (nonatomic, readonly) PKPeerPaymentAccount *account;
@property (retain, nonatomic) PKPeerPaymentPassDetailsResponse *passDetailsResponse;
@property (copy, nonatomic, readonly) NSString *ownershipTokenIdentifier;
@property (retain, nonatomic) PKCurrencyAmount *amount;
@property (nonatomic) unsigned long long state;
@property (copy, nonatomic) NSString *pendingPaymentSenderAddress;
@property (copy, nonatomic, readonly) NSString *pendingPaymentSenderName;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)longDescription;
- (id)initWithPeerPaymentAccount:(id)arg1;
- (_Bool)_isEqualToCredential:(id)arg1;

@end

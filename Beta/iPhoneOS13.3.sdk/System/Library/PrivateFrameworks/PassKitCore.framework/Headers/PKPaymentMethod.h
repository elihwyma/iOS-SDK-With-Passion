/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class CNContact, NSString, PKDisbursementVoucher, PKPaymentPass, PKRemotePaymentInstrument;

@interface PKPaymentMethod : NSObject <Swift>

{
    NSString *_displayName;
    NSString *_network;
    unsigned long long _type;
    PKPaymentPass *_paymentPass;
    CNContact *_billingAddress;
    PKRemotePaymentInstrument *_remoteInstrument;
    NSString *_peerPaymentQuoteIdentifier;
    PKDisbursementVoucher *_disbursementVoucher;
    NSString *_bindToken;
}

@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *network;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) PKPaymentPass *paymentPass;
@property (copy, nonatomic) CNContact *billingAddress;
@property (retain, nonatomic) PKRemotePaymentInstrument *remoteInstrument;
@property (copy, nonatomic) NSString *peerPaymentQuoteIdentifier;
@property (retain, nonatomic) PKDisbursementVoucher *disbursementVoucher;
@property (copy, nonatomic) NSString *bindToken;

+ (_Bool)supportsSecureCoding;
+ (long long)version;
+ (id)paymentMethodWithProtobuf:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (id)protobuf;
- (id)initWithBindToken:(id)arg1;
- (id)initWithPeerPaymentQuote:(id)arg1;
- (id)initWithPaymentPass:(id)arg1 paymentApplication:(id)arg2 obfuscateNetworks:(_Bool)arg3;
- (id)initWithRemotePaymentInstrument:(id)arg1 paymentApplication:(id)arg2;
- (id)initWithPaymentPass:(id)arg1 obfuscateNetworks:(_Bool)arg2;
- (id)initWithRemotePaymentInstrument:(id)arg1;
- (id)initWithDisbursementVoucher:(id)arg1;

@end

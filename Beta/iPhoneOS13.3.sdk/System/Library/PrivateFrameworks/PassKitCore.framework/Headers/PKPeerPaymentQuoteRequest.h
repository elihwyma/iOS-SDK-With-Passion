/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPeerPaymentWebServiceRequest.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSDecimalNumber, NSString, PKPeerPaymentQuoteCertificatesResponse, PKPeerPaymentRequestToken;

@interface PKPeerPaymentQuoteRequest : PKPeerPaymentWebServiceRequest <Swift>

{
    NSString *_orderIdentifier;
    NSDecimalNumber *_amount;
    NSString *_currency;
    unsigned long long _externalFundingSource;
    unsigned long long _destination;
    unsigned long long _context;
    PKPeerPaymentRequestToken *_requestToken;
    NSString *_dpanIdentifier;
    NSString *_fpanIdentifier;
    long long _paymentNetwork;
    unsigned long long _paymentMethodType;
    NSString *_recipientIdentifier;
    NSString *_senderAddress;
    NSString *_bankName;
    NSString *_routingNumber;
    NSString *_accountNumber;
    PKPeerPaymentQuoteCertificatesResponse *_quoteCertificatesResponse;
}

@property (copy, nonatomic, readonly) NSString *orderIdentifier;
@property (copy, nonatomic) NSDecimalNumber *amount;
@property (copy, nonatomic) NSString *currency;
@property (nonatomic) unsigned long long externalFundingSource;
@property (nonatomic) unsigned long long destination;
@property (nonatomic) unsigned long long context;
@property (retain, nonatomic) PKPeerPaymentRequestToken *requestToken;
@property (copy, nonatomic, setter=setDPANIdentifier:) NSString *dpanIdentifier;
@property (copy, nonatomic, setter=setFPANIdentifier:) NSString *fpanIdentifier;
@property (nonatomic) long long paymentNetwork;
@property (nonatomic) unsigned long long paymentMethodType;
@property (copy, nonatomic) NSString *recipientIdentifier;
@property (copy, nonatomic) NSString *senderAddress;
@property (copy, nonatomic) NSString *bankName;
@property (copy, nonatomic) NSString *routingNumber;
@property (copy, nonatomic) NSString *accountNumber;
@property (retain, nonatomic) PKPeerPaymentQuoteCertificatesResponse *quoteCertificatesResponse;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 deviceIdentifier:(id)arg3 deviceScore:(id)arg4 deviceMetadata:(id)arg5;
- (void)updateWithPaymentPass:(id)arg1 externalFundingSource:(unsigned long long)arg2;
- (void)updateWithPaymentPass:(id)arg1;
- (_Bool)isEqualToPeerPaymentQuoteRequest:(id)arg1;

@end

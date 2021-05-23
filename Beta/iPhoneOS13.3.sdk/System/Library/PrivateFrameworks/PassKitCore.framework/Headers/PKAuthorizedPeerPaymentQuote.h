/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSData, NSDictionary, PKContact, PKPeerPaymentQuote;

@interface PKAuthorizedPeerPaymentQuote : NSObject <Swift>

{
    PKPeerPaymentQuote *_peerPaymentQuote;
    PKContact *_contact;
    NSData *_transactionData;
    NSDictionary *_certificates;
}

@property (nonatomic, readonly) PKPeerPaymentQuote *peerPaymentQuote;
@property (retain, nonatomic) PKContact *contact;
@property (nonatomic, readonly) NSData *transactionData;
@property (nonatomic, readonly) NSDictionary *certificates;

+ (_Bool)supportsSecureCoding;

- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithQuote:(id)arg1 transactionData:(id)arg2 certificates:(id)arg3;

@end

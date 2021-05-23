/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentRequest.h>

@class PKPeerPaymentQuote;

@interface PKPeerPaymentRequest : PKPaymentRequest

{
    PKPeerPaymentQuote *_peerPaymentQuote;
}

@property (nonatomic, readonly) PKPeerPaymentQuote *peerPaymentQuote;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPeerPaymentQuote:(id)arg1;

@end

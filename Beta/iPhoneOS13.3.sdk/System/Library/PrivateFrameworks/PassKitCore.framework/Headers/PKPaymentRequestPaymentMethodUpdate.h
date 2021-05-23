/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentRequestUpdate.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSArray, NSString, PKPeerPaymentQuote;

@interface PKPaymentRequestPaymentMethodUpdate : PKPaymentRequestUpdate <Swift>

{
    NSArray *_errors;
    PKPeerPaymentQuote *_peerPaymentQuote;
    NSString *_installmentGroupIdentifier;
}

@property (retain, nonatomic) PKPeerPaymentQuote *peerPaymentQuote;
@property (copy, nonatomic) NSString *installmentGroupIdentifier;
@property (copy, nonatomic) NSArray *errors;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPaymentSummaryItems:(id)arg1;
- (id)initWithErrors:(id)arg1 paymentSummaryItems:(id)arg2;

@end

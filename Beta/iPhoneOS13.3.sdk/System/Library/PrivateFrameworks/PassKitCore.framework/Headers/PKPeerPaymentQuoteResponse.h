/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@class PKPeerPaymentQuote;

@interface PKPeerPaymentQuoteResponse : PKPeerPaymentWebServiceResponse

{
    PKPeerPaymentQuote *_quote;
}

@property (nonatomic, readonly) PKPeerPaymentQuote *quote;

- (id)initWithData:(id)arg1;

@end

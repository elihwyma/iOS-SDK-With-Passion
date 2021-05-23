/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@class PKPeerPaymentRequestToken;

@interface PKPeerPaymentRequestTokenResponse : PKPeerPaymentWebServiceResponse

{
    _Bool _success;
    PKPeerPaymentRequestToken *_requestToken;
}

@property (nonatomic, readonly) _Bool success;
@property (nonatomic, readonly) PKPeerPaymentRequestToken *requestToken;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithData:(id)arg1 deviceScoreIdentifier:(id)arg2;

@end

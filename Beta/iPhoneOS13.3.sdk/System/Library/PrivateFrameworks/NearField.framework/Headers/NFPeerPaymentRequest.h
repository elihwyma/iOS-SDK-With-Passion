/*
 Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

#import <Foundation/NSObject.h>

@class NFECommercePaymentRequest, NFPeerPaymentTransferRequest;

@interface NFPeerPaymentRequest : NSObject

{
    NFECommercePaymentRequest *_topUpRequest;
    NFPeerPaymentTransferRequest *_transferRequest;
}

@property (retain, nonatomic) NFECommercePaymentRequest *topUpRequest;
@property (retain, nonatomic) NFPeerPaymentTransferRequest *transferRequest;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

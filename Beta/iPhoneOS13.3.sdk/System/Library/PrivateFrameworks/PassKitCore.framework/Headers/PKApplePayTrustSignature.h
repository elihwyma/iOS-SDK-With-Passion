/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSData, PKApplePayTrustSignatureRequest;

@interface PKApplePayTrustSignature : NSObject <Swift>

{
    PKApplePayTrustSignatureRequest *_signatureRequest;
    NSData *_signatureData;
    NSData *_paymentData;
}

@property (nonatomic, readonly) PKApplePayTrustSignatureRequest *signatureRequest;
@property (copy, nonatomic, readonly) NSData *signatureData;
@property (copy, nonatomic, readonly) NSData *paymentData;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSignatureRequest:(id)arg1 signature:(id)arg2;

@end

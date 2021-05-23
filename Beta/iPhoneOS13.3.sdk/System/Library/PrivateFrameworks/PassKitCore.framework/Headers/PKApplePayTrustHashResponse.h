/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKAccountWebServiceResponse.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSData, NSString;

@interface PKApplePayTrustHashResponse : PKAccountWebServiceResponse <Swift>

{
    NSString *_referenceIdentifier;
    NSData *_nonce;
}

@property (copy, nonatomic, readonly) NSString *referenceIdentifier;
@property (copy, nonatomic, readonly) NSData *nonce;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/Swift-Protocol.h>

@class NSData, NSURL, PKApplePayTrustHashResponse;

@protocol PKAccountWebServiceApplePayTrustProtocol <Swift>

@property (retain, nonatomic) PKApplePayTrustHashResponse *hashResponse;
@property (retain, nonatomic) NSURL *baseURL;
@property (copy, nonatomic) NSData *publicKeyHash;

- (unsigned short)manifestHashWithReferenceIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)signatureResponseClass;
- (unsigned short)endpointComponents;

@end

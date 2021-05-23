/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKAccountWebServiceRequest.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSData, NSString, NSURL, PKApplePayTrustHashResponse, PKPaymentDeviceMetadata, PKPhysicalCardOrder;

@interface PKAccountWebServiceRequestPhysicalCardRequest : PKAccountWebServiceRequest <Swift>

{
    NSURL *baseURL;
    PKApplePayTrustHashResponse *hashResponse;
    NSData *_publicKeyHash;
    NSString *_accountIdentifier;
    PKPhysicalCardOrder *_order;
    PKPaymentDeviceMetadata *_deviceMetadata;
}

@property (copy, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) PKPhysicalCardOrder *order;
@property (retain, nonatomic) PKPaymentDeviceMetadata *deviceMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) PKApplePayTrustHashResponse *hashResponse;
@property (retain, nonatomic) NSURL *baseURL;
@property (copy, nonatomic) NSData *publicKeyHash;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;
- (id)manifestHashWithReferenceIdentifier:(id)arg1;
- (Class)signatureResponseClass;
- (id)endpointComponents;

@end

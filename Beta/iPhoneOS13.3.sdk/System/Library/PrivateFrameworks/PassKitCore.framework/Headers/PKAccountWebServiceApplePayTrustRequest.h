/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKAccountWebServiceRequest.h>

@class PKApplePayTrustSignature;

@protocol PKAccountWebServiceApplePayTrustProtocol;

@interface PKAccountWebServiceApplePayTrustRequest : PKAccountWebServiceRequest

{
    id <PKAccountWebServiceApplePayTrustProtocol> _protocol;
    PKApplePayTrustSignature *_signature;
}

@property (retain, nonatomic) PKApplePayTrustSignature *signature;

- (Class)responseClass;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;
- (id)initWithApplePayTrustProtocol:(id)arg1;
- (id)endpointComponents;

@end

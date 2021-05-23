/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPeerPaymentWebServiceRequest.h>

@interface PKPeerPaymentQuoteCertificatesRequest : PKPeerPaymentWebServiceRequest

{
    unsigned long long _destination;
}

@property (nonatomic) unsigned long long destination;

- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2;

@end

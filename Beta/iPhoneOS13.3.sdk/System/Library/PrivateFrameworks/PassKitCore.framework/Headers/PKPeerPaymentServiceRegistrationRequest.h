/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPeerPaymentWebServiceRequest.h>

@class NSString, PKPeerPaymentDeviceRegistrationData;

@interface PKPeerPaymentServiceRegistrationRequest : PKPeerPaymentWebServiceRequest

{
    NSString *_pushToken;
    PKPeerPaymentDeviceRegistrationData *_deviceData;
}

@property (copy, nonatomic) NSString *pushToken;
@property (retain, nonatomic) PKPeerPaymentDeviceRegistrationData *deviceData;

- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 deviceIdentifier:(id)arg3 deviceScore:(id)arg4 deviceMetadata:(id)arg5;

@end

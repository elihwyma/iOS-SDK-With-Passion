/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKOverlayableWebServiceRequest.h>

@protocol PKPaymentWebServiceTargetDeviceProtocol;

@interface PKPaymentWebServiceRequest : PKOverlayableWebServiceRequest

{
    id <PKPaymentWebServiceTargetDeviceProtocol> _targetDevice;
}

@property (retain, nonatomic) id <PKPaymentWebServiceTargetDeviceProtocol> targetDevice;

+ (_Bool)supportsSecureCoding;

- (id)_murlRequestWithServiceURL:(id)arg1 version:(id)arg2 endpointComponents:(id)arg3 queryParameters:(id)arg4 appleAccountInformation:(id)arg5;
- (id)_murlRequestWithURL:(id)arg1;
- (id)_murlRequestWithServiceURL:(id)arg1 endpointComponents:(id)arg2 queryParameters:(id)arg3 appleAccountInformation:(id)arg4;
- (void)_signRequest:(id)arg1 webService:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

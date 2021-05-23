/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSString, NSXPCListener, PKPaymentWebService, PKPaymentWebServiceLocalProxyTargetDevice, PKPaymentWebServiceRemoteProxyTargetDevice;

@interface PKPaymentWebServiceProxyTargetDeviceDebugHelper : NSObject

{
    PKPaymentWebService *_webService;
    NSXPCListener *_remoteListener;
    PKPaymentWebServiceLocalProxyTargetDevice *_localTarget;
    PKPaymentWebServiceRemoteProxyTargetDevice *_remoteTarget;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)webServiceWithProxiedTargetDevice:(id)arg1;

- (void)dealloc;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)initWithWebService:(id)arg1;
- (id)localProxyTargetDevice;

@end

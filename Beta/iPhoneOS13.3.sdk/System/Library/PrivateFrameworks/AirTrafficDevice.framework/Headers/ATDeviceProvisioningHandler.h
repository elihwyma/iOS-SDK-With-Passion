/*
 Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

#import <NSObject.h>

@class ATDeviceSettings, ATGrappaSession, NSString;

@interface ATDeviceProvisioningHandler : NSObject

{
    ATDeviceSettings *_settings;
    ATGrappaSession *_grappaSession;
    double _linkOpenTime;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)messageLinkWasOpened:(id)arg1;
- (void)messageLink:(id)arg1 didReceiveRequest:(id)arg2;
- (void)_sendRegisterEndpointRequestOnMessageLink:(id)arg1;
- (void)_handleRegisterEndpointRequest:(id)arg1 onMessageLink:(id)arg2;
- (void)_handleCreateSessionRequest:(id)arg1 onMessageLink:(id)arg2;
- (void)_handleBeginSessionRequest:(id)arg1 onMessageLink:(id)arg2;
- (id)_getEndpointInfo;
- (void)_processRegisterEndpointResponse:(id)arg1 onMessageLink:(id)arg2;
- (void)_sendCreateSessionRequestWithData:(id)arg1 onMessageLink:(id)arg2;
- (void)_processCreateSessionResponse:(id)arg1 onMessageLink:(id)arg2;
- (void)_sendBeginSessionRequestOnMessageLink:(id)arg1;
- (void)_processBeginSessionResponse:(id)arg1 onMessageLink:(id)arg2;
- (void)_setMessageLinkAsInitialized:(id)arg1;

@end

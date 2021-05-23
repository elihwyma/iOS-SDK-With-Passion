/*
 Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

#import <ATSignatureProvider.h>

@class ATDeviceSettings, ATGrappaSession;

@interface ATGrappaSignatureProvider : ATSignatureProvider

{
    ATGrappaSession *_grappaSession;
    ATDeviceSettings *_settings;
}

- (id)initWithGrappaSession:(id)arg1;
- (id)createSignature:(id *)arg1 forData:(id)arg2;
- (id)verifySignature:(id)arg1 forData:(id)arg2;

@end

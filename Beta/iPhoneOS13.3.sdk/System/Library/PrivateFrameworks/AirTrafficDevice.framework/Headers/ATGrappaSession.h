/*
 Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

#import <NSObject.h>

@class NSData;

@interface ATGrappaSession : NSObject

{
    unsigned int _sessionId;
    unsigned long long _sessionType;
    NSData *_sessionResponseData;
    NSData *_sessionRequestData;
}

- (id)initWithType:(unsigned long long)arg1;
- (id)deviceInfo;
- (id)establishHostSessionWithDeviceInfo:(id)arg1 clientRequestData:(id *)arg2;
- (id)establishDeviceSessionWithRequestData:(id)arg1 responseData:(id *)arg2;
- (id)beginHostSessionWithDeviceResponseData:(id)arg1;
- (id)_deviceCreateSignature:(id *)arg1 forData:(id)arg2;
- (id)_hostCreateSignature:(id *)arg1 forData:(id)arg2;
- (id)_deviceVerifySignature:(id)arg1 forData:(id)arg2;
- (id)_hostVerifySignature:(id)arg1 forData:(id)arg2;
- (id)createSignature:(id *)arg1 forData:(id)arg2;
- (id)verifySignature:(id)arg1 forData:(id)arg2;

@end

/*
 Image: /System/Library/PrivateFrameworks/WelcomeKit.framework/WelcomeKit
 */

#import <Foundation/NSObject.h>

@interface WLTelemetry : NSObject

+ (id)sharedInstance;

- (void)migrationDidStart;
- (void)wifiDidStartWithSuccess:(_Bool)arg1;
- (void)connectionToAndroidDeviceDidSucceed;
- (void)connectionToAndroidDeviceDidFailWithTimeout;
- (void)connectionToAndroidDeviceDidFailWithAuthenticationError;
- (void)migrationDidSucceed;
- (void)migrationDidFail;
- (void)communicationDidFailForDataType:(id)arg1;
- (void)importDidFailForDataType:(id)arg1;
- (void)importDidFailSilentlyForDataType:(id)arg1;
- (void)didResolveTimeEstimate:(unsigned long long)arg1 forDownloadTask:(id)arg2 threshold:(unsigned long long)arg3 actualTime:(unsigned long long)arg4;
- (void)priorConnectionDidFailWithReason:(id)arg1 androidOSAPIVersion:(id)arg2;

@end

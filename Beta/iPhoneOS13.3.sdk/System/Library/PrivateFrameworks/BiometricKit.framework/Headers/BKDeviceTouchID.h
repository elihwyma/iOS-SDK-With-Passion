/*
 Image: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
 */

#import <BiometricKit/BKDevice.h>

@interface BKDeviceTouchID : BKDevice

+ (_Bool)deviceAvailableWithError:(id *)arg1;

- (id)createEnrollOperationWithError:(id *)arg1;
- (id)createMatchOperationWithError:(id *)arg1;
- (id)createPresenceDetectOperationWithError:(id *)arg1;
- (id)createExtendEnrollTouchIDOperationWithError:(id *)arg1;
- (_Bool)enableBackgroundFingerDetection:(_Bool)arg1 error:(id *)arg2;

@end

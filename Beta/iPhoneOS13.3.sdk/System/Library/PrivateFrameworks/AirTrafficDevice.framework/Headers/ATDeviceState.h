/*
 Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

#import <NSObject.h>

@interface ATDeviceState : NSObject

+ (_Bool)isClassCLocked;
+ (_Bool)isUnlocked;
+ (void)blockUntilFirstUnlock;
+ (void)registerBlockForFirstUnlock:(CDUnknownBlockType)arg1;

@end

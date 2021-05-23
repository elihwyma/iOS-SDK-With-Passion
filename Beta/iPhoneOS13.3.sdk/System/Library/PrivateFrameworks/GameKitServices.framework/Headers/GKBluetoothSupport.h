/*
 Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

#import <Foundation/NSObject.h>

@interface GKBluetoothSupport : NSObject

+ (void)cleanup;
+ (int)_determineBluetoothStatus;
+ (void)_btPowerStateChanged:(id)arg1;
+ (Class)_bluetoothManagerClass;
+ (int)bluetoothStatus;
+ (void)turnBluetoothOn;
+ (int)_directBTStatus;

@end

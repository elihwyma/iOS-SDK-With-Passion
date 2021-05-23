/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <BluetoothManager/BluetoothDevice.h>

@class SiriBluetoothDeviceSource;

@interface BluetoothDevice (SpringBoardExtensions)

@property (retain, nonatomic, getter=sb_siriBluetoothDeviceSource, setter=sb_setSiriBluetoothDeviceSource:) SiriBluetoothDeviceSource *sb_siriBluetoothDeviceSource;

@end

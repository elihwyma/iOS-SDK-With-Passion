/*
 Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

#import <Foundation/NSObject.h>

@class BluetoothDevice;

__attribute__((visibility("hidden")))
@interface PSSpecifierStub : NSObject

{
    BluetoothDevice *_device;
    id _userInfo;
}

@property (retain, nonatomic) BluetoothDevice *device;
@property (retain, nonatomic) id userInfo;

- (void)dealloc;

@end

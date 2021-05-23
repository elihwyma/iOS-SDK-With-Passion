/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@protocol SFWirelessSettingsControllerDelegate;

@interface SFWirelessSettingsController : NSObject

{
    id _delegate;
    _Bool _wifiEnabled;
    _Bool _airplaneModeEnabled;
    _Bool _bluetoothEnabled;
    _Bool _deviceSupportsWAPI;
    unsigned long long _uwbStatus;
    _Bool _firstCallbackCompleted;
    _Bool _wirelessCarPlayEnabled;
    _Bool _wirelessAccessPointEnabled;
    struct __SFOperation *_information;
    unsigned long long _ultraWideBandStatus;
}

@property (weak) id <SFWirelessSettingsControllerDelegate> delegate;
@property (getter=isAirplaneModeEnabled) _Bool airplaneModeEnabled;
@property (getter=isBluetoothEnabled) _Bool bluetoothEnabled;
@property (getter=isWifiEnabled) _Bool wifiEnabled;
@property (readonly) unsigned long long ultraWideBandStatus;
@property (getter=isWirelessAccessPointEnabled) _Bool wirelessAccessPointEnabled;
@property (readonly, getter=isWirelessCarPlayEnabled) _Bool wirelessCarPlayEnabled;
@property (readonly) _Bool deviceSupportsWAPI;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)handleOperationCallback:(struct __SFOperation *)arg1 event:(long long)arg2 withResults:(id)arg3;

@end

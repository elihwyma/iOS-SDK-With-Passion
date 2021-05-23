/*
 Image: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
 */

#import <Foundation/NSObject.h>

@class BluetoothManager, WFWiFiStateMonitor;

@protocol _TVRUINetworkObserverDelegate;

@interface _TVRUINetworkObserver : NSObject

{
    WFWiFiStateMonitor *_wifiStateMonitor;
    BluetoothManager *_bluetoothManager;
    _Bool _networkReachable;
    id <_TVRUINetworkObserverDelegate> _delegate;
}

@property (nonatomic, readonly, getter=isNetworkReachable) _Bool networkReachable;
@property (weak, nonatomic) id <_TVRUINetworkObserverDelegate> delegate;

- (id)init;
- (void)dealloc;
- (void)_wifiStateUpdatedWithOldState:(long long)arg1 andNewState:(long long)arg2;
- (void)_beginObservingBluetoothStateChanges;
- (void)_stopObservingBluetoothStateChanges;
- (_Bool)_isBluetoothAvailable;
- (void)_bluetoothStateDidChange:(id)arg1;
- (void)_bluetoothConnectionStatusDidChange:(id)arg1;

@end

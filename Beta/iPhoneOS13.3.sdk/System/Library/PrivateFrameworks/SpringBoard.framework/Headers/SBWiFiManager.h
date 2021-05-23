/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSRecursiveLock, NSString, NWSystemPathMonitor;

@protocol OS_dispatch_source;

@interface SBWiFiManager : NSObject

{
    NSRecursiveLock *_lock;
    struct __CFRunLoop *_callbackRunLoop;
    struct __WiFiManagerClient *_manager;
    struct __WiFiDeviceClient *_device;
    NSString *_deviceInterfaceName;
    _Bool _mainThread_devicePresent;
    struct __WiFiNetwork *_currentNetwork;
    struct __WiFiNetwork *_previousNetwork;
    _Bool _currentNetworkHasBeenSet;
    _Bool _currentNetworkIsIOSHotspot;
    _Bool _currentNetworkIsIOSHotspotHasBeenSet;
    _Bool _powered;
    _Bool _poweredHasBeenSet;
    int _mainThread_signalStrengthBars;
    int _mainThread_signalStrengthRSSI;
    _Bool _mainThread_signalStrengthHasBeenSet;
    NWSystemPathMonitor *_systemPathMonitor;
    NSObject<OS_dispatch_source> *_primaryInterfaceUpdateTimeoutSource;
    struct __WiFiNetwork *_primaryInterface;
    _Bool _primaryInterfaceHasBeenSet;
    _Bool _isPrimaryInterface;
    _Bool _isPrimaryInterfaceChanging;
}

+ (id)sharedInstance;

- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)_wifiInterface;
- (_Bool)isAssociated;
- (void)setPowered:(_Bool)arg1;
- (void)setWiFiEnabled:(_Bool)arg1;
- (int)signalStrengthBars;
- (_Bool)isAssociatedToIOSHotspot;
- (void)_runManagerCallbackThread;
- (_Bool)isPowered;
- (struct __WiFiManagerClient *)_lock_manager;
- (void)_powerStateDidChange;
- (void)_linkDidChange;
- (void)_updateDevicePresence;
- (void)_lock_spawnManagerCallbackThread;
- (void)_updateWiFiDevice;
- (void)_updateCurrentNetwork;
- (void)_updateSignalStrength;
- (void)_updateWiFiState;
- (_Bool)isPrimaryInterface;
- (void)_primaryInterfaceChanged:(_Bool)arg1;
- (_Bool)_cachedIsAssociated;
- (void)_updateSignalStrengthFromRawRSSI:(int)arg1 andScaledRSSI:(float)arg2;
- (void)_lock_setWiFiDevice:(struct __WiFiDeviceClient *)arg1;
- (id)currentNetworkName;
- (_Bool)wiFiEnabled;
- (int)signalStrengthRSSI;
- (struct __CFRunLoop *)wifiRunLoopRef;

@end

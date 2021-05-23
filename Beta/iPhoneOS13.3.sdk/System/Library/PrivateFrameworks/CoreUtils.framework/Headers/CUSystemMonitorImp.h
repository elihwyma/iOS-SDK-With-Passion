/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class CUBluetoothClient, CUNetInterfaceMonitor, CUSystemMonitor, CUWiFiManager, CXCallObserver, NSArray, NSData, NSMutableArray, NSString;

@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface CUSystemMonitorImp : NSObject

{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    struct NSMutableSet *_monitors;
    CDStruct_83abfce7 _bluetoothAddress48;
    NSData *_bluetoothAddressData;
    CUBluetoothClient *_bluetoothClient;
    CXCallObserver *_callObserver;
    int _activeCallCount;
    int _connectedCallCount;
    int _familyBuddyToken;
    _Bool _familyFailed;
    NSArray *_familyMembers;
    _Bool _familyObserving;
    CUSystemMonitor *_familyPrimaryIPMonitor;
    int _familyUpdatedToken;
    _Bool _manateeAvailable;
    _Bool _manateeObserving;
    int _fmfDevicesChangedToken;
    int _meDeviceChangedToken;
    int _meDeviceRetryToken;
    NSString *_meDeviceFMFDeviceID;
    NSString *_meDeviceIDSDeviceID;
    NSString *_meDeviceName;
    _Bool _meDeviceIsMe;
    _Bool _meDeviceValid;
    CUNetInterfaceMonitor *_netInterfaceMonitor;
    unsigned int _netFlags;
    CDUnion_fab80606 _primaryIPv4Addr;
    CDUnion_fab80606 _primaryIPv6Addr;
    NSString *_primaryNetworkSignature;
    int _powerSourceToken;
    _Bool _powerUnlimited;
    NSString *_primaryAppleID;
    _Bool _primaryAppleIDActive;
    _Bool _primaryAppleIDIsHSA2;
    int _primaryAppleIDNotifyToken;
    _Bool _primaryAppleIDObserving;
    CDStruct_83abfce7 _rotatingIdentifier48;
    NSData *_rotatingIdentifierData;
    NSObject<OS_dispatch_source> *_rotatingIdentifierTimer;
    _Bool _screenLocked;
    int _screenLockedToken;
    _Bool _screenOn;
    int _screenBlankedToken;
    _Bool _screenSaverActive;
    _Bool _scChangesPending;
    struct __SCDynamicStore *_scDynamicStore;
    NSMutableArray *_scInitialKeys;
    NSString *_scKeySystemName;
    NSString *_scPatternNetInterfaceIPv4;
    NSString *_scPatternNetInterfaceIPv6;
    NSArray *_scNotificationKeys;
    NSArray *_scNotificationPatterns;
    NSString *_systemName;
    int _systemLockState;
    int _systemLockStateToken;
    _Bool _firstUnlocked;
    int _firstUnlockToken;
    CUWiFiManager *_wifiManager;
    unsigned int _wifiFlags;
    int _wifiState;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)_update;
- (void)removeMonitor:(id)arg1;
- (void)callObserver:(id)arg1 callChanged:(id)arg2;
- (void)_screenChanged:(_Bool)arg1;
- (void)addMonitor:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_hasMonitorPassingTest:(CDUnknownBlockType)arg1;
- (void)_invokeBlock:(CDUnknownBlockType)arg1 passingTest:(CDUnknownBlockType)arg2;
- (void)updateWithQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_bluetoothAddressMonitorStart;
- (void)_bluetoothAddressMonitorStop;
- (void)_callMonitorStart;
- (void)_callMonitorStop;
- (int)_activeCallCountUnached;
- (int)_connectedCallCountUnached;
- (void)_familyMonitorStart;
- (void)_familyMonitorStop;
- (void)_familyGetMembers:(_Bool)arg1;
- (void)_familyNetworkChanged;
- (void)_familyUpdated:(id)arg1;
- (void)_manateeMonitorStart;
- (void)_manateeMonitorStop;
- (void)_manateeChanged:(id)arg1;
- (void)_meDeviceMonitorStart;
- (void)_meDeviceMonitorStop;
- (void)_meDeviceCheckStart:(_Bool)arg1;
- (void)_meDeviceCheckCompletion:(id)arg1 error:(id)arg2 firstCheck:(_Bool)arg3;
- (void)_netInterfaceMonitorStart;
- (void)_netInterfaceMonitorStop;
- (void)_powerUnlimitedMonitorStart;
- (void)_powerUnlimitedMonitorStop;
- (void)_primaryAppleIDMonitorStart;
- (void)_primaryAppleIDMonitorStop;
- (id)_primaryAppleIDAccount;
- (void)_primaryAppleIDChanged:(id)arg1;
- (void)_rotatingIdentifierMonitorStart;
- (void)_rotatingIdentifierMonitorStop;
- (void)_rotatingIdentifierTimerFired;
- (void)_screenLockedMonitorStart;
- (void)_screenLockedMonitorStop;
- (void)_screenLockedChanged;
- (void)_screenOnMonitorStart;
- (void)_screenOnMonitorStop;
- (void)_screenSaverMonitorStart;
- (void)_screenSaverMonitorStop;
- (void)_systemConfigUpdateKeyPtr:(id *)arg1 name:(id)arg2 enabled:(_Bool)arg3 creator:(CDUnknownBlockType)arg4;
- (void)_systemConfigUpdateNotifications;
- (void)_systemConfigChanged:(id)arg1 initial:(_Bool)arg2;
- (void)_systemConfigNetInterfaceChanged:(id)arg1 initial:(_Bool)arg2;
- (void)_systemConfigSystemNameChanged:(_Bool)arg1;
- (void)_systemLockStateMonitorStart;
- (void)_systemLockStateMonitorStop;
- (void)_systemLockStateUpdate:(_Bool)arg1;
- (void)_firstUnlockMonitorStart;
- (void)_firstUnlockMonitorStop;
- (void)_firstUnlockMonitorCheck:(_Bool)arg1;
- (void)_wifiMonitorStart;
- (void)_wifiMonitorStop;
- (void)_wifiMonitorStateChanged:(_Bool)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class NSArray, NSData, NSString;

@protocol OS_dispatch_queue;

@interface CUSystemMonitor : NSObject

{
    _Bool _activateCalled;
    _Bool _activateCompleted;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    _Bool _invalidateCalled;
    _Bool _invalidateCalled2;
    CDUnknownBlockType _invalidationHandler;
    CDUnknownBlockType _bluetoothAddressChangedHandler;
    CDUnknownBlockType _callChangedHandler;
    CDUnknownBlockType _consoleUserChangedHandler;
    CDUnknownBlockType _familyUpdatedHandler;
    CDUnknownBlockType _manateeChangedHandler;
    CDUnknownBlockType _meDeviceChangedHandler;
    CDUnknownBlockType _netFlagsChangedHandler;
    CDUnknownBlockType _netInterfacesChangedHandler;
    CDUnknownBlockType _primaryIPChangedHandler;
    CDUnknownBlockType _primaryNetworkChangedHandler;
    CDUnknownBlockType _powerUnlimitedChangedHandler;
    CDUnknownBlockType _primaryAppleIDChangedHandler;
    CDUnknownBlockType _rotatingIdentifierChangedHandler;
    CDUnknownBlockType _screenLockedChangedHandler;
    CDUnknownBlockType _screenOnChangedHandler;
    CDUnknownBlockType _screenSaverChangedHandler;
    CDUnknownBlockType _systemLockStateChangedHandler;
    CDUnknownBlockType _systemNameChangedHandler;
    CDUnknownBlockType _firstUnlockHandler;
    CDUnknownBlockType _wifiStateChangedHandler;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (readonly) CDStruct_83abfce7 bluetoothAddress48;
@property (copy, readonly) NSData *bluetoothAddressData;
@property (copy) CDUnknownBlockType bluetoothAddressChangedHandler;
@property (readonly) int activeCallCount;
@property (readonly) int connectedCallCount;
@property (copy) CDUnknownBlockType callChangedHandler;
@property (readonly) unsigned int consoleUserID;
@property (copy, readonly) NSString *consoleUserName;
@property (copy, nonatomic) CDUnknownBlockType consoleUserChangedHandler;
@property (copy, readonly) NSArray *familyMembers;
@property (copy) CDUnknownBlockType familyUpdatedHandler;
@property (readonly) _Bool manateeAvailable;
@property (copy, nonatomic) CDUnknownBlockType manateeChangedHandler;
@property (copy) CDUnknownBlockType meDeviceChangedHandler;
@property (copy, readonly) NSString *meDeviceFMFDeviceID;
@property (copy, readonly) NSString *meDeviceIDSDeviceID;
@property (readonly) _Bool meDeviceIsMe;
@property (copy, readonly) NSString *meDeviceName;
@property (readonly) _Bool meDeviceValid;
@property (copy) CDUnknownBlockType netFlagsChangedHandler;
@property (readonly) unsigned int netFlags;
@property (copy) CDUnknownBlockType netInterfacesChangedHandler;
@property (copy) CDUnknownBlockType primaryIPChangedHandler;
@property (nonatomic, readonly) CDUnion_fab80606 primaryIPv4Addr;
@property (nonatomic, readonly) CDUnion_fab80606 primaryIPv6Addr;
@property (copy, nonatomic) CDUnknownBlockType primaryNetworkChangedHandler;
@property (copy, nonatomic, readonly) NSString *primaryNetworkSignature;
@property (copy) CDUnknownBlockType powerUnlimitedChangedHandler;
@property (readonly) _Bool powerUnlimited;
@property (copy) CDUnknownBlockType primaryAppleIDChangedHandler;
@property (copy, readonly) NSString *primaryAppleID;
@property (readonly) _Bool primaryAppleIDIsHSA2;
@property (readonly) CDStruct_83abfce7 rotatingIdentifier48;
@property (copy, readonly) NSData *rotatingIdentifierData;
@property (copy) CDUnknownBlockType rotatingIdentifierChangedHandler;
@property (readonly) _Bool screenLocked;
@property (copy) CDUnknownBlockType screenLockedChangedHandler;
@property (readonly) _Bool screenOn;
@property (copy) CDUnknownBlockType screenOnChangedHandler;
@property (readonly) _Bool screenSaverActive;
@property (copy) CDUnknownBlockType screenSaverChangedHandler;
@property (nonatomic, readonly) int systemLockState;
@property (copy, nonatomic) CDUnknownBlockType systemLockStateChangedHandler;
@property (copy, readonly) NSString *systemName;
@property (copy) CDUnknownBlockType systemNameChangedHandler;
@property (nonatomic, readonly) _Bool firstUnlocked;
@property (copy, nonatomic) CDUnknownBlockType firstUnlockHandler;
@property (nonatomic, readonly) unsigned int wifiFlags;
@property (nonatomic, readonly) int wifiState;
@property (copy, nonatomic) CDUnknownBlockType wifiStateChangedHandler;

- (id)init;
- (void)invalidate;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;

@end

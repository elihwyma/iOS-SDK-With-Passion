/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <NSObject.h>

@class NRDevice, NSDate, NSString, NSUUID, PBCodable;

@interface SYDevice : NSObject

{
    NRDevice *_nrDevice;
    NSUUID *_pairingID;
    NSString *_pairingStorePath;
    NSString *_deviceClass;
    NSString *_systemVersion;
    NSString *_systemBuildVersion;
    NSDate *_lastActiveDate;
    _Bool _hasCachedNearby;
    _Bool _cachedIsNearby;
    _Bool _hasCachedConnected;
    _Bool _cachedConnected;
    long long _state;
}

@property (nonatomic, readonly) NRDevice *nrDevice;
@property (nonatomic) long long state;
@property (nonatomic, readonly, getter=isTargetable) _Bool targetable;
@property (nonatomic, readonly, getter=isPaired) _Bool paired;
@property (nonatomic, readonly, getter=isActive) _Bool active;
@property (copy, nonatomic, readonly) NSString *pairingStorePath;
@property (nonatomic, readonly) NSUUID *pairingID;
@property (nonatomic, readonly) long long deviceCode;
@property (nonatomic, readonly) NSString *deviceClass;
@property (nonatomic, readonly) NSString *systemVersion;
@property (nonatomic, readonly) NSString *systemBuildVersion;
@property (nonatomic, readonly) NSDate *lastActiveDate;
@property (nonatomic, readonly) _Bool supportsFileTransferMessageSend;
@property (nonatomic) _Bool hasCachedNearby;
@property (nonatomic) _Bool cachedIsNearby;
@property (nonatomic) _Bool hasCachedConnected;
@property (nonatomic) _Bool cachedConnected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) PBCodable *stateForLogging;

+ (id)targetableDevice;
+ (id)knownDevices;
+ (id)deviceForNRDevice:(id)arg1;
+ (id)deviceForIDSDevice:(id)arg1;
+ (id)deviceForIDSDeviceID:(id)arg1 fromList:(id)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)initWithNRDevice:(id)arg1;
- (void)_updateStateFlagsPostingNotifications:(_Bool)arg1;
- (void)_updateCachedStateForProperty:(id)arg1;
- (void)device:(id)arg1 propertyDidChange:(id)arg2 fromValue:(id)arg3;
- (id)findMatchingIDSDeviceFromList:(id)arg1;

@end

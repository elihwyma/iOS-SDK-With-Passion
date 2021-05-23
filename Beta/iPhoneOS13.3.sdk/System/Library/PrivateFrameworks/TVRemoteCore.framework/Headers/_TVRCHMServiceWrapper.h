/*
 Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

#import <Foundation/NSObject.h>

#import <TVRemoteCore/Swift-Protocol.h>

@class HMAccessory, HMCharacteristic, HMHome, HMService, NSString;

@protocol _TVRCHMServiceWrapperDelegate;

@interface _TVRCHMServiceWrapper : NSObject <Swift>

{
    _Bool _connected;
    _Bool _sentWakeKey;
    _Bool _volumeControlSupported;
    id <_TVRCHMServiceWrapperDelegate> _delegate;
    HMHome *_home;
    HMService *_service;
    HMAccessory *_accessory;
    HMCharacteristic *_serviceCharacteristic;
    HMCharacteristic *_activeCharacteristic;
    HMCharacteristic *_volumeSelectorCharacteristic;
}

@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) HMService *service;
@property (retain, nonatomic) HMAccessory *accessory;
@property (retain, nonatomic) HMCharacteristic *serviceCharacteristic;
@property (retain, nonatomic) HMCharacteristic *activeCharacteristic;
@property (retain, nonatomic) HMCharacteristic *volumeSelectorCharacteristic;
@property (nonatomic) _Bool connected;
@property (nonatomic) _Bool sentWakeKey;
@property (nonatomic) _Bool volumeControlSupported;
@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSString *model;
@property (weak, nonatomic) id <_TVRCHMServiceWrapperDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)wrapperWithService:(id)arg1;

- (void)disconnect;
- (void)connect;
- (id)initWithService:(id)arg1;
- (_Bool)supportsVolumeControl;
- (void)sendButtonEvent:(id)arg1;
- (void)_disconnectWithError:(id)arg1;
- (_Bool)supportsInfoKey;
- (void)_checkVolumeServicesForAccessory:(id)arg1;
- (void)_setCharacteristicsForService:(id)arg1;
- (void)_startObservingServiceNotifications;
- (void)_sendVolumeKey:(_Bool)arg1;
- (long long)_remoteKeyForTVRCButton:(id)arg1;
- (void)_sendRemoteKey:(long long)arg1;
- (void)_sendWakeKey;
- (void)_serviceNameChanged:(id)arg1;
- (void)_serviceRemoved:(id)arg1;
- (void)_stopObservingServiceNotifications;
- (void)_writeValue:(id)arg1 toCharacteristic:(id)arg2;
- (id)_televisionServiceForAccessory:(id)arg1;

@end

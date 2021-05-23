/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <HMFoundation/HMFObject.h>

@class CUWiFiDevice, HMFUnfairLock, NSData, NSDictionary, NSNumber, NSString, NSUUID;

@interface HAPWACAccessory : HMFObject

{
    _Bool _supportsLegacyWAC;
    _Bool _supportsWAC2;
    _Bool _supportsTokenAuth;
    _Bool _supportsCertAuth;
    _Bool _isHomeKitAccessory;
    _Bool _isAirPlayAccessory;
    _Bool _supportsAirPlay;
    _Bool _requiresOwnershipToken;
    _Bool _homeKitPaired;
    _Bool _pairSetupWAC;
    NSString *_name;
    NSString *_model;
    NSString *_manufacturer;
    NSNumber *_wacCategory;
    NSNumber *_rssi;
    NSData *_bssid;
    NSString *_ssid;
    NSUUID *_identifier;
    NSString *_deviceId;
    NSData *_setupHash;
    NSDictionary *_rawScanResult;
    unsigned long long _supportedWiFiBands;
    unsigned long long _authFeatures;
    unsigned long long _version;
    double _discoveryTime;
    CUWiFiDevice *_cuWiFiDevice;
    HMFUnfairLock *_lock;
}

@property (nonatomic, readonly) CUWiFiDevice *cuWiFiDevice;
@property (nonatomic, readonly) HMFUnfairLock *lock;
@property (nonatomic) double discoveryTime;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *model;
@property (nonatomic, readonly) NSString *manufacturer;
@property (nonatomic, readonly) NSNumber *wacCategory;
@property (nonatomic, readonly) NSNumber *rssi;
@property (nonatomic, readonly) NSData *bssid;
@property (nonatomic, readonly) NSString *ssid;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) NSString *deviceId;
@property (nonatomic, readonly) NSData *setupHash;
@property (nonatomic, readonly) NSDictionary *rawScanResult;
@property (nonatomic, readonly) _Bool supportsAirPlay;
@property (nonatomic, readonly) _Bool supportsLegacyWAC;
@property (nonatomic, readonly) _Bool supportsWAC2;
@property (nonatomic, readonly) _Bool supportsTokenAuth;
@property (nonatomic, readonly) _Bool supportsCertAuth;
@property (nonatomic, readonly) _Bool requiresOwnershipToken;
@property (nonatomic, readonly) _Bool isHomeKitAccessory;
@property (nonatomic, readonly) _Bool isAirPlayAccessory;
@property (nonatomic, readonly) unsigned long long supportedWiFiBands;
@property (nonatomic, readonly) _Bool homeKitPaired;
@property (nonatomic, readonly) _Bool pairSetupWAC;
@property (nonatomic, readonly) unsigned long long authFeatures;
@property (nonatomic, readonly) unsigned long long version;

- (id)description;
- (void)updateWithHAPWACAccessory:(id)arg1;
- (void)__setupSupportedFlags:(unsigned int)arg1;
- (id)initWithWiFiDevice:(id)arg1;
- (id)initWithName:(id)arg1 identifier:(id)arg2 category:(id)arg3 ssid:(id)arg4 deviceId:(id)arg5 flags:(unsigned int)arg6;

@end

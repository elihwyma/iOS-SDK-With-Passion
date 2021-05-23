/*
 Image: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
 */

#import <NSObject.h>

@class EAAccessory, NSArray, NSData, NSDictionary, NSNumber, NSString;

@interface CRVehicleAccessory : NSObject

{
    _Bool _supportsUSBCarPlay;
    _Bool _supportsWirelessCarPlay;
    _Bool _supportsWiredBluetoothPairing;
    _Bool _supportsEnhancedIntegration;
    NSString *_vehicleName;
    NSString *_vehicleModelName;
    NSData *_certificateSerialNumber;
    NSArray *_accessoryProtocols;
    NSString *_bluetoothAddress;
    NSString *_PPID;
    NSNumber *_connectionID;
    EAAccessory *_accessory;
    NSDictionary *_vehicleInfoDataCache;
    NSDictionary *_vehicleAccessoryInfoKeysCache;
}

@property (retain, nonatomic) NSString *vehicleName;
@property (retain, nonatomic) NSString *vehicleModelName;
@property (retain, nonatomic) NSData *certificateSerialNumber;
@property (retain, nonatomic) NSArray *accessoryProtocols;
@property (retain, nonatomic) NSString *bluetoothAddress;
@property (retain, nonatomic) NSNumber *connectionID;
@property (nonatomic) _Bool supportsUSBCarPlay;
@property (nonatomic) _Bool supportsWirelessCarPlay;
@property (nonatomic) _Bool supportsWiredBluetoothPairing;
@property (nonatomic) _Bool supportsEnhancedIntegration;
@property (weak, nonatomic) EAAccessory *accessory;
@property (retain, nonatomic) NSString *PPID;
@property (copy, nonatomic) NSDictionary *vehicleInfoDataCache;
@property (copy, nonatomic) NSDictionary *vehicleAccessoryInfoKeysCache;

- (id)description;
- (id)displayName;
- (id)vehicleAccessoryInfoKeys;
- (_Bool)isBluetoothConnected;
- (id)radarDescription;
- (id)analyticsDescription;
- (_Bool)_updateName;
- (void)beginWiredBluetoothPairing:(CDUnknownBlockType)arg1;
- (void)requestWiFiCredentials;
- (void)sendDeviceTransportIdentifiers;

@end

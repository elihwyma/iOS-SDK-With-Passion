/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class NSData, NSString;

@interface CUBLEDevice : NSObject

{
    unsigned char _nearbyActivityLevel;
    unsigned char _objectDiscoveryBatteryState;
    unsigned char _objectSetupBatteryState;
    unsigned char _objectSetupColorCode;
    unsigned short _objectDiscoveryProductID;
    unsigned short _proximityPairingProductID;
    unsigned int _lgFlags;
    int _nearbyActionType;
    unsigned int _nearbyFlags;
    int _objectDiscoveryMode;
    int _objectSetupBatteryPerformance;
    unsigned int _objectSetupFlags;
    int _proximityPairingSubType;
    int _rawRSSI;
    unsigned int _scanFlags;
    NSData *_addressData;
    NSData *_appleManufacturerData;
    NSString *_identifier;
    NSData *_lgBTAddress;
    NSData *_lgDeviceID;
    NSData *_manufacturerData;
    NSData *_nearbyAuthTag;
    NSData *_objectDiscoveryNearOwnerID;
    NSData *_objectDiscoveryPublicKeyData;
    NSString *_objectSetupFontCode;
    NSString *_objectSetupMessage;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic, readonly) NSData *addressData;
@property (copy, nonatomic, readonly) NSData *appleManufacturerData;
@property (copy, nonatomic, readonly) NSData *lgBTAddress;
@property (copy, nonatomic, readonly) NSData *lgDeviceID;
@property (nonatomic, readonly) unsigned int lgFlags;
@property (copy, nonatomic, readonly) NSData *manufacturerData;
@property (nonatomic, readonly) unsigned char nearbyActivityLevel;
@property (nonatomic, readonly) int nearbyActionType;
@property (copy, nonatomic, readonly) NSData *nearbyAuthTag;
@property (nonatomic, readonly) unsigned int nearbyFlags;
@property (nonatomic, readonly) unsigned char objectDiscoveryBatteryState;
@property (nonatomic, readonly) int objectDiscoveryMode;
@property (copy, nonatomic, readonly) NSData *objectDiscoveryNearOwnerID;
@property (nonatomic, readonly) unsigned short objectDiscoveryProductID;
@property (copy, nonatomic, readonly) NSData *objectDiscoveryPublicKeyData;
@property (nonatomic, readonly) int objectSetupBatteryPerformance;
@property (nonatomic, readonly) unsigned char objectSetupBatteryState;
@property (nonatomic, readonly) unsigned char objectSetupColorCode;
@property (nonatomic, readonly) unsigned int objectSetupFlags;
@property (copy, nonatomic, readonly) NSString *objectSetupFontCode;
@property (copy, nonatomic, readonly) NSString *objectSetupMessage;
@property (nonatomic, readonly) unsigned short proximityPairingProductID;
@property (nonatomic, readonly) int proximityPairingSubType;
@property (nonatomic, readonly) int rawRSSI;
@property (nonatomic, readonly) unsigned int scanFlags;

- (id)description;
- (unsigned int)updateWithAdvertisementData:(id)arg1 rssi:(int)arg2 oldDevice:(id)arg3;
- (id)descriptionWithLevel:(int)arg1;
- (void)_parseManufacturerData:(id)arg1 advertisementFields:(id)arg2;
- (void)_parseAppleManufacturerPtr:(const char *)arg1 end:(const char *)arg2 data:(id)arg3;
- (void)_parseAppleNearbyActionPtr:(const char *)arg1 end:(const char *)arg2;
- (void)_parseAppleNearbyInfoPtr:(const char *)arg1 end:(const char *)arg2;
- (void)_parseAppleObjectDiscoveryPtr:(const char *)arg1 end:(const char *)arg2;
- (void)_parseAppleProximityPairingPtr:(const char *)arg1 end:(const char *)arg2;
- (void)_parseAppleProximityPairingObjectSetupPtr:(const char *)arg1 end:(const char *)arg2;
- (void)_parseLGManufacturerPtr:(const char *)arg1 end:(const char *)arg2 fields:(id)arg3;

@end

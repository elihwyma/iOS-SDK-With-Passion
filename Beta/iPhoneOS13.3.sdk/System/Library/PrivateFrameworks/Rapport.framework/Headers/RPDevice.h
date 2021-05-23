/*
 Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

#import <Foundation/NSObject.h>

@class CUMobileDevice, CUPairedPeer, CURangingMeasurement, NSData, NSDictionary, NSString, NSUUID, SFDevice;

@interface RPDevice : NSObject

{
    unsigned char _deviceActionType;
    _Bool _needsSetup;
    int _activityLevel;
    unsigned int _flags;
    int _proximity;
    unsigned int _blePairState;
    int _rawRSSI;
    int _smoothedRSSI;
    unsigned int _systemPairState;
    unsigned int _wifiDeviceIEFlags;
    NSString *_accountID;
    NSData *_bleAuthTag;
    NSString *_contactID;
    NSString *_identifier;
    NSString *_idsDeviceIdentifier;
    NSString *_model;
    NSString *_name;
    CURangingMeasurement *_relativeLocation;
    SFDevice *_bleDevice;
    CUMobileDevice *_mobileDevice;
    NSData *_authTag;
    NSData *_bleAdvertisementData;
    NSData *_bleDeviceAddress;
    NSUUID *_identifierUUID;
    CUPairedPeer *_pairedPeer;
    NSUUID *_pairingIdentifier;
    NSData *_txtData;
    NSDictionary *_txtDictionary;
    NSString *_udid;
    NSData *_wifiAddress;
    NSData *_wifiBSSID;
    NSData *_wifiDeviceIEDeviceID;
    NSData *_wifiDeviceIEName;
    NSData *_wifiIEData;
    id _wifiPlatformObject;
    NSString *_wifiSSID;
}

@property (retain, nonatomic) SFDevice *bleDevice;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) CUMobileDevice *mobileDevice;
@property (copy, nonatomic) NSString *name;
@property (retain) CURangingMeasurement *relativeLocation;
@property (copy, nonatomic, readonly) NSData *authTag;
@property (copy, nonatomic, readonly) NSData *bleAdvertisementData;
@property (copy, nonatomic, readonly) NSData *bleDeviceAddress;
@property (nonatomic, readonly) unsigned int blePairState;
@property (nonatomic, readonly) unsigned char deviceActionType;
@property (copy, nonatomic) NSUUID *identifierUUID;
@property (nonatomic, readonly) _Bool needsSetup;
@property (retain, nonatomic) CUPairedPeer *pairedPeer;
@property (copy, nonatomic) NSUUID *pairingIdentifier;
@property (nonatomic, readonly) int rawRSSI;
@property (nonatomic, readonly) int smoothedRSSI;
@property (nonatomic) unsigned int systemPairState;
@property (copy, nonatomic, readonly) NSData *txtData;
@property (copy, nonatomic, readonly) NSDictionary *txtDictionary;
@property (copy, nonatomic) NSString *udid;
@property (copy, nonatomic) NSData *wifiAddress;
@property (copy, nonatomic) NSData *wifiBSSID;
@property (copy, nonatomic) NSData *wifiDeviceIEDeviceID;
@property (nonatomic, readonly) unsigned int wifiDeviceIEFlags;
@property (copy, nonatomic) NSData *wifiDeviceIEName;
@property (copy, nonatomic) NSData *wifiIEData;
@property (retain, nonatomic) id wifiPlatformObject;
@property (copy, nonatomic) NSString *wifiSSID;
@property (copy, nonatomic, readonly) NSString *accountID;
@property (nonatomic, readonly) int activityLevel;
@property (copy, nonatomic, readonly) NSData *bleAuthTag;
@property (copy, nonatomic, readonly) NSString *contactID;
@property (nonatomic, readonly) unsigned int flags;
@property (copy, nonatomic, readonly) NSString *idsDeviceIdentifier;
@property (copy, nonatomic, readonly) NSString *model;
@property (nonatomic, readonly) int proximity;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)descriptionWithLevel:(int)arg1;
- (void)_updateTXTDictionary:(id)arg1;
- (unsigned int)updateWithBonjourDevice:(id)arg1;
- (unsigned int)updateWithMobileDevice:(id)arg1;
- (unsigned int)updateWithSFDevice:(id)arg1 changes:(unsigned int)arg2;
- (void)updateWithSystemInfo:(id)arg1;
- (void)updateWithWiFiDevice:(id)arg1 changes:(unsigned int)arg2;

@end

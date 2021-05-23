/*
 Image: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
 */

#import <HearingUtilities/AXPSAPDevice.h>

@class CBPeripheral, NSArray, NSMutableArray, NSString;

@interface AXFakePSAPDevice : AXPSAPDevice

{
    NSMutableArray *_leftFakePrograms;
    NSMutableArray *_rightFakePrograms;
    CDUnknownBlockType _writeBlock;
    _Bool _isConnecting;
    _Bool _connected;
    unsigned long long _deviceType;
    NSString *_name;
    NSArray *_manufacturer;
    NSArray *_model;
    NSString *_leftUUID;
    NSString *_rightUUID;
    NSString *_leftFirmwareVersion;
    NSString *_rightFirmwareVersion;
    NSString *_leftHardwareVersion;
    NSString *_rightHardwareVersion;
    CBPeripheral *leftPeripheral;
    CBPeripheral *rightPeripheral;
    unsigned long long _type;
    unsigned long long _excludedProperties;
}

@property (nonatomic) _Bool connected;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *manufacturer;
@property (retain, nonatomic) NSArray *model;
@property (retain, nonatomic) NSString *leftUUID;
@property (retain, nonatomic) NSString *rightUUID;
@property (nonatomic) _Bool isConnecting;
@property (retain, nonatomic) NSString *leftFirmwareVersion;
@property (retain, nonatomic) NSString *rightFirmwareVersion;
@property (retain, nonatomic) NSString *leftHardwareVersion;
@property (retain, nonatomic) NSString *rightHardwareVersion;
@property (nonatomic) unsigned long long deviceType;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long excludedProperties;
@property (retain, nonatomic) CBPeripheral *leftPeripheral;
@property (retain, nonatomic) CBPeripheral *rightPeripheral;

- (void)dealloc;
- (void)disconnect;
- (void)connect;
- (_Bool)isPersistent;
- (id)valueForProperty:(unsigned long long)arg1;
- (void)setValue:(id)arg1 forProperty:(unsigned long long)arg2;
- (_Bool)isConnected;
- (void)persist;
- (id)initWithDeviceType:(unsigned long long)arg1;
- (id)manufacturerForType;
- (id)modelForType;
- (_Bool)leftAvailable;
- (_Bool)rightAvailable;
- (void)createPrograms;
- (unsigned long long)availablePropertiesForPeripheral:(id)arg1;
- (_Bool)programsListsAreEqual;
- (id)leftPrograms;
- (id)rightPrograms;
- (id)persistentRepresentation;
- (_Bool)isLeftConnected;
- (_Bool)isRightConnected;
- (_Bool)hasConnection;
- (_Bool)deviceSupportsProperty:(unsigned long long)arg1;
- (_Bool)propertyIsAvailable:(unsigned long long)arg1 forEar:(int)arg2;
- (_Bool)showCombinedPrograms;
- (void)writeInt:(unsigned char)arg1 toEar:(int)arg2 forProperty:(unsigned long long)arg3;
- (void)writeSignedInt:(BOOL)arg1 toEar:(int)arg2 forProperty:(unsigned long long)arg3;
- (_Bool)didLoadBasicProperties;
- (_Bool)didLoadRequiredProperties;
- (void)registerWriteBlock:(CDUnknownBlockType)arg1;
- (void)setNewName:(id)arg1;
- (_Bool)isFakeDevice;

@end

/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString, _INPBDataString;

@interface _INPBHomeFilter : PBCodable <Swift>

{
    struct {
        unsigned int deviceType:1;
        unsigned int entityType:1;
        unsigned int isExcludeFilter:1;
        unsigned int outerDeviceType:1;
        unsigned int serviceType:1;
        unsigned int subServiceType:1;
    } _has;
    _Bool _isExcludeFilter;
    _Bool __encodeLegacyGloryData;
    int _deviceType;
    int _entityType;
    int _outerDeviceType;
    int _serviceType;
    int _subServiceType;
    _INPBDataString *_accessory;
    NSArray *_entityIdentifiers;
    _INPBDataString *_entityName;
    _INPBDataString *_group;
    _INPBDataString *_home;
    _INPBDataString *_outerDeviceName;
    _INPBDataString *_room;
    _INPBDataString *_scene;
    _INPBDataString *_service;
    _INPBDataString *_zone;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _INPBDataString *accessory;
@property (nonatomic, readonly) _Bool hasAccessory;
@property (nonatomic) int deviceType;
@property (nonatomic) _Bool hasDeviceType;
@property (copy, nonatomic) NSArray *entityIdentifiers;
@property (nonatomic, readonly) unsigned long long entityIdentifiersCount;
@property (retain, nonatomic) _INPBDataString *entityName;
@property (nonatomic, readonly) _Bool hasEntityName;
@property (nonatomic) int entityType;
@property (nonatomic) _Bool hasEntityType;
@property (retain, nonatomic) _INPBDataString *group;
@property (nonatomic, readonly) _Bool hasGroup;
@property (retain, nonatomic) _INPBDataString *home;
@property (nonatomic, readonly) _Bool hasHome;
@property (nonatomic) _Bool isExcludeFilter;
@property (nonatomic) _Bool hasIsExcludeFilter;
@property (retain, nonatomic) _INPBDataString *outerDeviceName;
@property (nonatomic, readonly) _Bool hasOuterDeviceName;
@property (nonatomic) int outerDeviceType;
@property (nonatomic) _Bool hasOuterDeviceType;
@property (retain, nonatomic) _INPBDataString *room;
@property (nonatomic, readonly) _Bool hasRoom;
@property (retain, nonatomic) _INPBDataString *scene;
@property (nonatomic, readonly) _Bool hasScene;
@property (retain, nonatomic) _INPBDataString *service;
@property (nonatomic, readonly) _Bool hasService;
@property (nonatomic) int serviceType;
@property (nonatomic) _Bool hasServiceType;
@property (nonatomic) int subServiceType;
@property (nonatomic) _Bool hasSubServiceType;
@property (retain, nonatomic) _INPBDataString *zone;
@property (nonatomic, readonly) _Bool hasZone;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)serviceTypeAsString:(int)arg1;
- (int)StringAsServiceType:(id)arg1;
- (id)deviceTypeAsString:(int)arg1;
- (int)StringAsDeviceType:(id)arg1;
- (void)clearEntityIdentifiers;
- (void)addEntityIdentifiers:(id)arg1;
- (id)entityIdentifiersAtIndex:(unsigned long long)arg1;
- (id)entityTypeAsString:(int)arg1;
- (int)StringAsEntityType:(id)arg1;
- (id)outerDeviceTypeAsString:(int)arg1;
- (int)StringAsOuterDeviceType:(id)arg1;
- (id)subServiceTypeAsString:(int)arg1;
- (int)StringAsSubServiceType:(id)arg1;

@end

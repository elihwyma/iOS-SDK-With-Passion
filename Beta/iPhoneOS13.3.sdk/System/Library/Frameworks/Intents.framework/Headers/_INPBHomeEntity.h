/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBDataString, _INPBString;

@interface _INPBHomeEntity : PBCodable <Swift>

{
    CDStruct_95bda58d _deviceTypes;
    struct {
        unsigned int deviceType:1;
        unsigned int entityType:1;
        unsigned int sceneType:1;
    } _has;
    _Bool __encodeLegacyGloryData;
    int _deviceType;
    int _entityType;
    int _sceneType;
    NSString *_entityIdentifier;
    _INPBDataString *_entityName;
    _INPBDataString *_group;
    _INPBDataString *_home;
    _INPBString *_name;
    _INPBDataString *_room;
    _INPBDataString *_zone;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) int deviceType;
@property (nonatomic) _Bool hasDeviceType;
@property (nonatomic, readonly) int *deviceTypes;
@property (nonatomic, readonly) unsigned long long deviceTypesCount;
@property (copy, nonatomic) NSString *entityIdentifier;
@property (nonatomic, readonly) _Bool hasEntityIdentifier;
@property (retain, nonatomic) _INPBDataString *entityName;
@property (nonatomic, readonly) _Bool hasEntityName;
@property (nonatomic) int entityType;
@property (nonatomic) _Bool hasEntityType;
@property (retain, nonatomic) _INPBDataString *group;
@property (nonatomic, readonly) _Bool hasGroup;
@property (retain, nonatomic) _INPBDataString *home;
@property (nonatomic, readonly) _Bool hasHome;
@property (retain, nonatomic) _INPBString *name;
@property (nonatomic, readonly) _Bool hasName;
@property (retain, nonatomic) _INPBDataString *room;
@property (nonatomic, readonly) _Bool hasRoom;
@property (nonatomic) int sceneType;
@property (nonatomic) _Bool hasSceneType;
@property (retain, nonatomic) _INPBDataString *zone;
@property (nonatomic, readonly) _Bool hasZone;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)deviceTypeAsString:(int)arg1;
- (int)StringAsDeviceType:(id)arg1;
- (id)entityTypeAsString:(int)arg1;
- (int)StringAsEntityType:(id)arg1;
- (void)clearDeviceTypes;
- (void)addDeviceTypes:(int)arg1;
- (int)deviceTypesAtIndex:(unsigned long long)arg1;
- (void)setDeviceTypes:(int *)arg1 count:(unsigned long long)arg2;
- (id)deviceTypesAsString:(int)arg1;
- (int)StringAsDeviceTypes:(id)arg1;
- (id)sceneTypeAsString:(int)arg1;
- (int)StringAsSceneType:(id)arg1;

@end

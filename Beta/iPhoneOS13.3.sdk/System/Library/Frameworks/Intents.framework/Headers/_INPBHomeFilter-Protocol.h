/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, _INPBDataString;

@protocol _INPBHomeFilter <Swift>

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

- (unsigned short)serviceTypeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsServiceType: /* Error: Ran out of types for this method. */;
- (unsigned short)deviceTypeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsDeviceType: /* Error: Ran out of types for this method. */;
- (unsigned short)clearEntityIdentifiers;
- (unsigned short)addEntityIdentifiers: /* Error: Ran out of types for this method. */;
- (unsigned short)entityIdentifiersAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)entityTypeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsEntityType: /* Error: Ran out of types for this method. */;
- (unsigned short)outerDeviceTypeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsOuterDeviceType: /* Error: Ran out of types for this method. */;
- (unsigned short)subServiceTypeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsSubServiceType: /* Error: Ran out of types for this method. */;

@end

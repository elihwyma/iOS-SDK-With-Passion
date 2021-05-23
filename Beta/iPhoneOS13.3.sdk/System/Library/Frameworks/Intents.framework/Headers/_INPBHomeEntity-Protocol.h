/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBDataString, _INPBString;

@protocol _INPBHomeEntity <Swift>

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

- (unsigned short)deviceTypeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsDeviceType: /* Error: Ran out of types for this method. */;
- (unsigned short)entityTypeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsEntityType: /* Error: Ran out of types for this method. */;
- (unsigned short)clearDeviceTypes;
- (unsigned short)addDeviceTypes: /* Error: Ran out of types for this method. */;
- (unsigned short)deviceTypesAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)setDeviceTypes:count: /* Error: Ran out of types for this method. */;
- (unsigned short)deviceTypesAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsDeviceTypes: /* Error: Ran out of types for this method. */;
- (unsigned short)sceneTypeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsSceneType: /* Error: Ran out of types for this method. */;

@end

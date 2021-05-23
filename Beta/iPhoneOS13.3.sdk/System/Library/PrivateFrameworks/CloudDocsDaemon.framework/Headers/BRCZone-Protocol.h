/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class BRCPQLConnection, BRCZoneRowID, NSMutableDictionary;

@protocol BRCZone

@property (nonatomic) _Bool needsSave;
@property (retain, nonatomic) BRCZoneRowID *dbRowID;
@property (nonatomic, readonly) _Bool isSharedZone;
@property (nonatomic, readonly) _Bool isPrivateZone;
@property (nonatomic, readonly) BRCPQLConnection *db;
@property (nonatomic, readonly) NSMutableDictionary *plist;

- (unsigned short)dumpStatusToContext:error: /* Error: Ran out of types for this method. */;
- (unsigned short)dumpTablesToContext:includeAllItems:error: /* Error: Ran out of types for this method. */;
- (unsigned short)validateItemsLoggingToFile:db: /* Error: Ran out of types for this method. */;
- (unsigned short)validateStructureLoggingToFile:db: /* Error: Ran out of types for this method. */;

@end

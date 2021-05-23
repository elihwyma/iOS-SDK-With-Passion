/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary;

@interface FCCKPrivateDatabaseSchema : NSObject

{
    NSDictionary *_zoneSchemasByClientName;
    NSDictionary *_zoneSchemasByServerName;
    NSArray *_defaultZoneSchemas;
}

+ (id)databaseSchemaWithZones:(id)arg1;

- (id)init;
- (void)enumerateZoneSchemasWithBlock:(CDUnknownBlockType)arg1;
- (id)schemaForZoneWithClientName:(id)arg1;
- (id)schemaForZoneContainingClientRecordID:(id)arg1;
- (id)schemaForZoneWithServerName:(id)arg1;
- (id)schemaForZoneContainingServerRecordID:(id)arg1;
- (void)enumerateDefaultZoneSchemasWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithZoneSchemas:(id)arg1;
- (id)initWithSchemaDictionary:(id)arg1;

@end

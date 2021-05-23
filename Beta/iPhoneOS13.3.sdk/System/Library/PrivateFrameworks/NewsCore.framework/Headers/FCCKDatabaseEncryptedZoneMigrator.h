/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCCKPrivateDatabaseSchema, NSSet, NSString;

@protocol FCCKDatabaseRecordMiddleware;

@interface FCCKDatabaseEncryptedZoneMigrator : NSObject

{
    FCCKPrivateDatabaseSchema *_sourceSchema;
    id <FCCKDatabaseRecordMiddleware> _recordEncryptionMiddleware;
    CDUnknownBlockType _deprecatedBlock;
    NSSet *_sourceZoneNames;
}

@property (retain, nonatomic) FCCKPrivateDatabaseSchema *sourceSchema;
@property (retain, nonatomic) id <FCCKDatabaseRecordMiddleware> recordEncryptionMiddleware;
@property (copy, nonatomic) CDUnknownBlockType deprecatedBlock;
@property (retain, nonatomic) NSSet *sourceZoneNames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithSourceSchema:(id)arg1 recordEncryptionMiddleware:(id)arg2 deprecatedBlock:(CDUnknownBlockType)arg3;
- (_Bool)databaseMigrationShouldMigrateEntireZone:(id)arg1 database:(id)arg2;
- (id)databaseMigrationRecordNamesToMigrateInZone:(id)arg1 database:(id)arg2;
- (_Bool)databaseMigrationShouldDropRecord:(id)arg1 database:(id)arg2;
- (id)databaseMigrationMigrateRecord:(id)arg1 database:(id)arg2 error:(id *)arg3;
- (_Bool)_isEnabledForDatabase:(id)arg1;
- (_Bool)_shouldMigrateRecord:(id)arg1 database:(id)arg2;
- (id)databaseMigrationZoneNamesForDatabase:(id)arg1;
- (void)databaseMigrationDidFinishForDatabase:(id)arg1 result:(long long)arg2;

@end

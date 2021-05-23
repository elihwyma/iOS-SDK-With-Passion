/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSManagedObjectModel, NSMutableArray, NSNumber, NSSQLModel;

__attribute__((visibility("hidden")))
@interface PFCloudKitMetadataMigrationContext : NSObject

{
    NSMutableArray *_migrationStatements;
    NSMutableArray *_sqlEntitiesToCreate;
    _Bool _hasWorkToDo;
    _Bool _needsMetdataMigrationToNSCKRecordMetadata;
    _Bool _needsOldTableDrop;
    _Bool _needsMirroredRelationshipsLinkedToZone;
    NSManagedObjectModel *_currentModel;
    NSSQLModel *_sqlModel;
    NSManagedObjectModel *_storeMetadataModel;
    NSSQLModel *_storeSQLModel;
    NSNumber *_storeMetadataVersion;
    NSDictionary *_storeMetadataVersionHashes;
}

@property (nonatomic, readonly) NSArray *migrationStatements;
@property (nonatomic, readonly) NSArray *sqlEntitiesToCreate;
@property (nonatomic, readonly) _Bool hasWorkToDo;
@property (retain, nonatomic) NSManagedObjectModel *currentModel;
@property (retain, nonatomic) NSSQLModel *sqlModel;
@property (retain, nonatomic) NSManagedObjectModel *storeMetadataModel;
@property (retain, nonatomic) NSSQLModel *storeSQLModel;
@property (retain, nonatomic) NSNumber *storeMetadataVersion;
@property (retain, nonatomic) NSDictionary *storeMetadataVersionHashes;
@property (nonatomic) _Bool needsMetdataMigrationToNSCKRecordMetadata;
@property (nonatomic) _Bool needsOldTableDrop;
@property (nonatomic) _Bool needsMirroredRelationshipsLinkedToZone;

- (id)init;
- (void)dealloc;
- (void)addMigrationStatement:(id)arg1;
- (void)addSQLEntityToCreate:(id)arg1;

@end

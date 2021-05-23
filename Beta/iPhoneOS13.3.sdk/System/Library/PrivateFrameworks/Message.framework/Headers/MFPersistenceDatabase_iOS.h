/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <EmailDaemon/EDPersistenceDatabase.h>

@class NSString;

@interface MFPersistenceDatabase_iOS : EDPersistenceDatabase

{
    _Bool _migrationHasRun;
    _Bool _createdTempTable;
    id _migrationLock;
}

@property (nonatomic, readonly) id migrationLock;
@property (nonatomic) _Bool migrationHasRun;
@property (nonatomic) _Bool createdTempTable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;

- (id)openConnectionIsWriter:(_Bool)arg1;
- (void)mailMessageLibraryMigrator:(id)arg1 isInitializingDatabaseWithConnection:(id)arg2;
- (void)mailMessageLibraryMigratorScheduleSpotlightReindex:(id)arg1;
- (_Bool)mailMessageLibraryMigrator:(id)arg1 attachProtectedDatabaseWithName:(id)arg2 connection:(id)arg3 error:(id *)arg4;
- (void)mailMessageLibraryMigrator:(id)arg1 detachProtectedDatabaseWithConnection:(id)arg2;
- (id)initWithBasePath:(id)arg1 databaseName:(id)arg2 maxConcurrentReaders:(unsigned long long)arg3 schema:(id)arg4 protectedSchema:(id)arg5 propertyMapper:(id)arg6 protectedDatabasePersistence:(id)arg7;
- (id)checkOutConnectionIsWriter:(_Bool)arg1;
- (void)checkInConnection:(id)arg1;
- (_Bool)enforceDataProtection;

@end

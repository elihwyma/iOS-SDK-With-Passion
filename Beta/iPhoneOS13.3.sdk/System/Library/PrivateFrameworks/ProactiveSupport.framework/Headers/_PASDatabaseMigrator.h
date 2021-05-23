/*
 Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

#import <Foundation/NSObject.h>

@class _PASLock;

@interface _PASDatabaseMigrator : NSObject

{
    _PASLock *_contexts;
}

- (id)init;
- (id)description;
- (id)initWithMigrationObjects:(id)arg1;
- (unsigned char)migrateDatabases;
- (unsigned char)migrateDatabasesToVersion:(unsigned int)arg1;
- (unsigned char)unmigrateDatabases;
- (_Bool)migrationNeeded;
- (id)_contextForMigrationObject:(id)arg1;
- (unsigned char)_migrateDatabasesWithContexts:(id)arg1 toVersion:(unsigned int)arg2;
- (unsigned char)_unmigrateDatabasesWithContexts:(id)arg1;
- (_Bool)_migrationNeededWithContexts:(id)arg1 toVersion:(unsigned int)arg2;
- (_Bool)_canContinueMigratingWithContexts:(id)arg1;
- (unsigned char)_skipFromZeroSchemaWithContexts:(id)arg1;
- (_Bool)_anyContextHasFutureVersionWithContexts:(id)arg1;
- (_Bool)_anyContextHasMismatchedVersionWithContexts:(id)arg1;
- (_Bool)_allContextsAtVersionZeroWithContexts:(id)arg1;
- (unsigned char)_migrateOneStepToVersion:(unsigned int)arg1 contexts:(id)arg2;
- (unsigned char)_runQueries:(id)arg1 nextVersion:(unsigned int)arg2 context:(id)arg3;
- (unsigned char)_runQuery:(id)arg1 context:(id)arg2 database:(id)arg3;
- (void)_prepareContexts:(id)arg1;
- (unsigned char)_clearDatabase:(id)arg1;

@end

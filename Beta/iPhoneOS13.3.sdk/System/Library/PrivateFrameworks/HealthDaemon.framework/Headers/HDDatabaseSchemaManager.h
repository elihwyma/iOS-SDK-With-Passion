/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDDatabaseMigrationTransaction, NSMutableSet;

@interface HDDatabaseSchemaManager : NSObject

{
    NSMutableSet *_createdDatabaseNames;
    HDDatabaseMigrationTransaction *_transaction;
}

- (id)initWithTransaction:(id)arg1;
- (_Bool)setVersion:(long long)arg1 schema:(id)arg2 protectionClass:(long long)arg3 error:(id *)arg4;
- (long long)currentVersionForSchema:(id)arg1 protectionClass:(long long)arg2 error:(id *)arg3;
- (_Bool)_createSchemaMigrationTableIfNeededForDatabaseName:(id)arg1 error:(id *)arg2;
- (id)_schemaTableNameForDatabaseName:(id)arg1;

@end

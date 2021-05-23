/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDSQLiteDatabase;

@interface HDDatabaseMigrationTransaction : NSObject

{
    HDSQLiteDatabase *_unprotectedDatabase;
    HDSQLiteDatabase *_protectedDatabase;
}

@property (nonatomic, readonly) HDSQLiteDatabase *unprotectedDatabase;
@property (nonatomic, readonly) HDSQLiteDatabase *protectedDatabase;
@property (nonatomic, readonly) _Bool isProtectedMigration;

+ (id)unprotectedMigrationTransactionForMigrationTransaction:(id)arg1;

- (id)initWithUnprotectedDatabase:(id)arg1 protectedDatabase:(id)arg2;
- (id)databaseNameForProtectionClass:(long long)arg1;

@end

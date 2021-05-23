/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDDatabaseTransactionContext, HDSQLiteDatabase, NSMutableArray;

@protocol HDSQLiteDatabaseProvider;

@interface HDDatabaseTransaction : NSObject

{
    id <HDSQLiteDatabaseProvider> _databaseProvider;
    NSMutableArray *_onCommitBlocks;
    NSMutableArray *_onRollbackBlocks;
    _Bool _isActive;
    _Bool _isOutermostTransactionUnprotected;
    _Bool _isHandlingTransactionEnd;
    _Bool _performingMigration;
    HDSQLiteDatabase *_unprotectedDatabase;
    HDSQLiteDatabase *_protectedDatabase;
    HDDatabaseTransactionContext *_rootContext;
}

@property (copy, nonatomic, readonly) HDDatabaseTransactionContext *rootContext;
@property (nonatomic) _Bool performingMigration;
@property (nonatomic, readonly) HDSQLiteDatabase *unprotectedDatabase;
@property (nonatomic, readonly) HDSQLiteDatabase *protectedDatabase;

- (void)dealloc;
- (id)databaseForEntityClass:(Class)arg1;
- (void)onCommit:(CDUnknownBlockType)arg1 orRollback:(CDUnknownBlockType)arg2;
- (id)databaseForEntity:(id)arg1;
- (id)initWithDatabaseProvider:(id)arg1 rootContext:(id)arg2;
- (_Bool)performWithContext:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3 inaccessibilityHandler:(CDUnknownBlockType)arg4;
- (void)transactionDidEndWithError:(id)arg1;
- (id)databaseForEntityProtectionClass:(long long)arg1;

@end

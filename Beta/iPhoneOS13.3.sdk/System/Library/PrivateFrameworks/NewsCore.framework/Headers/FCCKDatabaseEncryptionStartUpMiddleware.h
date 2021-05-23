/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol FCCKDatabaseMigrator;

@interface FCCKDatabaseEncryptionStartUpMiddleware : NSObject

{
    id <FCCKDatabaseMigrator> _encryptionMigrator;
}

@property (retain, nonatomic) id <FCCKDatabaseMigrator> encryptionMigrator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sentinelRecordID;
+ (id)secureSentinelRecordID;

- (void)_associateChildOperation:(id)arg1;
- (void)performStartUpForDatabase:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithEncryptionMigrator:(id)arg1;
- (void)_tryToEnableEncryptionForDatabase:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_shouldHandleIdentityLossWithSentinel:(id)arg1 secureSentinel:(id)arg2 error:(id)arg3;
- (void)_handleIdentityLossWithDatabase:(id)arg1 sentinel:(id)arg2 secureSentinel:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)_shouldFailGracefullyWithSentinel:(id)arg1 secureSentinel:(id)arg2 error:(id)arg3;
- (void)_adoptSentinel:(id)arg1 secureSentinel:(id)arg2 forDatabase:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_deleteOldDataIfDesiredWithSentinel:(id)arg1 secureSentinel:(id)arg2 database:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_migrateWithSentinel:(id)arg1 secureSentinel:(id)arg2 database:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_createSentinelsIfNeededForDatabase:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_fetchSentinelsWithDatabase:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_deleteOldDataWithSentinel:(id)arg1 secureSentinel:(id)arg2 database:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end

/*
 Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSPersistentStoreCoordinator, NSString, NSURL;

@interface ACDDatabase : NSObject

{
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSDictionary *_storeOptions;
    NSURL *_databaseURL;
}

@property (nonatomic, readonly) NSURL *databaseURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)new;

- (id)init;
- (id)createConnection;
- (id)initWithDatabaseURL:(id)arg1;
- (id)initWithDatabaseURL:(id)arg1 storeOptions:(id)arg2;
- (id)_addPersistentStoreWithType:(id)arg1 configuration:(id)arg2 URL:(id)arg3 options:(id)arg4 error:(id *)arg5;
- (_Bool)_shouldResetPersistentStoreAfterError:(id)arg1;
- (_Bool)_persistentStoreCoodinator_resetPersistentStoreCoordinatorWithError:(id *)arg1;
- (id)_backupURL;
- (id)_unverifiedBackupURL;
- (_Bool)_performBackupToURL:(id)arg1 unverifiedBackupURL:(id)arg2 error:(id *)arg3;
- (_Bool)restoreFromBackupReturningError:(id *)arg1;
- (_Bool)_validateDatabaseAtURL:(id)arg1 error:(id *)arg2;
- (void)databaseConnection:(id)arg1 encounteredUnrecoverableError:(id)arg2;
- (_Bool)performBackupReturningError:(id *)arg1;
- (_Bool)resetReturningError:(id *)arg1;

@end

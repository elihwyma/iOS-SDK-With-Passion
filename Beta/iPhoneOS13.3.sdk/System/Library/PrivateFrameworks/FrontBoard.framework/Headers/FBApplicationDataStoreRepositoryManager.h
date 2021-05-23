/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <Foundation/NSObject.h>

@class FBSqliteApplicationDataStoreRepository, LSApplicationWorkspace, NSString, NSURL;

@protocol FBApplicationDataStoreRepository, OS_dispatch_queue;

@interface FBApplicationDataStoreRepositoryManager : NSObject

{
    NSURL *_dataStoreURL;
    FBSqliteApplicationDataStoreRepository *_dataStore;
    LSApplicationWorkspace *_lsApplicationWorkspace;
    NSObject<OS_dispatch_queue> *_deferredWorkQueue;
}

@property (retain, nonatomic) id <FBApplicationDataStoreRepository> dataStore;
@property (retain, nonatomic) LSApplicationWorkspace *lsApplicationWorkspace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)objectChangedForKeys:(id)arg1 application:(id)arg2;
- (void)storeInvalidatedForIdentifier:(id)arg1;
- (id)urlByAppendingString:(id)arg1 toURL:(id)arg2;
- (id)_initWithDataStore:(id)arg1 lsWorkspace:(id)arg2;
- (void)migrateApplicationStorePathIfNecessary;
- (void)clearExpiredUninstalledApplicationsFromStoreIfNecessary;
- (_Bool)removeStoreAtURL:(id)arg1 error:(out id *)arg2;
- (_Bool)migrateFromPlistStoreAtURL:(id)arg1 toSqliteStoreAtURL:(id)arg2 error:(id *)arg3;
- (_Bool)migrateFromApplicationStore:(id)arg1 toApplicationStore:(id)arg2 error:(id *)arg3;
- (id)_safeObjectForKey:(id)arg1 forApplication:(id)arg2 ofType:(Class)arg3;
- (void)_handleApplicationInstalled:(id)arg1;
- (void)_performAfterDeferredWork:(CDUnknownBlockType)arg1;

@end

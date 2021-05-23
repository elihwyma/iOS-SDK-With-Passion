/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <CoreData/NSPersistentContainer.h>

@class NSDictionary, NSMergePolicy, NSString, NSURL;

@interface ICPersistentContainer : NSPersistentContainer

{
    _Bool _abortAfterReplacingDatabase;
    NSDictionary *_storeOptions;
    NSURL *_storeURL;
    NSString *_storeType;
    NSMergePolicy *_mergePolicy;
    unsigned long long _fakeFreeDiskSpace;
}

@property (retain, nonatomic) NSURL *storeURL;
@property (retain, nonatomic) NSString *storeType;
@property (retain, nonatomic) NSDictionary *storeOptions;
@property (retain, nonatomic) NSMergePolicy *mergePolicy;
@property (nonatomic, readonly) NSURL *backupsDirectoryURL;
@property (nonatomic) unsigned long long fakeFreeDiskSpace;
@property (nonatomic) _Bool abortAfterReplacingDatabase;

+ (id)managedObjectModel;
+ (id)standardStoreOptions;
+ (id)oldManagedObjectModel;
+ (_Bool)isDataProtectionError:(id)arg1;

- (_Bool)isReadOnly;
- (id)newBackgroundContext;
- (id)initWithStoreURL:(id)arg1 storeType:(id)arg2 options:(id)arg3 mergePolicy:(id)arg4;
- (_Bool)loadPersistentStore:(id *)arg1;
- (id)initWithStoreURL:(id)arg1 storeType:(id)arg2 options:(id)arg3 mergePolicy:(id)arg4 managedObjectModel:(id)arg5;
- (void)setupPersistentStoreDescriptions;
- (_Bool)isTooLowOnDiskSpace;
- (_Bool)migrateFromOldDataModel;
- (void)backupPersistentStore;
- (void)vacuumStoreWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)vacuumStore;

@end

/*
 Image: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
 */

#import <Foundation/NSObject.h>

@class NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator, NSString;

@protocol OS_dispatch_queue;

@interface _KSTextReplacementCoreDataStore : NSObject

{
    NSObject<OS_dispatch_queue> *_queueMOC;
    NSObject<OS_dispatch_queue> *_queuePSC;
    NSString *_directoryPath;
    NSManagedObjectContext *_managedObjectContext;
    NSManagedObjectModel *_managedObjectModel;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
}

@property (retain, nonatomic) NSString *directoryPath;
@property (retain, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (retain, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (retain, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

+ (id)localCloudEntryFromMocObject:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)cleanup;
- (id)persistentStore;
- (id)initWithDirectoryPath:(id)arg1;
- (_Bool)didMakeInitialPull;
- (_Bool)markDeletesForTextReplacementEntries:(id)arg1;
- (_Bool)recordTextReplacementEntries:(id)arg1;
- (_Bool)deleteTextReplacementsWithPredicate:(id)arg1;
- (void)saveCKFetchToken:(id)arg1;
- (id)queryEntriesWithPredicate:(id)arg1 limit:(unsigned long long)arg2;
- (_Bool)deleteTextReplacementsFromLocalStoreWithNames:(id)arg1 excludeSavesToCloud:(_Bool)arg2;
- (id)getCKFetchToken;
- (unsigned long long)countEntriesWithPredicate:(id)arg1;
- (void)fetchAndMergeTextReplacementEntry:(id)arg1 context:(id)arg2;
- (id)fetchTextReplacementEntry:(id)arg1 context:(id)arg2;
- (id)queryManagedObjectsWithPredicate:(id)arg1 limit:(unsigned long long)arg2;
- (id)getSyncStateEntry;
- (id)fetchTextReplacementWithUniqueName:(id)arg1 context:(id)arg2;
- (id)textReplacementEntriesWithLimit:(unsigned long long)arg1;

@end

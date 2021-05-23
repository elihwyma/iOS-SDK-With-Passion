/*
 Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

#import <Foundation/NSObject.h>

@class NSManagedObjectContext, NSPersistentStore, NSPersistentStoreCoordinator;

@interface RKRankingDataManager : NSObject

{
    NSManagedObjectContext *_managedObjectContext;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSPersistentStore *_persistentStore;
}

@property (retain, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (retain, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (retain, nonatomic) NSPersistentStore *persistentStore;

- (id)initWithLanguageID:(id)arg1;
- (id)initWithDatabaseFilename:(id)arg1;
- (void)insertRankingInfoFromDictionary:(id)arg1;
- (id)fetchRankingInfoForCategory:(id)arg1;
- (void)flushRankingData;
- (void)pruneUserDatabase;
- (void)insertRankingInfoFromDictionary:(id)arg1 withDate:(id)arg2;
- (id)fetchRankingInfoFromDB;
- (unsigned long long)getNumberOfEntriesInDB;
- (void)resetRankingData;

@end

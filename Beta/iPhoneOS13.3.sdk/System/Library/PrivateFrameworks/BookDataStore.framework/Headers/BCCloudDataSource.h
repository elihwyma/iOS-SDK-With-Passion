/*
 Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
 */

#import <Foundation/NSObject.h>

#import <BookDataStore/Swift-Protocol.h>

@class NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator;

@interface BCCloudDataSource : NSObject <Swift>

{
    _Bool _setupPersistentStore;
    NSManagedObjectContext *_managedObjectContext;
    NSManagedObjectModel *_managedObjectModel;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
}

@property (retain, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (retain, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (retain, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (nonatomic) _Bool setupPersistentStore;

+ (void)deleteCloudDataWithCompletion:(CDUnknownBlockType)arg1;
+ (id)_persistentStoreDirectory;

- (id)initWithPersistentStoreCoordinator:(id)arg1;
- (id)initWithManagedObjectModel:(id)arg1 persistentStorePath:(id)arg2;
- (void)_setupPersistentStoreCoordinatorWithPath:(id)arg1;
- (void)_setupManagedObjectContextWithCoordinator:(id)arg1;
- (id)_persistentStoreOptions;
- (void)_createPersistentStoreDirectory;
- (void)_logIfError:(id)arg1 operation:(id)arg2;

@end

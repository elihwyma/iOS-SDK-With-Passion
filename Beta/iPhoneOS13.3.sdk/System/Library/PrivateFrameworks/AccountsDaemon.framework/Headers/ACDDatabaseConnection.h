/*
 Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

#import <Foundation/NSObject.h>

@class NSManagedObjectContext, NSNumber, NSPersistentStoreCoordinator;

@protocol ACDDatabaseConnectionDelegate, NSObject;

__attribute__((visibility("hidden")))
@interface ACDDatabaseConnection : NSObject

{
    id <NSObject> _managedObjectContextDidSaveObserver;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSManagedObjectContext *_managedObjectContext;
    id <ACDDatabaseConnectionDelegate> _delegate;
}

@property (nonatomic, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (nonatomic, readonly) NSManagedObjectContext *managedObjectContext;
@property (weak, nonatomic) id <ACDDatabaseConnectionDelegate> delegate;
@property (retain, nonatomic) NSNumber *version;
@property (retain, nonatomic) NSNumber *keychainVersion;

+ (id)new;

- (id)init;
- (void)dealloc;
- (id)_managedObjectModel;
- (id)_persistentStore;
- (void)_managedObjectContextDidSave:(id)arg1;
- (id)fetchObjectsForEntityNamed:(id)arg1 withPredicate:(id)arg2;
- (_Bool)saveWithError:(id *)arg1;
- (id)fetchObjectsForEntityNamed:(id)arg1;
- (id)initWithPersistentStoreCoordinator:(id)arg1;
- (unsigned long long)countOfEntityNamed:(id)arg1 withPredicate:(id)arg2;
- (id)existingObjectWithURI:(id)arg1;
- (id)fetchObjectsForEntityNamed:(id)arg1 withPredicate:(id)arg2 sortDescriptor:(id)arg3;
- (void)deleteAccountPropertyWithKey:(id)arg1 owner:(id)arg2;
- (void)setAccountPropertyWithKey:(id)arg1 value:(id)arg2 owner:(id)arg3;
- (_Bool)saveWithError:(id *)arg1 rollbackOnFailure:(_Bool)arg2;
- (id)managedObjectIDForURI:(id)arg1;
- (id)objectForObjectURI:(id)arg1;
- (void)_setupManagedObjectContextWithPersistentStoreCoodinator:(id)arg1;
- (void)_beginObservingManagedObjectContextDidSaveNotifications;
- (void)_endObservingManagedObjectContextDidSaveNotifications;
- (void)_handleManagedObjectContextError:(id)arg1;
- (id)_accountPropertyWithKey:(id)arg1 owner:(id)arg2;
- (void)_delegate_databaseConnectionEncounteredUnrecoverableError:(id)arg1;

@end

/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Foundation/NSObject.h>

@class NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator, NSString;

@interface SLDatabase : NSObject

{
    NSString *_modelPath;
    NSString *_storePath;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSManagedObjectContext *_managedObjectContext;
    NSManagedObjectModel *_managedObjectModel;
}

- (_Bool)save:(id *)arg1;
- (id)_managedObjectModel;
- (id)_persistentStoreCoordinator;
- (id)initWithStoreName:(id)arg1 modelPath:(id)arg2;
- (void)_setUpManagedObjectContext;
- (void)_removeFilesAtURL:(id)arg1 forStoreCoordinator:(id)arg2;
- (id)fetchObjectsForEntityNamed:(id)arg1 withPredicate:(id)arg2;
- (id)newObjectForEntityNamed:(id)arg1;

@end

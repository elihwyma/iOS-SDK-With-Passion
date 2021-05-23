/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSArray, NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator, NSString;

@interface NSPersistentContainer : NSObject

{
    NSString *_name;
    NSManagedObjectContext *_viewContext;
    NSPersistentStoreCoordinator *_storeCoordinator;
    NSArray *_storeDescriptions;
}

@property (copy, readonly) NSString *name;
@property (readonly) NSManagedObjectContext *viewContext;
@property (readonly) NSManagedObjectModel *managedObjectModel;
@property (readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (copy) NSArray *persistentStoreDescriptions;

+ (id)_newModelForName:(id)arg1;
+ (id)defaultDirectoryURL;
+ (Class)persistentStoreDescriptionClass;
+ (id)persistentContainerWithName:(id)arg1;
+ (id)persistentContainerWithName:(id)arg1 managedObjectModel:(id)arg2;
+ (id)persistentContainerWithPath:(id)arg1 managedObjectModel:(id)arg2;
+ (id)persistentContainerWithPath:(id)arg1;
+ (id)persistentContainerWithPath:(id)arg1 modelNamed:(id)arg2;
+ (id)persistentContainerUsingCachedModelWithPath:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (_Bool)load:(id *)arg1;
- (id)initWithName:(id)arg1 managedObjectModel:(id)arg2;
- (void)_loadStoreDescriptons:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)newBackgroundContext;
- (void)loadPersistentStoresWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)performBackgroundTask:(CDUnknownBlockType)arg1;

@end

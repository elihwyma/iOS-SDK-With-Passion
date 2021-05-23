/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class NSPersistentContainer, NSURL;

__attribute__((visibility("hidden")))
@interface CNContactMetadataPersistentStoreManager : NSObject

{
    NSURL *_storeLocation;
    NSPersistentContainer *_container;
}

@property (nonatomic, readonly) NSURL *storeLocation;
@property (nonatomic, readonly) NSPersistentContainer *container;

+ (id)os_log;
+ (id)createModel;
+ (id)currentManagedObjectModel;
+ (id)defaultStoreLocation;
+ (id)createPersistentContainer;

- (id)init;
- (id)persistentStoreCoordinator;
- (void)performWorkWithManagedObjectContext:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (id)initWithStoreLocation:(id)arg1;
- (_Bool)setupIfNeeded:(id *)arg1;
- (id)createManagedObjectContext;
- (_Bool)createStoreDirectoryIfNeeded:(id *)arg1;
- (id)storeDescription;

@end

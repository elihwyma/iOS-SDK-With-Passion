/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class NSOperationQueue, NSPersistentStoreCoordinator, NSString, NSURL, VSOptional;

__attribute__((visibility("hidden")))
@interface VSSubscriptionPersistentContainer : NSObject

{
    _Bool _didSetupPersistence;
    _Bool _skipMigration;
    NSOperationQueue *_migrationQueue;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    VSOptional *_viewContext;
    NSString *_persistentStoreType;
    NSURL *_persistentStoreURL;
    NSURL *_subscriptionsPropertyListURL;
}

@property (retain, nonatomic) NSOperationQueue *migrationQueue;
@property (nonatomic) _Bool didSetupPersistence;
@property (retain, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (retain, nonatomic) VSOptional *viewContext;
@property (nonatomic) _Bool skipMigration;
@property (copy, nonatomic) NSString *persistentStoreType;
@property (copy, nonatomic) NSURL *persistentStoreURL;
@property (copy, nonatomic) NSURL *subscriptionsPropertyListURL;

- (id)init;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)performBlockAndWait:(CDUnknownBlockType)arg1;
- (_Bool)_setupPersistenceIfNeeded:(id *)arg1;
- (void)_performBlock:(CDUnknownBlockType)arg1 andWait:(_Bool)arg2;
- (void)_removePersistentStore;

@end

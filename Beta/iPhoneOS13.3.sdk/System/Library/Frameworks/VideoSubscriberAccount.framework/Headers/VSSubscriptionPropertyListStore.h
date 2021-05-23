/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <CoreData/NSAtomicStore.h>

__attribute__((visibility("hidden")))
@interface VSSubscriptionPropertyListStore : NSAtomicStore

+ (id)metadataForPersistentStoreWithURL:(id)arg1 error:(id *)arg2;
+ (_Bool)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 error:(id *)arg3;

- (id)type;
- (_Bool)save:(id *)arg1;
- (_Bool)load:(id *)arg1;
- (id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4;
- (id)newCacheNodeForManagedObject:(id)arg1;
- (void)updateCacheNode:(id)arg1 fromManagedObject:(id)arg2;
- (id)newReferenceObjectForManagedObject:(id)arg1;

@end

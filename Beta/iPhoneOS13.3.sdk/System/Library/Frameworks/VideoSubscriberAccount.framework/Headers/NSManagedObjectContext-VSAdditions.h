/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <CoreData/NSManagedObjectContext.h>

@interface NSManagedObjectContext (VSAdditions)

- (void)vs_removeAllPersistentStores;

@end

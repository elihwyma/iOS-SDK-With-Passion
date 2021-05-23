/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

#import <ScreenTimeCore/Swift-Protocol.h>

@class NSManagedObjectContext, NSPersistentStore;

@protocol STPersistenceControllerProtocol <Swift>

@property (nonatomic, readonly) NSManagedObjectContext *viewContext;
@property (nonatomic, readonly) _Bool hasStoreLoaded;
@property (readonly) NSPersistentStore *localStore;
@property (readonly) NSPersistentStore *cloudStore;

- (unsigned short)newBackgroundContext;
- (unsigned short)performBackgroundTask: /* Error: Ran out of types for this method. */;
- (unsigned short)performBackgroundTaskAndWait: /* Error: Ran out of types for this method. */;
- (unsigned short)localPersistentStoreMetadataValueForKey: /* Error: Ran out of types for this method. */;
- (unsigned short)setLocalPersistentStoreValue:forKey: /* Error: Ran out of types for this method. */;

@end

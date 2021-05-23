/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSPersistentStoreCoordinator;

@protocol PLPersistentContainerStoreAccess

@property (readonly) NSPersistentStoreCoordinator *sharedPersistentStoreCoordinator;

- (unsigned short)removeSharedPersistentStoreCoordinator;

@end

/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLManagedObjectContext.h>

@interface PLSharedManagedObjectContext : PLManagedObjectContext

{
    id _changeNotificationObserver;
}

- (void)_mergeChangesFromDidSaveDictionary:(id)arg1 usingObjectIDs:(_Bool)arg2;
- (_Bool)isUserInterfaceContext;
- (void)setupLocalChangeNotifications;
- (void)tearDownLocalChangeNotifications;

@end

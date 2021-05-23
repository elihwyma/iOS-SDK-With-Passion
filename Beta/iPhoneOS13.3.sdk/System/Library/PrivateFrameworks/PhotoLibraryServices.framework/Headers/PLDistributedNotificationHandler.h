/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class PLPhotoLibraryBundleController;

@protocol OS_dispatch_queue;

@interface PLDistributedNotificationHandler : NSObject

{
    NSObject<OS_dispatch_queue> *_notificationQueue;
    PLPhotoLibraryBundleController *_libraryBundleController;
}

- (id)initWithLibraryBundleController:(id)arg1;
- (void)registerForNotifications;
- (void)_handleNotification:(id)arg1;
- (void)_handleCloudPhotoNotification;
- (void)_openSystemPhotoLibrary;

@end

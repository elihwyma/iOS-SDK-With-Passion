/*
 Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRFrameworkSyncedRootURLCache : NSObject

{
    int _syncedLocationsChangedNotificationToken;
    NSArray *_syncedRootURLs;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *syncedRootURLs;

- (id)init;
- (void)dealloc;
- (void)_accountWillChange;
- (void)registerForSyncedLocationsChangesNotifications;
- (void)_fetchSyncedRootURLs;

@end

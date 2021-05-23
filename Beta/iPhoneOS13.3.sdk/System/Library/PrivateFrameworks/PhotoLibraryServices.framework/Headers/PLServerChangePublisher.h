/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PLServerChangePublisher : NSObject

{
    _Atomic long long _postCount;
    _Atomic _Bool _hasPendingWatchNotification;
    _Atomic _Bool _suppressWatchNotification;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)publishChangeEvent:(id)arg1 delayedSaveActionsDetail:(id)arg2 transaction:(id)arg3;
- (void)pauseLaunchEventNotifications;
- (void)unpauseLaunchEventNotifications;
- (void)distributeChangeEvent:(id)arg1 transaction:(id)arg2;
- (void)_postChangeHubNotification;
- (void)_postWatchUpdateNotificationIfNotPaused;
- (void)_postWatchUpdateNotificationIfPending;
- (void)_postWatchUpdateNotification;

@end

/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@protocol CALNNotificationIconProvider, OS_dispatch_queue;

@interface CALNNotificationIconCache : NSObject

{
    id <CALNNotificationIconProvider> _notificationIconProvider;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic, readonly) id <CALNNotificationIconProvider> notificationIconProvider;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

+ (id)_pathForCachedIconWithIdentifier:(id)arg1;
+ (id)_iconCacheDirectory;

- (_Bool)_addIconWithIdentifier:(id)arg1 toCacheAtPath:(id)arg2;
- (_Bool)_createCacheDirectoryIfNeeded;
- (id)initWithNotificationIconProvider:(id)arg1;
- (id)cachedIconPathForIconIdentifier:(id)arg1;
- (id)iconIdentifierForCachedIconPath:(id)arg1;

@end

/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@interface NSNotificationQueue : NSObject

{
    id _notificationCenter;
    id _asapQueue;
    id _asapObs;
    id _idleQueue;
    id _idleObs;
}

+ (id)defaultQueue;

- (id)init;
- (void)dealloc;
- (id)initWithNotificationCenter:(id)arg1;
- (void)_flushNotificationQueue;
- (void)enqueueNotification:(id)arg1 postingStyle:(unsigned long long)arg2 coalesceMask:(unsigned long long)arg3 forModes:(id)arg4;
- (void)enqueueNotification:(id)arg1 postingStyle:(unsigned long long)arg2;
- (void)dequeueNotificationsMatching:(id)arg1 coalesceMask:(unsigned long long)arg2;

@end

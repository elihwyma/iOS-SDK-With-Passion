/*
 Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface CLKNotificationCenter : NSObject

{
    NSMutableDictionary *_registrationsByNotificationName;
    NSObject<OS_dispatch_queue> *_registrationQueue;
}

+ (id)defaultCenter;

- (id)init;
- (void)removeObserver:(id)arg1;
- (void)_handleNotification:(id)arg1;
- (void)_queue_registerObserver:(id)arg1 selector:(SEL)arg2 forNotificationName:(id)arg3;
- (void)_queue_unregisterObserver:(id)arg1 forNotificationName:(id)arg2 cleanupIfLastObserver:(_Bool)arg3;
- (void)_postNotificationName:(id)arg1;
- (void)addObserver:(id)arg1 selector:(SEL)arg2 notificationName:(id)arg3;
- (void)removeObserver:(id)arg1 notificationName:(id)arg2;

@end

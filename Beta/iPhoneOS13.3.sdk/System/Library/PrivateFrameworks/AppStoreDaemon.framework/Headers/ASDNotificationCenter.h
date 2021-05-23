/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSMutableDictionary;

@protocol ASDNotificationCenterDialogObserver, OS_dispatch_queue;

@interface ASDNotificationCenter : NSObject

{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableDictionary *_notificationObservers;
    struct os_unfair_lock_s _observerLock;
    NSHashTable *_progressObservers;
    id <ASDNotificationCenterDialogObserver> _dialogObserver;
}

@property (weak) id <ASDNotificationCenterDialogObserver> dialogObserver;

+ (id)defaultCenter;
+ (id)interface;

- (id)init;
- (void)addProgressObserver:(id)arg1;
- (void)removeProgressObserver:(id)arg1;
- (void)removeNotificationObserver:(id)arg1 forName:(id)arg2;
- (void)addNotificationObserver:(id)arg1 forName:(id)arg2;
- (void)deliverAuthenticateRequest:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;
- (void)deliverDialogRequest:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;
- (void)deliverNotifications:(id)arg1;
- (void)deliverProgress:(id)arg1;

@end

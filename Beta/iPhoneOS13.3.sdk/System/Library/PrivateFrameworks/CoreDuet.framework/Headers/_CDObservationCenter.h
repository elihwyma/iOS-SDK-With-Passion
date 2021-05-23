/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@interface _CDObservationCenter : NSObject

{
    struct NSMapTable *_senderToNotificationObservers;
    struct NSMapTable *_senderToNotificationObserverObservers;
}

+ (id)sharedInstance;

- (id)init;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1 name:(id)arg2 sender:(id)arg3 queue:(id)arg4 usingBlock:(CDUnknownBlockType)arg5;
- (void)removeObserver:(id)arg1 name:(id)arg2;
- (void)postNotificationName:(id)arg1 userInfo:(id)arg2 sender:(id)arg3;
- (struct NSMapTable *)_notificationToObserverEntriesForSender:(id)arg1 observerObserver:(_Bool)arg2 shouldCreate:(_Bool)arg3;
- (struct NSMapTable *)_observerToEntriesForSender:(id)arg1 name:(id)arg2 observerObserver:(_Bool)arg3 shouldCreate:(_Bool)arg4;
- (unsigned long long)observerCountOnName:(id)arg1;
- (void)_postNotificationName:(id)arg1 userInfo:(id)arg2 sender:(id)arg3 observerObserver:(_Bool)arg4;
- (void)_removeObserver:(id)arg1 name:(id)arg2 sender:(id)arg3 observerObserver:(_Bool)arg4 observerCounts:(id)arg5;
- (void)_postObserverChangesNotificationWithObserverCounts:(id)arg1;
- (void)_addObserver:(id)arg1 name:(id)arg2 sender:(id)arg3 queue:(id)arg4 observerObserver:(_Bool)arg5 usingCall:(id)arg6;
- (void)_removeObserver:(id)arg1 observerObserver:(_Bool)arg2;
- (void)_removeObserver:(id)arg1 name:(id)arg2 observerObserver:(_Bool)arg3;
- (void)addObserverChangesObserver:(id)arg1 onName:(id)arg2 queue:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)addObserver:(id)arg1 name:(id)arg2 sender:(id)arg3 queue:(id)arg4 usingSelector:(SEL)arg5;
- (void)removeObserver:(id)arg1 name:(id)arg2 sender:(id)arg3;
- (void)addObserverChangesObserver:(id)arg1 onName:(id)arg2 queue:(id)arg3 usingSelector:(SEL)arg4;
- (void)removeObserverChangesObserver:(id)arg1 onName:(id)arg2;

@end

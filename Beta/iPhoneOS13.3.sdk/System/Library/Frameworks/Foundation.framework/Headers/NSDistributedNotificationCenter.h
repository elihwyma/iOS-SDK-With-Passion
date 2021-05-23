/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSNotificationCenter.h>

@interface NSDistributedNotificationCenter : NSNotificationCenter

@property _Bool suspended;

+ (id)defaultCenter;
+ (id)notificationCenterForType:(id)arg1;

- (id)init;
- (void)removeObserver:(id)arg1 name:(id)arg2 object:(id)arg3;
- (void)postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;
- (void)postNotification:(id)arg1;
- (void)postNotificationName:(id)arg1 object:(id)arg2;
- (id)addObserverForName:(id)arg1 object:(id)arg2 queue:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4 suspensionBehavior:(unsigned long long)arg5;
- (id)addObserverForName:(id)arg1 object:(id)arg2 suspensionBehavior:(unsigned long long)arg3 queue:(id)arg4 usingBlock:(CDUnknownBlockType)arg5;
- (void)postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 options:(unsigned long long)arg4;
- (void)postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 deliverImmediately:(_Bool)arg4;

@end

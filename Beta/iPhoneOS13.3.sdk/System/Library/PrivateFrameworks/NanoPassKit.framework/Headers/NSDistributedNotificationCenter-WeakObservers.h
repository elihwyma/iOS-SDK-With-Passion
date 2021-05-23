/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <Foundation/NSDistributedNotificationCenter.h>

@interface NSDistributedNotificationCenter (WeakObservers)

- (void)_handleNotification:(id)arg1;
- (id)_internalNameForNotificationName:(id)arg1;
- (void)weak_removeObserver:(id)arg1 name:(id)arg2 object:(id)arg3;
- (void)weak_addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;
- (void)weak_removeObserver:(id)arg1;

@end

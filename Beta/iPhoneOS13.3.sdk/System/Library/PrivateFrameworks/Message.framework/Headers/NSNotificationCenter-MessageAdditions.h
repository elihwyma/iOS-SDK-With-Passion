/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSNotificationCenter.h>

@interface NSNotificationCenter (MessageAdditions)

- (id)mf_addImmediateObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;
- (void)mf_removeObservers:(id)arg1;

@end

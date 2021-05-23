/*
 Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <Foundation/NSNotificationCenter.h>

@interface NSNotificationCenter (_IMNotificationCenterAdditions)

- (void)postNotificationName:(id)arg1;
- (void)__mainThreadPostNotificationName:(id)arg1 object:(id)arg2;
- (void)__mainThreadPostNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)__mainThreadPostNotification:(id)arg1;

@end

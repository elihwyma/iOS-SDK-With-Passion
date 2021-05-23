/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@interface NSObject (NSObject_AVShared)

- (void)postNotificationWithDescription:(id)arg1;
- (_Bool)okToNotifyFromThisThread;
- (void)fromNotifySafeThreadPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)allowSafePerformSelector;
- (void)disallowSafePerformSelector;
- (void)fromNotifySafeThreadPostNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)fromMainThreadPostNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;

@end

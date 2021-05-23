/*
 Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import <Foundation/NSNotificationCenter.h>

@interface NSNotificationCenter (ThreadHelpers)

- (void)postNotificationNameOnMainThreadHandler:(id)arg1;
- (void)postNotificationNameOnMainThread:(id)arg1 object:(id)arg2 userInfo:(id)arg3 waitUntilDone:(_Bool)arg4;

@end

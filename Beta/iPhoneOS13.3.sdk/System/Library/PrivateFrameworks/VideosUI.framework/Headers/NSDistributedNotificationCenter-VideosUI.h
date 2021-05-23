/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSDistributedNotificationCenter.h>

@interface NSDistributedNotificationCenter (VideosUI)

+ (id)vui_defaultCenter;
+ (_Bool)vui_wasSentByDifferentProcess:(id)arg1;

- (void)vui_postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;

@end

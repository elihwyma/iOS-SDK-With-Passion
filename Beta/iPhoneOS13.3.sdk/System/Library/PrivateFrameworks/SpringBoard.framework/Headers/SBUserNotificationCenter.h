/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@interface SBUserNotificationCenter : NSObject

+ (void)startUserNotificationCenter;
+ (void)_userNotificationDone:(id)arg1;
+ (void)dispatchUserNotificationFromMachMessage:(CDStruct_a54b61c1 *)arg1 auditToken:(const CDStruct_6ad76789 *)arg2;

@end

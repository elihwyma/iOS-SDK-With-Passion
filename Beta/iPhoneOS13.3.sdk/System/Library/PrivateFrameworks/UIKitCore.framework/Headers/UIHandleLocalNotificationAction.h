/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <BaseBoard/BSAction.h>

@class NSDictionary, NSString, UILocalNotification;

@interface UIHandleLocalNotificationAction : BSAction

@property (copy, nonatomic, readonly) UILocalNotification *notification;
@property (copy, nonatomic, readonly) NSString *action;
@property (copy, nonatomic, readonly) NSDictionary *userResponse;

- (id)initWithXPCDictionary:(id)arg1;
- (id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(CDUnknownBlockType)arg4;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (long long)UIActionType;
- (id)_initWithNotification:(id)arg1 action:(id)arg2 userResponse:(id)arg3 type:(long long)arg4 withHandler:(CDUnknownBlockType)arg5;
- (id)initWithNotification:(id)arg1;
- (id)initWithNotification:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (id)initWithNotification:(id)arg1 action:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (id)initWithNotification:(id)arg1 action:(id)arg2 userResponse:(id)arg3 withHandler:(CDUnknownBlockType)arg4;

@end

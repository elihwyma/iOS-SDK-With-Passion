/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <BaseBoard/BSAction.h>

@class NSDictionary, NSString;

@interface UIHandleRemoteNotificationAction : BSAction

@property (copy, nonatomic, readonly) NSDictionary *payload;
@property (copy, nonatomic, readonly) NSString *action;
@property (copy, nonatomic, readonly) NSDictionary *userResponse;

- (id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(CDUnknownBlockType)arg4;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (void)sendResponse:(id)arg1;
- (long long)UIActionType;
- (id)_initWithRemoteNotificationPayload:(id)arg1 action:(id)arg2 userResponse:(id)arg3 type:(long long)arg4 withHandler:(CDUnknownBlockType)arg5;
- (id)initWithRemoteNotificationPayload:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (id)initWithRemoteNotificationPayload:(id)arg1 action:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (id)initWithRemoteNotificationPayload:(id)arg1 action:(id)arg2 userResponse:(id)arg3 withHandler:(CDUnknownBlockType)arg4;

@end

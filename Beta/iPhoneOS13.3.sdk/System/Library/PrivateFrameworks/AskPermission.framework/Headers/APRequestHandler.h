/*
 Image: /System/Library/PrivateFrameworks/AskPermission.framework/AskPermission
 */

#import <Foundation/NSObject.h>

@interface APRequestHandler : NSObject

+ (void)addRequestWithURL:(id)arg1 account:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)localApproveRequestWithItemIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)updateRequestWithIdentifier:(id)arg1 action:(long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)resetAccountWithType:(long long)arg1;
+ (void)presentProductPageWithTitle:(id)arg1 body:(id)arg2 approve:(id)arg3 decline:(id)arg4 itemIdentifier:(id)arg5 previewURL:(id)arg6;
+ (void)didReceiveStorePushNotificationWithPayload:(id)arg1;
+ (void)startDaemon;

@end

/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Foundation/NSObject.h>

@interface SLAggregateLogger : NSObject

+ (void)logWeiboWithText:(id)arg1 attachments:(id)arg2 locationAttached:(_Bool)arg3 fromProcessWithPID:(int)arg4;
+ (void)logFacebookPost:(id)arg1 fromProcessWithPID:(int)arg2;
+ (void)logTweetWithText:(id)arg1 attachments:(id)arg2 locationAttached:(_Bool)arg3 fromProcessWithPID:(int)arg4;
+ (id)_logIdentifierForPID:(int)arg1;
+ (void)logPostWithServiceNameKey:(id)arg1 text:(id)arg2 attachments:(id)arg3 locationAttached:(_Bool)arg4 fromProcessWithPID:(int)arg5;
+ (_Bool)_attachmentsContainImage:(id)arg1;
+ (_Bool)_attachmentsContainURL:(id)arg1;
+ (void)logFacebookAppInstallChoice:(_Bool)arg1;
+ (void)logTwitterAppInstallChoice:(_Bool)arg1;
+ (void)logTencentWeiboWithText:(id)arg1 attachments:(id)arg2 locationAttached:(_Bool)arg3 fromProcessWithPID:(int)arg4;
+ (void)logWeiboAppInstallChoice:(_Bool)arg1;
+ (void)logTencentWeiboAppInstallChoice:(_Bool)arg1;
+ (void)logFlickrAppInstallChoice:(_Bool)arg1;
+ (void)logVimeoAppInstallChoice:(_Bool)arg1;

@end

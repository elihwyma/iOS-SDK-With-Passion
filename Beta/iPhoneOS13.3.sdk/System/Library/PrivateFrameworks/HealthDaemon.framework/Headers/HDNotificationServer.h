/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDSubserver.h>

@class HDNotificationManager, NSString;

@interface HDNotificationServer : HDSubserver

{
    HDNotificationManager *_notificationManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)remote_badgeForDomain:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_setBadge:(id)arg1 forDomain:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_postNotificationWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_postCompanionUserNotificationOfType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithParentServer:(id)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString, SBNotificationBannerDestination;

@interface SBNCNotificationDispatcherDelegate : NSObject

{
    SBNotificationBannerDestination *_bannerDestination;
}

@property (weak, nonatomic) SBNotificationBannerDestination *bannerDestination;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)_requestAuthenticationWithCompletion:(CDUnknownBlockType)arg1;
- (void)dispatcher:(id)arg1 requestPermissionToExecuteAction:(id)arg2 forDestination:(id)arg3 notificationRequest:(id)arg4 withParameters:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)dispatcher:(id)arg1 didExecuteAction:(id)arg2 forNotificationRequest:(id)arg3;
- (void)dispatcher:(id)arg1 willExecuteAction:(id)arg2 forDestination:(id)arg3 notificationRequest:(id)arg4 requestAuthentication:(_Bool)arg5 withParameters:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (void)dispatcher:(id)arg1 launchForegroundApplicationForAction:(id)arg2 notificationRequest:(id)arg3 fromDestination:(id)arg4 withParameters:(id)arg5;
- (void)dispatcher:(id)arg1 launchBackgroundApplicationForAction:(id)arg2 notificationRequest:(id)arg3 fromDestination:(id)arg4 withParameters:(id)arg5;
- (_Bool)_isPushOrLocalNotificationRequest:(id)arg1;

@end

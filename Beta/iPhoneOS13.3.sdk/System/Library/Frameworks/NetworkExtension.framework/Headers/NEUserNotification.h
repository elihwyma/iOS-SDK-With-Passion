/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface NEUserNotification : NSObject

{
    _Bool _isBanner;
    id _notification;
    id _notificationSource;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    CDUnknownBlockType _callback;
}

@property _Bool isBanner;
@property (retain) id notification;
@property (retain) id notificationSource;
@property (retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (copy, nonatomic) CDUnknownBlockType callback;

+ (Class)getUIDeviceClass;
+ (id)createLAContext;
+ (_Bool)shouldPromptForLocalAuthentication;
+ (void)promptForLocalAuthenticationWithReason:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

- (void)cancel;
- (id)initBannerWithHeader:(id)arg1 message:(id)arg2 alternateMessage:(id)arg3 defaultMessage:(id)arg4;
- (_Bool)postNotificationWithCallbackQueue:(id)arg1 callbackHandler:(CDUnknownBlockType)arg2;
- (id)initAuthenticationWithHeader:(id)arg1 options:(id)arg2 flags:(unsigned long long)arg3;
- (void)executeOnMainLoop:(CDUnknownBlockType)arg1;
- (id)initAddConfigurationsForApp:(id)arg1 warningHeader:(id)arg2 warning:(id)arg3;
- (id)initObsoleteAlertWithAppName:(id)arg1;

@end

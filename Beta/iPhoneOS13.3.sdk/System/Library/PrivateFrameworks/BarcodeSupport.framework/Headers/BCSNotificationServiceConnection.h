/*
 Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@interface BCSNotificationServiceConnection : NSObject

{
    NSXPCConnection *_serviceConnection;
}

@property (retain, nonatomic) NSXPCConnection *serviceConnection;

- (void)dealloc;
- (void)didReceiveNotificationResponse:(id)arg1;
- (void)cancelNotificationsForCodeType:(long long)arg1;
- (void)notifyParsedCodeWithData:(id)arg1 codePayload:(id)arg2 shouldReplacePreviousNotifications:(_Bool)arg3 withReply:(CDUnknownBlockType)arg4;

@end

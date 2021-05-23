/*
 Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface BCSNotificationService : NSObject

- (void)_didReceiveNotificationResponse:(id)arg1;
- (void)didReceiveNotificationResponse:(id)arg1;
- (void)_cancelNotificationsForCodeType:(long long)arg1;
- (void)notifyParsedCodeWithData:(id)arg1 codePayload:(id)arg2 shouldReplacePreviousNotifications:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;
- (void)cancelNotificationsForCodeType:(long long)arg1;

@end

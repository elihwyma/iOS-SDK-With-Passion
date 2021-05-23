/*
 Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
 */

#import <Foundation/NSObject.h>

@class BCSNotificationServiceConnection;

@interface BCSNFCCodeParser : NSObject

{
    BCSNotificationServiceConnection *_notificationServiceConnection;
}

- (void)postNotificationForURL:(id)arg1 payload:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

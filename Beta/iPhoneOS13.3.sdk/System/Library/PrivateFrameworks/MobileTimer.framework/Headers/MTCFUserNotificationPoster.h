/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface MTCFUserNotificationPoster : NSObject

{
    NSMutableDictionary *_notifications;
}

@property (retain, nonatomic) NSMutableDictionary *notifications;

+ (id)sharedInstance;
+ (void)cancelNotificationsWithIdentifiers:(id)arg1;
+ (void)postNotificationWithIdentifier:(id)arg1 title:(id)arg2 message:(id)arg3 defaultButtonTitle:(id)arg4 otherButtonTitle:(id)arg5 bypassDND:(_Bool)arg6 handler:(CDUnknownBlockType)arg7;

- (id)init;

@end

/*
 Image: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface MSAlertManager : NSObject

{
    NSMutableDictionary *_personIDToNotification;
}

+ (id)sharedAlertManager;

- (id)init;
- (void)_userDidRespondToNotification:(struct __CFUserNotification *)arg1 info:(id)arg2 responseFlags:(unsigned long long)arg3;
- (void)_dismissNotificationForPersonID:(id)arg1;
- (void)_showNotificationInfo:(id)arg1;
- (void)displayAlertForPersonID:(id)arg1 notificationDict:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end

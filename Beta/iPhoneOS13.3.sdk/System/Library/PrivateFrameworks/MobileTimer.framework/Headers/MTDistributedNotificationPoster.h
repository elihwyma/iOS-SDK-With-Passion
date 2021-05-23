/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MTDistributedNotificationPoster : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)_shouldNotifyForTrigger:(id)arg1;

- (void)postNotificationForScheduledAlarm:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)dismissNotificationsForAlarm:(id)arg1;
- (void)postNotificationForScheduledTimer:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)dismissNotificationsForTimer:(id)arg1;

@end

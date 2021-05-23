/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@interface NotificationRelay : NSObject

{
    _Bool _refreshManagers;
}

@property (nonatomic) _Bool refreshManagers;

+ (id)sharedRelay;

- (id)init;
- (void)relayFrameworkNotification:(id)arg1;
- (void)refreshManagersForPreferences:(_Bool)arg1 localNotifications:(_Bool)arg2;

@end

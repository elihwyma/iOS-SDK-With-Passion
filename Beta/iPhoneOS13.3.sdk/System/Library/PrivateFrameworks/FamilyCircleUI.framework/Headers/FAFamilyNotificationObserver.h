/*
 Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

#import <Foundation/NSObject.h>

@interface FAFamilyNotificationObserver : NSObject

{
    _Bool _observing;
    CDUnknownBlockType _notificationHandler;
}

+ (void)initialize;
+ (id)familyNotificationObserverWithNotificationHandler:(CDUnknownBlockType)arg1;

- (id)init;
- (void)dealloc;
- (void)stopObserving;
- (void)_startObserving;
- (id)_initWithNotificationHandler:(CDUnknownBlockType)arg1;
- (void)_didReceiveNotification;

@end

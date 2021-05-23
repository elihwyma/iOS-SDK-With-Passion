/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <Foundation/NSObject.h>

@class IMAutomaticEventNotificationQueue, IMEventListenerList, NSMutableArray, NSString;

@interface IMEventNotificationManager : NSObject

{
    IMAutomaticEventNotificationQueue *_notificationQueue;
    double _eventTimeout;
    IMEventListenerList *_eventListeners;
    NSMutableArray *_registeredNotificationQueues;
    long long _busyCount;
}

@property (nonatomic, readonly) IMAutomaticEventNotificationQueue *notificationQueue;
@property (nonatomic, readonly) IMEventListenerList *eventListeners;
@property (nonatomic, readonly) NSMutableArray *registeredNotificationQueues;
@property long long busyCount;
@property double eventTimeout;
@property (readonly, getter=isBusy) _Bool busy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)registerNotificationQueue:(id)arg1;
- (void)eventListenerDidFinish:(id)arg1;
- (void)registerEventListener:(id)arg1;
- (void)cancelAllEventNotifications;
- (void)eventNotificationQueue:(id)arg1 didChangeBusyState:(_Bool)arg2;
- (id)createEventListenerForNotificationName:(id)arg1 object:(id)arg2;
- (void)cancelEventNotificationsForEventHandler:(id)arg1;
- (void)pauseEventNotifications:(_Bool)arg1;
- (void)pushNotificationForEventHandler:(id)arg1 eventNotificationBlock:(CDUnknownBlockType)arg2;
- (void)appendNotificationForEventHandler:(id)arg1 eventNotificationBlock:(CDUnknownBlockType)arg2;
- (void)pushNotificationForEventHandler:(id)arg1 sender:(id)arg2 eventNotificationBlock:(CDUnknownBlockType)arg3;
- (void)appendNotificationForEventHandler:(id)arg1 sender:(id)arg2 eventNotificationBlock:(CDUnknownBlockType)arg3;

@end

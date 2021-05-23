/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <Foundation/NSObject.h>

@class IMDoubleLinkedList;

@protocol IMEventNotificationQueueDelegate;

@interface IMEventNotificationQueue : NSObject

{
    _Bool _paused;
    _Bool _scheduled;
    _Bool _busy;
    id <IMEventNotificationQueueDelegate> _delegate;
    IMDoubleLinkedList *_eventNotificationList;
}

@property (nonatomic, readonly) IMDoubleLinkedList *eventNotificationList;
@property (readonly, getter=isScheduled) _Bool scheduled;
@property (weak) id <IMEventNotificationQueueDelegate> delegate;
@property (readonly, getter=isBusy) _Bool busy;
@property (readonly) long long count;
@property (getter=isPaused) _Bool paused;

- (id)init;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_setBusy:(_Bool)arg1;
- (void)cancelEventNotificationsForNotificationTarget:(id)arg1;
- (void)cancelAllEventNotifications;
- (void)pushEventTarget:(id)arg1 eventNotificationBlock:(CDUnknownBlockType)arg2;
- (void)appendEventTarget:(id)arg1 eventNotificationBlock:(CDUnknownBlockType)arg2;
- (void)pushEventTarget:(id)arg1 sender:(id)arg2 eventNotificationBlock:(CDUnknownBlockType)arg3;
- (void)appendEventTarget:(id)arg1 sender:(id)arg2 eventNotificationBlock:(CDUnknownBlockType)arg3;
- (void)_processQueue;
- (void)_dispatchProcessQueue;
- (void)_didChangeBusyState:(_Bool)arg1;
- (void)_invokeEvent:(id)arg1;
- (void)_willProcessQueue;
- (void)_invokeNotifications;
- (void)_didProcessQueue;
- (void)_didAddNotification:(id)arg1;
- (void)_didCancelNotifications;
- (void)appendEventNotification:(id)arg1;
- (void)pushEventNotification:(id)arg1;
- (void)_scheduleIfNeeded:(_Bool)arg1;
- (void)_didChangePausedState:(_Bool)arg1;
- (_Bool)containsNotificationTarget:(id)arg1;

@end

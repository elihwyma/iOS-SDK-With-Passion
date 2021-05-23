/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class CNCoalescingTimer, NSCountedSet, NSMapTable, NSMutableDictionary, NSString;

@protocol CNContactsLoggerProvider, CNSchedulerProvider, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CNChangesNotifierProxy : NSObject

{
    _Bool forwardsSelfGeneratedDistributedSaveNotifications;
    double _externalNotificationCoalescingDelay;
    NSMapTable *_removalBlocks;
    NSMapTable *_notifyingBlocks;
    id <CNSchedulerProvider> _schedulerProvider;
    id <CNContactsLoggerProvider> _loggerProvider;
    NSMutableDictionary *_notificationForwardingMapping;
    NSCountedSet *_supressedNotificationNames;
    NSMutableDictionary *_notificationsToBeSentOnceAllowed;
    NSObject<OS_dispatch_queue> *_notifierQueue;
    CNCoalescingTimer *_coalescingTimer;
    NSString *_coalescingNotificationName;
}

@property (nonatomic, readonly) NSMutableDictionary *notificationForwardingMapping;
@property (retain, nonatomic) NSCountedSet *supressedNotificationNames;
@property (retain, nonatomic) NSMutableDictionary *notificationsToBeSentOnceAllowed;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notifierQueue;
@property (retain, nonatomic) CNCoalescingTimer *coalescingTimer;
@property (retain, nonatomic) NSString *coalescingNotificationName;
@property (retain, nonatomic) NSMapTable *removalBlocks;
@property (retain, nonatomic) NSMapTable *notifyingBlocks;
@property (nonatomic, readonly) id <CNSchedulerProvider> schedulerProvider;
@property (nonatomic, readonly) id <CNContactsLoggerProvider> loggerProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool forwardsSelfGeneratedDistributedSaveNotifications;
@property (nonatomic) double externalNotificationCoalescingDelay;

- (id)initWithSchedulerProvider:(id)arg1 loggerProvider:(id)arg2;
- (CDUnknownBlockType)postNotificationName:(id)arg1 fromSender:(id)arg2 saveIdentifier:(id)arg3 userInfo:(id)arg4 shouldForwardExternally:(_Bool)arg5 calledFromNotifierQueue:(_Bool)arg6 isFromExternalProcess:(_Bool)arg7;
- (CDUnknownBlockType)receiveNotificationName:(id)arg1 fromSender:(id)arg2 saveIdentifier:(id)arg3 userInfo:(id)arg4 calledFromNotifierQueue:(_Bool)arg5 isFromExternalProcess:(_Bool)arg6;
- (void)receiveNotificationName:(id)arg1 fromSender:(id)arg2 saveIdentifier:(id)arg3 userInfo:(id)arg4 isFromExternalProcess:(_Bool)arg5;
- (void)receiveExternalNotificationName:(id)arg1;
- (void)addListenerForNotificationName:(id)arg1 registration:(CDUnknownBlockType)arg2 removal:(CDUnknownBlockType)arg3;
- (void)addNotificationPoster:(CDUnknownBlockType)arg1 forNotificationName:(id)arg2;
- (void)postNotificationName:(id)arg1 fromSender:(id)arg2 saveIdentifier:(id)arg3 isFromExternalProcess:(_Bool)arg4;
- (void)forwardNotificationName:(id)arg1 asNotificationName:(id)arg2;
- (void)removeAllRegisteredNotificationSources;
- (void)supressNotificationName:(id)arg1;
- (void)stopSupressionOfNotificationName:(id)arg1;
- (void)coalesceNotificationName:(id)arg1;
- (void)waitForCurrentTasksToFinish;

@end

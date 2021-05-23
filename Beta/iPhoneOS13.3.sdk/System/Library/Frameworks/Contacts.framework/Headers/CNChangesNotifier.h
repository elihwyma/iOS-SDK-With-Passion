/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class CNChangesNotifierProxy;

@interface CNChangesNotifier : NSObject

{
    CNChangesNotifierProxy *_notifierProxy;
}

@property (retain, nonatomic) CNChangesNotifierProxy *notifierProxy;

+ (id)sharedNotifier;
+ (id)sharedNotifierWithNotificationWrapper:(id)arg1 schedulerProvider:(id)arg2 loggerProvider:(id)arg3;
+ (void)flushSharedNotifier;

- (void)dealloc;
- (void)willSaveChanges;
- (void)didSaveChangesSuccessfully:(_Bool)arg1 fromContactStore:(id)arg2 requestIdentifier:(id)arg3;
- (void)didChangeMeContactSuccessfully:(_Bool)arg1 fromContactStore:(id)arg2 requestIdentifier:(id)arg3;
- (_Bool)forwardsSelfGeneratedDistributedSaveNotifications;
- (void)setForwardsSelfGeneratedDistributedSaveNotifications:(_Bool)arg1;
- (void)setExternalNotificationCoalescingDelay:(double)arg1;
- (void)waitForCurrentTasksToFinish;
- (id)initWithNotificationWrapper:(id)arg1 schedulerProvider:(id)arg2 loggerProvider:(id)arg3;

@end

/*
 Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

#import <Foundation/NSObject.h>

@class NSArray;

@protocol OS_dispatch_queue;

@interface ACDAccountNotifier : NSObject

{
    NSObject<OS_dispatch_queue> *_notificationEntryQueue;
    NSArray *_notificationEntries;
}

@property (copy, nonatomic, readonly) NSArray *notificationEntries;

+ (id)allNotificationEntries;

- (id)init;
- (_Bool)canRemoveAccount:(id)arg1 inStore:(id)arg2 error:(id *)arg3;
- (_Bool)postWillChangeNotificationForType:(int)arg1 inStore:(id)arg2 newAccount:(id)arg3 oldAccount:(id)arg4;
- (void)postDidChangeNotificationForType:(int)arg1 inStore:(id)arg2 newAccount:(id)arg3 oldAccount:(id)arg4;
- (void)postWillPerformDataclassActionsOnAccount:(id)arg1 forDataclasses:(id)arg2;
- (void)postDidPerformDataclassActionsOnAccount:(id)arg1 forDataclasses:(id)arg2;
- (_Bool)canSaveAccount:(id)arg1 inStore:(id)arg2 error:(id *)arg3;
- (id)initWithNotificationEntries:(id)arg1;
- (id)_pluginsRegisteredForAccount:(id)arg1;
- (id)_pluginsRegisteredForNewAccount:(id)arg1 oldAccount:(id)arg2;
- (id)_unsafe_pluginsRegisteredForAccount:(id)arg1;
- (id)_unsafe_pluginsRegisteredForNewAccount:(id)arg1 oldAccount:(id)arg2;
- (id)_provisionedDataclassesForNewAccount:(id)arg1 oldAccount:(id)arg2;
- (void)addNotificationEntry:(id)arg1;
- (void)removeAllNotificationEntries;

@end

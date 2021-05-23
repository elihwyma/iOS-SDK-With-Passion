/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;

@protocol CALNAnalyticsHandler, CALNNotificationStorage, CALNUserNotificationCenter, OS_dispatch_queue;

@interface CALNNotificationServer : NSObject

{
    _Bool _active;
    _Bool _isProtectedDataAvailable;
    id <CALNUserNotificationCenter> _userNotificationCenter;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableDictionary *_notificationSourceMap;
    id <CALNNotificationStorage> _storage;
    id <CALNAnalyticsHandler> _analyticsHandler;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSMutableDictionary *notificationSourceMap;
@property (retain, nonatomic) id <CALNNotificationStorage> storage;
@property (nonatomic, readonly) id <CALNAnalyticsHandler> analyticsHandler;
@property (nonatomic, getter=isActive) _Bool active;
@property (nonatomic) _Bool isProtectedDataAvailable;
@property (nonatomic, readonly) id <CALNUserNotificationCenter> userNotificationCenter;
@property (nonatomic, readonly) NSArray *notificationSources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)_activate;
- (void)activate;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)deactivate;
- (void)_deactivate;
- (void)addRecord:(id)arg1;
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)protectedDataDidBecomeAvailable;
- (void)receivedNotificationNamed:(id)arg1;
- (void)receivedAlarmNamed:(id)arg1;
- (void)didRegisterForAlarms;
- (void)handleBTAJob:(id)arg1 named:(const char *)arg2;
- (void)didRegisterForBackgroundTaskAgentJobs;
- (void)removeRecordWithSourceIdentifier:(id)arg1 sourceClientIdentifier:(id)arg2;
- (void)updateRecord:(id)arg1;
- (id)fetchRecordsWithSourceIdentifier:(id)arg1;
- (id)_notificationSourceMapWithNotificationSources:(id)arg1;
- (void)_didSetNotificationSources:(id)arg1;
- (id)_fetchRecordsWithSourceIdentifier:(id)arg1;
- (void)_addRecord:(id)arg1;
- (void)_updateRecord:(id)arg1;
- (void)_removeRecordWithSourceIdentifier:(id)arg1 sourceClientIdentifier:(id)arg2;
- (id)_notificationRecordResponseFromNotificationResponse:(id)arg1;
- (id)notificationSourceForSourceIdentifier:(id)arg1;
- (id)initWithUserNotificationCenter:(id)arg1 storage:(id)arg2 analyticsHandler:(id)arg3 deviceLockObserver:(id)arg4;
- (void)setNotificationSources:(id)arg1;
- (id)_notificationRecordWithSourceIdentifier:(id)arg1 sourceClientIdentifier:(id)arg2;

@end

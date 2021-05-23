/*
 Image: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
 */

#import <KnowledgeMonitor/_DKMonitor.h>

@class EKEventStore, MTAlarmManager, NSDate, NSObject;

@protocol OS_os_log;

@interface _DKNextAlarmForTopOffProtectionMonitor : _DKMonitor

{
    _Bool _isPluggedIn;
    int _pluggedInToken;
    NSObject<OS_os_log> *_log;
    NSDate *_nextEarliestEvent;
    MTAlarmManager *_alarmManager;
    EKEventStore *_eventStore;
}

@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (nonatomic) _Bool isPluggedIn;
@property (nonatomic) int pluggedInToken;
@property (retain, nonatomic) NSDate *nextEarliestEvent;
@property (retain, nonatomic) MTAlarmManager *alarmManager;
@property (retain, nonatomic) EKEventStore *eventStore;

+ (id)entitlements;
+ (id)eventStream;
+ (id)_eventWithState:(id)arg1;
+ (_Bool)shouldMergeUnchangedEvents;

- (void)stop;
- (void)start;
- (void)registerForChanges;
- (id)nextAlarm;
- (void)updateCurrentState;
- (void)handleAlarmsDidChangeNotification:(id)arg1;
- (void)handleCalendarEventsChanged:(id)arg1;
- (id)nextCalendarEvent;
- (void)recordNextEvent;

@end

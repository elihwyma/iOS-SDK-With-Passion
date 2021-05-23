/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@class HKHealthStore, MTAlarmStorage, NSString;

@protocol MTBedtimeSessionTracker, MTBedtimeSessionTrackerDelegate, NAScheduler;

@interface MTBedtimeSessionManager : NSObject

{
    id <NAScheduler> _serializer;
    MTAlarmStorage *_alarmStorage;
    HKHealthStore *_healthStore;
    NSString *_archivedSessionDataPath;
    NSString *_archivedSessionDataFile;
    id <MTBedtimeSessionTracker> _bedtimeSessionTracker;
    id <MTBedtimeSessionTrackerDelegate> _bedtimeSessionTrackerDelegate;
}

@property (retain, nonatomic) id <NAScheduler> serializer;
@property (retain, nonatomic) MTAlarmStorage *alarmStorage;
@property (retain, nonatomic) HKHealthStore *healthStore;
@property (copy, nonatomic) NSString *archivedSessionDataPath;
@property (copy, nonatomic) NSString *archivedSessionDataFile;
@property (retain, nonatomic) id <MTBedtimeSessionTracker> bedtimeSessionTracker;
@property (weak, nonatomic) id <MTBedtimeSessionTrackerDelegate> bedtimeSessionTrackerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)platformSpecificSourceBundleIdentifier;
+ (id)sleepSampleWithInterval:(id)arg1 sampleType:(long long)arg2 metadata:(id)arg3;

- (void)bedtimeSessionTracker:(id)arg1 sessionDidComplete:(id)arg2;
- (id)writeSession:(id)arg1;
- (void)archiveSession:(id)arg1;
- (void)waitForUnlock;
- (id)_unprocessedSessions;
- (id)_writeSessions:(id)arg1;
- (_Bool)_hasUnprocessedSessions;
- (id)_writeSessionData;
- (void)deviceFirstUnlocked;
- (void)_removeSessionDataFile;
- (id)initWithAlarmStorage:(id)arg1 sleepCoordinator:(id)arg2 bedtimeSessionTracker:(id)arg3;
- (void)saveSessionData;

@end

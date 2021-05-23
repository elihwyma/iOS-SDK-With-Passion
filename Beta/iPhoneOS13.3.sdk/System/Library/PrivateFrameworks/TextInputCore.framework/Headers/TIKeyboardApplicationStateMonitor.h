/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class BKSApplicationStateMonitor, NSCalendar, NSDate, NSDictionary, NSLock, NSMutableArray, NSMutableSet, NSString;

@protocol TIKeyboardApplicationStateResponses;

@interface TIKeyboardApplicationStateMonitor : NSObject

{
    double _appActivityTimeDurationThreshold;
    double _appActivityKeyboardUsageFractionThreshold;
    NSObject<TIKeyboardApplicationStateResponses> *_delegate;
    BKSApplicationStateMonitor *_applicationStateMonitor;
    NSString *_activeAppBundleID;
    double _activeAppStartTime;
    NSMutableSet *_foregroundApps;
    NSDate *_activeAppStartDate;
    NSDictionary *_applicationStateDatabase;
    NSMutableSet *_imSuppressingBundleIDs;
    NSLock *_activeStateDataLock;
    NSLock *_databaseInUseLock;
    NSDate *_timeOfLastFlushToDisk;
    NSCalendar *_utcCalendar;
    NSMutableArray *_keyboardUsageTimes;
    double _activeKeyboardStartTime;
}

@property (retain, nonatomic) BKSApplicationStateMonitor *applicationStateMonitor;
@property (retain, nonatomic) NSString *activeAppBundleID;
@property (nonatomic) double activeAppStartTime;
@property (retain, nonatomic) NSMutableSet *foregroundApps;
@property (retain, nonatomic) NSDate *activeAppStartDate;
@property (retain, nonatomic) NSDictionary *applicationStateDatabase;
@property (retain, nonatomic) NSMutableSet *imSuppressingBundleIDs;
@property (retain, nonatomic) NSLock *activeStateDataLock;
@property (retain, nonatomic) NSLock *databaseInUseLock;
@property (retain, nonatomic) NSDate *timeOfLastFlushToDisk;
@property (retain, nonatomic) NSCalendar *utcCalendar;
@property (retain, nonatomic) NSMutableArray *keyboardUsageTimes;
@property (nonatomic) double activeKeyboardStartTime;
@property (weak, nonatomic) NSObject<TIKeyboardApplicationStateResponses> *delegate;

- (id)init;
- (void)dealloc;
- (id)databaseLocation;
- (_Bool)ignoreAppExtension:(id)arg1;
- (id)initWithAppActivityTimeDurationThreshold:(double)arg1 keyboardUsageFractionThreshold:(double)arg2;
- (void)applicationUninstalled:(id)arg1;
- (void)handleApplicationStateChange:(id)arg1;
- (void)startANewKeyboardActivity:(id)arg1;
- (void)logOutKeyboardActivity:(double)arg1;
- (void)keyboardInUse;
- (void)keyboardNoLongerInUse;
- (_Bool)threadUnsafeFlushChangesToDiskWithImmediacy:(_Bool)arg1;
- (_Bool)flushPendingChangesToDisk;

@end

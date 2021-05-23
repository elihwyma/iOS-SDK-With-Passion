/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface IMLogDump : NSObject

{
    _Bool _shouldCollectPowerWifiStats;
    NSObject<OS_dispatch_queue> *_logDumpQueue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *logDumpQueue;
@property (nonatomic, readonly) _Bool shouldCollectPowerWifiStats;

+ (id)sharedInstance;

- (id)init;
- (_Bool)_isOnPower;
- (_Bool)_isWifiUsable;
- (id)createTodaysStatisticDictionaryIfNeeded;
- (void)printSyncDurationStats;
- (void)printPowerAndWifiStats;
- (void)dumpMOCLoggingMetaData;
- (void)printIfWeAreInTheMiddleOfASync;
- (void)clearSyncStats;
- (_Bool)_checkArgumentValidity:(id)arg1 withFileName:(id)arg2 withError:(id *)arg3;
- (id)_lastHoursToAppend:(int)arg1;
- (id)_predicateToAppend:(id)arg1;
- (double)_calculateMinutesSyncingWithDurationKey:(id)arg1 attemptDateKey:(id)arg2;
- (id)_dictionaryForDayKey:(id)arg1;
- (void)_calculateConnectedMinutesForDateKey:(id)arg1 durationKey:(id)arg2 daysDictionary:(id)arg3 totalDurationDictionary:(id)arg4 totalDurationKey:(id)arg5;
- (id)_calculatePowerAndWifiConnectedTimeInMinutesForDictionary:(id)arg1;
- (void)_incrementSyncAttemptsWithKey:(id)arg1 syncDateKey:(id)arg2;
- (void)_noteSyncEndedForDurationKey:(id)arg1 dateKey:(id)arg2;
- (void)_compressAndDeleteFilesAtPath:(id)arg1 destinationFilePath:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)dumpLogsToFolderAtPath:(id)arg1 withFileName:(id)arg2 lastHours:(int)arg3 predicate:(id)arg4 includeCKDebug:(_Bool)arg5 withCompletion:(CDUnknownBlockType)arg6;
- (id)logShowCommandToFilePath:(id)arg1 lastHours:(int)arg2 predicate:(id)arg3;
- (void)_includeCloudKitDebugFilesAtPath:(id)arg1;
- (void)incrementCoreDuetSyncAttempts;
- (void)incrementAHDASyncAttempts;
- (void)noteCoreDuetSyncEnded;
- (void)noteAHDASyncEnded;

@end

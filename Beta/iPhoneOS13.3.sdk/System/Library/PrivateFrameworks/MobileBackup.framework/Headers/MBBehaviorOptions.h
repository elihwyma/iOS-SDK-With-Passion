/*
 Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import <Foundation/NSObject.h>

@class MBConnection, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface MBBehaviorOptions : NSObject

{
    _Bool _warnForLateiTunesBackups;
    _Bool _flushLogMessages;
    MBConnection *_conn;
    NSMutableDictionary *_cachedPrefs;
    NSObject<OS_dispatch_queue> *_cachedPrefsQueue;
}

@property (retain, nonatomic) MBConnection *conn;
@property (retain, nonatomic) NSMutableDictionary *cachedPrefs;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cachedPrefsQueue;
@property (copy, nonatomic) NSString *cloudKitContainerName;
@property (nonatomic) long long maxBatchCount;
@property (nonatomic) long long maxBatchSize;
@property (nonatomic) long long manifestPageSize;
@property (nonatomic) long long recordSaveAttempts;
@property (nonatomic) _Bool sqlTrace;
@property (nonatomic) long long maxDomainsToBackup;
@property (nonatomic) _Bool warnForLateiTunesBackups;
@property (nonatomic) int sqlBatchCount;
@property (nonatomic) double sqlBatchTime;
@property (nonatomic) _Bool useBackgroundOperationsForBackup;
@property (copy, nonatomic) NSString *minimumBuildVersionForFullBackup;
@property (nonatomic) _Bool backupFromLocalSnapshot;
@property (nonatomic) _Bool useABC;
@property (nonatomic) _Bool keepDailySnapshots;
@property (nonatomic) _Bool snapshotAfterForegroundRestore;
@property (nonatomic) _Bool flushLogMessages;
@property (nonatomic, readonly) long long maxBatchSaveAssetSize;
@property (nonatomic, readonly) long long maxBatchFetchAssetSize;
@property (nonatomic, readonly) _Bool usePowerLog;

+ (id)sharedOptions;

- (id)init;
- (id)_behaviorOptionForKey:(id)arg1;
- (void)_startListeningForNotifications;
- (id)_getStringOptionLockedForKey:(id)arg1 defaultValue:(id)arg2;
- (id)_behaviorContainerOptionForKey:(id)arg1;
- (int)_getIntOptionForKey:(id)arg1 defaultValue:(int)arg2;
- (void)_setPref:(id)arg1 forKey:(id)arg2;
- (_Bool)_getBoolOptionForKey:(id)arg1 defaultValue:(_Bool)arg2;
- (double)_getDoubleOptionForKey:(id)arg1 defaultValue:(double)arg2;
- (id)_getStringOptionForKey:(id)arg1 defaultValue:(id)arg2;
- (id)_getArrayOptionForKey:(id)arg1 defaultValue:(id)arg2;
- (void)setmaxBatchSaveAssetSize:(long long)arg1;
- (int)maxBatchSaveConcurrentModifyRecordsOperationsWithDefaultValue:(int)arg1;
- (int)maxBatchDeleteConcurrentModifyRecordsOperationsWithDefaultValue:(int)arg1;
- (int)maxBatchFetchConcurrentFetchRecordsOperationsWithDefaultValue:(int)arg1;
- (void)setmaxBatchFetchAssetSize:(long long)arg1;
- (void)setSQLTrace:(_Bool)arg1;
- (void)setUsePowerLog:(_Bool)arg1;
- (double)SQLiteSpaceSavingsThresholdWithDefaultValue:(double)arg1;
- (_Bool)validateSignatureOnRestoreWithDefaultValue:(_Bool)arg1;
- (int)validateFileEncodingWithDefaultValue:(int)arg1;
- (_Bool)enableSQLiteArchivingWithDefaultValue:(_Bool)arg1;
- (_Bool)fixOwnershipOnFileScanWithDefaultValue:(_Bool)arg1;

@end

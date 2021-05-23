/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate;

@interface IMCloudKitSyncState : NSObject

{
    _Bool _hasExited;
    _Bool _isDisablingDevices;
    _Bool _accountIsEnabled;
    unsigned long long _syncControllerSyncState;
    long long _syncControllerSyncType;
    long long _syncControllerRecordType;
    NSDate *_exitDate;
    long long _changingEnabledState;
    NSDate *_lastSyncDate;
    NSArray *_errors;
    long long _accountStatus;
    long long _syncState;
}

@property (nonatomic, readonly) _Bool accountIsEnabled;
@property (nonatomic, readonly) long long syncState;
@property (nonatomic, readonly) _Bool isSyncing;
@property (nonatomic, readonly) _Bool isSyncingPaused;
@property (nonatomic, readonly) unsigned long long syncControllerSyncState;
@property (nonatomic, readonly) long long syncControllerSyncType;
@property (nonatomic, readonly) long long syncControllerRecordType;
@property (nonatomic, readonly) _Bool isSyncingAvailable;
@property (nonatomic, readonly) _Bool hasExited;
@property (copy, nonatomic, readonly) NSDate *exitDate;
@property (nonatomic, readonly) _Bool isSyncingEnabled;
@property (nonatomic, readonly) long long changingEnabledState;
@property (nonatomic, readonly) _Bool isDisablingDevices;
@property (nonatomic, readonly) _Bool canChangeEnabledSetting;
@property (nonatomic, readonly) _Bool canStartSyncing;
@property (nonatomic, readonly) _Bool canEnableSyncing;
@property (nonatomic, readonly) _Bool isSyncEnabledForDisplayOnly;
@property (nonatomic, readonly) NSDate *lastSyncDate;
@property (nonatomic, readonly) NSArray *errors;
@property (nonatomic, readonly) _Bool syncingFailed;
@property (nonatomic, readonly) long long accountStatus;

+ (id)logHandle;

- (id)description;
- (id)logHandle;
- (id)initWithAccountEnabled:(_Bool)arg1 stateDictionary:(id)arg2;
- (_Bool)shouldFetchSyncStatistics;
- (id)createSyncProgressWithSyncStatistics:(id)arg1;
- (_Bool)shouldRescheduleSyncSyncProgress;
- (_Bool)_isChangingEnabledState;
- (id)syncErrorWithDomain:(id)arg1 code:(long long)arg2;
- (_Bool)_shouldHideProgressInFirstSevenDays;

@end

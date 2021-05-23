/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKDModifyRecordZonesOperation : CKDDatabaseOperation

{
    _Bool _allowDefaultZoneSave;
    _Bool _markZonesAsUserPurged;
    _Bool _dontFetchFromServer;
    _Bool _didSynchronizeUserKeyRegistry;
    int _numZoneSaveAttempts;
    CDUnknownBlockType _saveCompletionBlock;
    CDUnknownBlockType _deleteCompletionBlock;
    NSMutableArray *_recordZonesToSave;
    NSArray *_recordZoneIDsToDelete;
    NSMutableDictionary *_recordZonesByZoneID;
    NSMutableDictionary *_retryableErrorsByZoneID;
    long long _maxZoneSaveAttempts;
    NSMutableArray *_zonesWaitingOnKeyRegistrySync;
}

@property (retain, nonatomic) NSMutableArray *recordZonesToSave;
@property (retain, nonatomic) NSArray *recordZoneIDsToDelete;
@property (retain, nonatomic) NSMutableDictionary *recordZonesByZoneID;
@property (retain, nonatomic) NSMutableDictionary *retryableErrorsByZoneID;
@property (nonatomic) _Bool allowDefaultZoneSave;
@property (nonatomic) _Bool markZonesAsUserPurged;
@property (nonatomic) int numZoneSaveAttempts;
@property (nonatomic) long long maxZoneSaveAttempts;
@property (nonatomic) _Bool dontFetchFromServer;
@property (nonatomic) _Bool didSynchronizeUserKeyRegistry;
@property (retain, nonatomic) NSMutableArray *zonesWaitingOnKeyRegistrySync;
@property (copy, nonatomic) CDUnknownBlockType saveCompletionBlock;
@property (copy, nonatomic) CDUnknownBlockType deleteCompletionBlock;

+ (long long)isPredominatelyDownload;

- (void)main;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (id)nameForState:(unsigned long long)arg1;
- (_Bool)makeStateTransition;
- (void)_fetchPCSDataForZonesFromServer:(_Bool)arg1;
- (_Bool)_saveZonesToServer;
- (void)_sychronizeUserKeyRegistryIfNeeded;
- (void)_sendErrorForFailedZones;
- (void)_handleRecordZoneSaved:(id)arg1 responseCode:(id)arg2 serverCapabilities:(unsigned long long)arg3;
- (void)_handleRecordZoneDeleted:(id)arg1 responseCode:(id)arg2;
- (void)_createNewPCSForZone:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_fetchPCSDataForZone:(id)arg1 fromServer:(_Bool)arg2;
- (void)_checkAndPrepareZones;

@end

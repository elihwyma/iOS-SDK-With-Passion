/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface CKDFetchRecordZonesOperation : CKDDatabaseOperation

{
    _Bool _isFetchAllRecordZonesOperation;
    _Bool _shouldRetry;
    _Bool _onlyFetchPCSInfo;
    _Bool _ignorePCSFailures;
    CDUnknownBlockType _recordZoneFetchedProgressBlock;
    NSArray *_recordZoneIDs;
    NSMutableDictionary *_zonesToSaveForPCSUpdateByZoneID;
    NSMutableArray *_zoneIDsNeedingPCSUpdateRetry;
    NSMutableDictionary *_pcsUpdateErrorsByZoneID;
    long long _numZoneSaveAttempts;
    NSMutableSet *_zoneIDsNeedingDugongKeyRoll;
}

@property (retain, nonatomic) NSArray *recordZoneIDs;
@property (nonatomic) _Bool isFetchAllRecordZonesOperation;
@property (retain, nonatomic) NSMutableDictionary *zonesToSaveForPCSUpdateByZoneID;
@property (nonatomic) _Bool shouldRetry;
@property (retain, nonatomic) NSMutableArray *zoneIDsNeedingPCSUpdateRetry;
@property (retain, nonatomic) NSMutableDictionary *pcsUpdateErrorsByZoneID;
@property (nonatomic) long long numZoneSaveAttempts;
@property (nonatomic) _Bool onlyFetchPCSInfo;
@property (retain, nonatomic) NSMutableSet *zoneIDsNeedingDugongKeyRoll;
@property (nonatomic) _Bool ignorePCSFailures;
@property (copy, nonatomic) CDUnknownBlockType recordZoneFetchedProgressBlock;

- (void)main;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (id)nameForState:(unsigned long long)arg1;
- (_Bool)makeStateTransition;
- (void)_sendErrorForFailedZones;
- (void)_handleRecordZoneFetch:(id)arg1 zoneID:(id)arg2 responseCode:(id)arg3;
- (void)checkPCSIdentity;
- (void)fetchZonesFromServer;
- (void)saveZonesWithUpdatedZonePCS;
- (void)_locked_callbackForRecordZone:(id)arg1 zoneID:(id)arg2 error:(id)arg3;
- (void)_cachePCSOnRecordZone:(id)arg1;
- (void)_handleRecordZoneSaved:(id)arg1 error:(id)arg2;
- (void)_continueHandlingFetchedRecordZone:(id)arg1 zoneID:(id)arg2;
- (_Bool)_locked_checkAndUpdateZonePCSIfNeededForZone:(id)arg1 error:(id *)arg2;

@end

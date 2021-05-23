/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class CKRecordZone, NSArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKDAggregateZonePCSOperation : CKDDatabaseOperation

{
    _Bool _isHandlingPCSOplockFailure;
    NSArray *_sourceZoneIDs;
    CKRecordZone *_targetZone;
    NSMutableDictionary *_zonePCSDataByZoneID;
    long long _numZoneSaveAttempts;
    long long _maxZoneSaveAttempts;
}

@property (retain, nonatomic) NSArray *sourceZoneIDs;
@property (retain, nonatomic) CKRecordZone *targetZone;
@property (retain, nonatomic) NSMutableDictionary *zonePCSDataByZoneID;
@property _Bool isHandlingPCSOplockFailure;
@property (nonatomic) long long numZoneSaveAttempts;
@property (nonatomic) long long maxZoneSaveAttempts;

- (void)main;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (id)nameForState:(unsigned long long)arg1;
- (_Bool)makeStateTransition;
- (void)_fetchZonePCS;
- (void)_prepareTargetZonePCS;
- (_Bool)_saveTargetZone;
- (void)_setPermanentOplockFailure;
- (void)_fetchPCSDataForZoneID:(id)arg1;
- (void)_handleZoneSavedWithID:(id)arg1 responseCode:(id)arg2;

@end

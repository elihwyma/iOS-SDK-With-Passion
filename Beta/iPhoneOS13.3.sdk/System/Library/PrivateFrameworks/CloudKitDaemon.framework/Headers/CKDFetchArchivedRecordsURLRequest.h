/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface CKDFetchArchivedRecordsURLRequest : CKDURLRequest

{
    _Bool _shouldFetchAssetContent;
    NSArray *_recordZoneIDs;
    NSDictionary *_configurationsByRecordZoneID;
    NSSet *_desiredAssetKeys;
    CDUnknownBlockType _recordFetchedBlock;
    NSMutableDictionary *_zoneIDsByRequestOperationUUID;
    NSMutableDictionary *_requestResultsByRecordZoneID;
    NSMutableDictionary *_nodeErrorsByZoneID;
}

@property (copy, nonatomic) NSArray *recordZoneIDs;
@property (retain, nonatomic) NSDictionary *configurationsByRecordZoneID;
@property (retain, nonatomic) NSMutableDictionary *zoneIDsByRequestOperationUUID;
@property (retain, nonatomic) NSMutableDictionary *requestResultsByRecordZoneID;
@property (retain, nonatomic) NSMutableDictionary *nodeErrorsByZoneID;
@property (nonatomic) _Bool shouldFetchAssetContent;
@property (retain, nonatomic) NSSet *desiredAssetKeys;
@property (copy, nonatomic) CDUnknownBlockType recordFetchedBlock;
@property (nonatomic, readonly) NSDictionary *resultsByRecordZoneID;
@property (nonatomic, readonly) NSDictionary *zoneErrorsByZoneID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (int)operationType;
- (id)initWithRecordZoneIDs:(id)arg1 configurationsByRecordZoneID:(id)arg2;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)arg1;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestOperationClasses;
- (id)zoneIDsToLock;
- (id)_handleRecords:(id)arg1;

@end

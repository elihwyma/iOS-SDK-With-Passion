/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface CKDFetchRecordZoneChangesURLRequest : CKDURLRequest

{
    _Bool _shouldFetchAssetContent;
    NSArray *_recordZoneIDs;
    NSDictionary *_configurationsByRecordZoneID;
    long long _changeTypes;
    NSSet *_desiredAssetKeys;
    CDUnknownBlockType _recordsChangedBlock;
    CDUnknownBlockType _recordDeletedBlock;
    NSMutableDictionary *_zoneIDsByRequestOperationUUID;
    NSMutableDictionary *_requestResultsByRecordZoneID;
    NSMutableDictionary *_nodeErrorsByZoneID;
    NSMutableArray *_recordResponses;
}

@property (copy, nonatomic) NSArray *recordZoneIDs;
@property (retain, nonatomic) NSDictionary *configurationsByRecordZoneID;
@property (retain, nonatomic) NSMutableDictionary *zoneIDsByRequestOperationUUID;
@property (retain, nonatomic) NSMutableDictionary *requestResultsByRecordZoneID;
@property (retain, nonatomic) NSMutableDictionary *nodeErrorsByZoneID;
@property (retain, nonatomic) NSMutableArray *recordResponses;
@property (nonatomic) long long changeTypes;
@property (nonatomic) _Bool shouldFetchAssetContent;
@property (retain, nonatomic) NSSet *desiredAssetKeys;
@property (copy, nonatomic) CDUnknownBlockType recordsChangedBlock;
@property (copy, nonatomic) CDUnknownBlockType recordDeletedBlock;
@property (nonatomic, readonly) NSDictionary *resultsByRecordZoneID;
@property (nonatomic, readonly) NSDictionary *zoneErrorsByZoneID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (int)operationType;
- (id)initWithRecordZoneIDs:(id)arg1 configurationsByRecordZoneID:(id)arg2;
- (id)generateRequestOperations;
- (_Bool)requestGETPreAuth;
- (id)requestDidParseProtobufObject:(id)arg1;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestOperationClasses;
- (_Bool)allowsAnonymousAccount;
- (id)zoneIDsToLock;
- (void)requestDidComplete;
- (id)_handleRecordChanges:(id)arg1;

@end

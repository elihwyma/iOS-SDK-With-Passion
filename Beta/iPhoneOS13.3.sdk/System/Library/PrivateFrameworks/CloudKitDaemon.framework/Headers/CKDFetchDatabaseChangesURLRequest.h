/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDURLRequest.h>

@class CKRecordZoneID, NSArray, NSData, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CKDFetchDatabaseChangesURLRequest : CKDURLRequest

{
    NSMutableArray *_changedZoneIDs;
    NSMutableArray *_deletedZoneIDs;
    NSMutableArray *_purgedZoneIDs;
    unsigned long long _resultsLimit;
    NSData *_serverChangeTokenData;
    long long _status;
    CDUnknownBlockType _zoneChangedBlock;
    CDUnknownBlockType _zoneDeletedBlock;
    CDUnknownBlockType _zonePurgedBlock;
    CKRecordZoneID *_recordZoneID;
    NSData *_previousServerChangeTokenData;
}

@property (retain, nonatomic) CKRecordZoneID *recordZoneID;
@property (retain, nonatomic) NSData *previousServerChangeTokenData;
@property (retain, nonatomic) NSData *serverChangeTokenData;
@property (nonatomic) long long status;
@property (nonatomic) unsigned long long resultsLimit;
@property (nonatomic, readonly) NSArray *changedZoneIDs;
@property (nonatomic, readonly) NSArray *deletedZoneIDs;
@property (nonatomic, readonly) NSArray *purgedZoneIDs;
@property (copy, nonatomic) CDUnknownBlockType zoneChangedBlock;
@property (copy, nonatomic) CDUnknownBlockType zoneDeletedBlock;
@property (copy, nonatomic) CDUnknownBlockType zonePurgedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (int)operationType;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (_Bool)allowsAnonymousAccount;
- (id)initWithPreviousServerChangeTokenData:(id)arg1;

@end

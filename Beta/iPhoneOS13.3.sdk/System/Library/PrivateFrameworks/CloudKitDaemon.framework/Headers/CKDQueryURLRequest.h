/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDURLRequest.h>

@class CKQuery, CKRecordZoneID, NSArray, NSData, NSMutableArray, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface CKDQueryURLRequest : CKDURLRequest

{
    NSMutableArray *_queryResponses;
    _Bool _shouldFetchAssetContent;
    CKQuery *_query;
    NSData *_cursor;
    unsigned long long _limit;
    CKRecordZoneID *_zoneID;
    NSArray *_requestedFields;
    NSSet *_desiredAssetKeys;
    CDUnknownBlockType _recordsParsedBlock;
    NSData *_resultsCursor;
    NSMutableArray *_recordResponses;
}

@property (retain, nonatomic) NSMutableArray *queryResponses;
@property (retain, nonatomic) NSData *resultsCursor;
@property (retain, nonatomic) NSMutableArray *recordResponses;
@property (retain, nonatomic) CKQuery *query;
@property (retain, nonatomic) NSData *cursor;
@property (nonatomic) unsigned long long limit;
@property (retain, nonatomic) CKRecordZoneID *zoneID;
@property (retain, nonatomic) NSArray *requestedFields;
@property (nonatomic) _Bool shouldFetchAssetContent;
@property (retain, nonatomic) NSSet *desiredAssetKeys;
@property (copy, nonatomic) CDUnknownBlockType recordsParsedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (int)operationType;
- (id)initWithQuery:(id)arg1 cursor:(id)arg2 limit:(unsigned long long)arg3 requestedFields:(id)arg4 zoneID:(id)arg5;
- (id)generateRequestOperations;
- (_Bool)requestGETPreAuth;
- (id)requestDidParseProtobufObject:(id)arg1;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestOperationClasses;
- (_Bool)allowsAnonymousAccount;
- (id)zoneIDsToLock;
- (void)requestDidComplete;

@end

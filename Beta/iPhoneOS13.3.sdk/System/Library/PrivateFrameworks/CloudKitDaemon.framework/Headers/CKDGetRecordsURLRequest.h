/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface CKDGetRecordsURLRequest : CKDURLRequest

{
    _Bool _shouldFetchAssetContent;
    NSSet *_assetFieldNamesToPublishURLs;
    unsigned long long _requestedTTL;
    unsigned long long _URLOptions;
    NSSet *_desiredAssetKeys;
    NSArray *_desiredIndexedListKeys;
    CDUnknownBlockType _recordFetchedBlock;
    NSArray *_recordIDs;
    NSDictionary *_recordIDsToETags;
    NSDictionary *_recordIDsToVersionETags;
    unsigned long long _recordCount;
    NSMutableDictionary *_recordIDByRequestID;
    NSSet *_desiredKeys;
}

@property (retain, nonatomic) NSArray *recordIDs;
@property (retain, nonatomic) NSDictionary *recordIDsToETags;
@property (retain, nonatomic) NSDictionary *recordIDsToVersionETags;
@property (nonatomic) unsigned long long recordCount;
@property (retain, nonatomic) NSMutableDictionary *recordIDByRequestID;
@property (retain, nonatomic) NSSet *desiredKeys;
@property (retain, nonatomic) NSSet *assetFieldNamesToPublishURLs;
@property (nonatomic) unsigned long long requestedTTL;
@property (nonatomic) unsigned long long URLOptions;
@property (retain, nonatomic) NSSet *desiredAssetKeys;
@property (retain, nonatomic) NSArray *desiredIndexedListKeys;
@property (nonatomic) _Bool shouldFetchAssetContent;
@property (copy, nonatomic) CDUnknownBlockType recordFetchedBlock;

- (int)operationType;
- (id)generateRequestOperations;
- (_Bool)requestGETPreAuth;
- (id)requestDidParseProtobufObject:(id)arg1;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestOperationClasses;
- (_Bool)allowsAnonymousAccount;
- (id)zoneIDsToLock;
- (id)requestedListFieldsForDesiredIndexedListKeys;
- (id)initWithRecordIDs:(id)arg1 recordIDsToEtags:(id)arg2 recordIDsToVersionETags:(id)arg3 desiredKeys:(id)arg4;

@end

/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CKDFetchRecordVersionsRequest : CKDURLRequest

{
    _Bool _shouldFetchAssetContent;
    _Bool _isDeleted;
    CDUnknownBlockType _recordVersionsFetchedBlock;
    NSArray *_recordIDs;
    NSArray *_desiredKeys;
    NSString *_minimumVersionETag;
    NSMutableDictionary *_recordIDByRequestID;
}

@property (retain, nonatomic) NSArray *recordIDs;
@property (retain, nonatomic) NSArray *desiredKeys;
@property (retain, nonatomic) NSString *minimumVersionETag;
@property (retain, nonatomic) NSMutableDictionary *recordIDByRequestID;
@property (nonatomic) _Bool isDeleted;
@property (copy, nonatomic) CDUnknownBlockType recordVersionsFetchedBlock;
@property (nonatomic) _Bool shouldFetchAssetContent;

- (int)operationType;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)arg1;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestOperationClasses;
- (id)zoneIDsToLock;
- (id)initWithRecordIDs:(id)arg1 desiredKeys:(id)arg2 minimumVersionETag:(id)arg3;

@end

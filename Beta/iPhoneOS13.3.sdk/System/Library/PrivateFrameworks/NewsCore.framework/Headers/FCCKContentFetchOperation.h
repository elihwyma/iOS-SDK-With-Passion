/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCNetworkOperation.h>

@class FCCKContentDatabase, NSArray, NSDictionary;

@interface FCCKContentFetchOperation : FCNetworkOperation

{
    _Bool _getPermanentAssetURLs;
    FCCKContentDatabase *_database;
    NSArray *_recordIDs;
    NSDictionary *_recordIDsToETags;
    NSArray *_desiredKeys;
    CDUnknownBlockType _perRecordCompletionBlock;
    CDUnknownBlockType _fetchRecordsCompletionBlock;
    NSArray *_requestUUIDs;
    long long _networkEventType;
    NSDictionary *_resultRecordsByRecordID;
}

@property (copy, nonatomic) NSArray *requestUUIDs;
@property (retain, nonatomic) NSDictionary *resultRecordsByRecordID;
@property (retain, nonatomic) FCCKContentDatabase *database;
@property (copy, nonatomic) NSArray *recordIDs;
@property (retain, nonatomic) NSDictionary *recordIDsToETags;
@property (copy, nonatomic) NSArray *desiredKeys;
@property (nonatomic) _Bool getPermanentAssetURLs;
@property (copy, nonatomic) CDUnknownBlockType perRecordCompletionBlock;
@property (copy, nonatomic) CDUnknownBlockType fetchRecordsCompletionBlock;
@property (nonatomic) long long networkEventType;

- (id)init;
- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;
- (id)throttleGroup;
- (id)_operationForRecordID:(id)arg1;

@end

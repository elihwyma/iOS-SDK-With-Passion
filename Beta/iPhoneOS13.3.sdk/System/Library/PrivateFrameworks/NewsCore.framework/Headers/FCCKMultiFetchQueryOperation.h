/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCOperation.h>

@class FCCKContentDatabase, FCEdgeCacheHint, NSArray, NSDictionary, NSMutableArray, NSMutableSet;

@interface FCCKMultiFetchQueryOperation : FCOperation

{
    FCCKContentDatabase *_database;
    NSArray *_recordIDs;
    NSArray *_recordSpecs;
    NSDictionary *_knownRecordIDsToEtags;
    FCEdgeCacheHint *_edgeCacheHint;
    NSArray *_networkEvents;
    CDUnknownBlockType _queryCompletionHandler;
    NSDictionary *_recordSpecsByType;
    NSMutableSet *_missingRecordIDs;
    NSMutableArray *_fetchedRecords;
}

@property (retain, nonatomic) NSDictionary *recordSpecsByType;
@property (retain, nonatomic) NSMutableSet *missingRecordIDs;
@property (retain, nonatomic) NSMutableArray *fetchedRecords;
@property (copy, nonatomic) NSArray *networkEvents;
@property (retain, nonatomic) FCCKContentDatabase *database;
@property (retain, nonatomic) NSArray *recordIDs;
@property (retain, nonatomic) NSArray *recordSpecs;
@property (retain, nonatomic) NSDictionary *knownRecordIDsToEtags;
@property (copy, nonatomic) FCEdgeCacheHint *edgeCacheHint;
@property (copy, nonatomic) CDUnknownBlockType queryCompletionHandler;

- (id)_desiredKeys;
- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;
- (void)prepareOperation;
- (id)_constructQuery;

@end

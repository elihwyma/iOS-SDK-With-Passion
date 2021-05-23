/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCOperation.h>

@class FCEdgeCacheHint, FCHeldRecords, NSArray, NSDictionary, NSMutableArray, NSMutableSet;

@protocol FCContentContext;

@interface FCRecordChainFetchOperation : FCOperation

{
    _Bool _shouldReturnErrorWhenSomeRecordsMissing;
    _Bool _shouldBypassRecordSourcePersistence;
    id <FCContentContext> _context;
    NSArray *_topLevelRecordIDs;
    NSDictionary *_linkKeysByRecordType;
    NSDictionary *_cachePoliciesByRecordType;
    CDUnknownBlockType _dynamicCachePolicyBlock;
    FCEdgeCacheHint *_edgeCacheHint;
    NSArray *_additionalRecordSources;
    CDUnknownBlockType _cachedRecordsLookupBlock;
    CDUnknownBlockType _recordChainCompletionHandler;
    NSArray *_recordSources;
    NSDictionary *_recordSourcesByRecordType;
    NSDictionary *_pbRecordTypesByRecordType;
    FCHeldRecords *_cachedRecords;
    NSMutableSet *_actualTopLevelRecordIDs;
    NSMutableSet *_skippedTopLevelRecordIDs;
    NSMutableSet *_missingCachedOnlyTopLevelRecordIDs;
    NSDictionary *_resultHeldRecordsByType;
    NSMutableArray *_mutableNetworkEvents;
}

@property (retain, nonatomic) NSArray *recordSources;
@property (retain, nonatomic) NSDictionary *recordSourcesByRecordType;
@property (retain, nonatomic) NSDictionary *pbRecordTypesByRecordType;
@property (retain, nonatomic) FCHeldRecords *cachedRecords;
@property (retain, nonatomic) NSMutableSet *actualTopLevelRecordIDs;
@property (retain, nonatomic) NSMutableSet *skippedTopLevelRecordIDs;
@property (retain, nonatomic) NSMutableSet *missingCachedOnlyTopLevelRecordIDs;
@property (retain, nonatomic) NSDictionary *resultHeldRecordsByType;
@property (retain, nonatomic) NSMutableArray *mutableNetworkEvents;
@property (retain, nonatomic) id <FCContentContext> context;
@property (copy, nonatomic) NSArray *topLevelRecordIDs;
@property (copy, nonatomic) NSDictionary *linkKeysByRecordType;
@property (copy, nonatomic) NSDictionary *cachePoliciesByRecordType;
@property (copy, nonatomic) CDUnknownBlockType dynamicCachePolicyBlock;
@property (nonatomic) _Bool shouldReturnErrorWhenSomeRecordsMissing;
@property (copy, nonatomic) FCEdgeCacheHint *edgeCacheHint;
@property (retain, nonatomic) NSArray *additionalRecordSources;
@property (copy, nonatomic, readonly) NSArray *networkEvents;
@property (nonatomic) _Bool shouldBypassRecordSourcePersistence;
@property (copy, nonatomic) CDUnknownBlockType cachedRecordsLookupBlock;
@property (copy, nonatomic) CDUnknownBlockType recordChainCompletionHandler;

- (id)init;
- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;
- (void)prepareOperation;
- (void)_collectCachedRecordsFromRecordIDs:(id)arg1;
- (void)_collectActualTopLevelRecordIDsFromRecordIDs:(id)arg1 visitedRecordIDs:(id)arg2;
- (void)_issueCloudRequestIfNeeded;
- (int)_pbRecordTypeForRecordType:(id)arg1;
- (id)_recordSourceForRecordType:(id)arg1;
- (void)_walkRecordChainStartingWithRecordIDs:(id)arg1 visitedRecordIDs:(id)arg2 recordsLookupBlock:(CDUnknownBlockType)arg3 visitorBlock:(CDUnknownBlockType)arg4;
- (id)_recordTypeForRecordID:(id)arg1;
- (void)_finalizeResultFromCachedRecords;
- (id)_recordIDsMissingFromCachedRecords;
- (id)_errorForMissingRecordNames:(id)arg1;
- (void)_filterOrphansFromCachedRecords;
- (id)_partialFetchErrorForMissingRecordName:(id)arg1;
- (id)_partialUncachedErrorForMissingRecordName:(id)arg1;
- (int)_pbRecordTypeForRecordID:(id)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableSet;

@interface TCKDatabase : NSObject

{
    NSMutableArray *_tQueriedRecordTypes;
    NSMutableArray *_tQueriedRecordZonesNames;
    NSMutableArray *_tFetchedRecords;
    NSMutableArray *_tFetchedChangedRecordZoneNames;
    NSMutableArray *_tQueriedRecords;
    NSMutableArray *_tSavedRecords;
    NSMutableSet *_tSavedRecordIDs;
    NSMutableArray *_tSavedZones;
    NSMutableArray *_tDeletedZoneIDs;
    NSMutableArray *_tDeletedRecordIDs;
    NSMutableArray *_tSavedSubscriptions;
    CDUnknownBlockType _tQueryHandler;
    CDUnknownBlockType _tFetchRecordsHandler;
    CDUnknownBlockType _tModifyRecordsOperationHandler;
    CDUnknownBlockType _tModifyRecordsHandler;
    CDUnknownBlockType _tFetchZonesHandler;
    CDUnknownBlockType _tModifyZonesHandler;
    CDUnknownBlockType _tFetchZoneChangesHandler;
    CDUnknownBlockType _tFetchRecordZoneChangesOperationHandler;
    CDUnknownBlockType _tFetchDatabaseChangesHandler;
}

@property (retain, nonatomic) NSMutableArray *tQueriedRecordTypes;
@property (retain, nonatomic) NSMutableArray *tQueriedRecordZonesNames;
@property (retain, nonatomic) NSMutableArray *tFetchedRecords;
@property (retain, nonatomic) NSMutableArray *tFetchedChangedRecordZoneNames;
@property (retain, nonatomic) NSMutableArray *tQueriedRecords;
@property (retain, nonatomic) NSMutableArray *tSavedRecords;
@property (retain, nonatomic) NSMutableSet *tSavedRecordIDs;
@property (retain, nonatomic) NSMutableArray *tSavedZones;
@property (retain, nonatomic) NSMutableArray *tDeletedZoneIDs;
@property (retain, nonatomic) NSMutableArray *tDeletedRecordIDs;
@property (retain, nonatomic) NSMutableArray *tSavedSubscriptions;
@property (copy, nonatomic) CDUnknownBlockType tQueryHandler;
@property (copy, nonatomic) CDUnknownBlockType tFetchRecordsHandler;
@property (copy, nonatomic) CDUnknownBlockType tModifyRecordsOperationHandler;
@property (copy, nonatomic) CDUnknownBlockType tModifyRecordsHandler;
@property (copy, nonatomic) CDUnknownBlockType tFetchZonesHandler;
@property (copy, nonatomic) CDUnknownBlockType tModifyZonesHandler;
@property (copy, nonatomic) CDUnknownBlockType tFetchZoneChangesHandler;
@property (copy, nonatomic) CDUnknownBlockType tFetchRecordZoneChangesOperationHandler;
@property (copy, nonatomic) CDUnknownBlockType tFetchDatabaseChangesHandler;

+ (id)tRecordsForQuery:(id)arg1 zoneID:(id)arg2;

- (void)addOperation:(id)arg1;
- (void)fetchRecordWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)performQuery:(id)arg1 inZoneWithID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

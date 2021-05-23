/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSError, NSMutableDictionary;

@interface CKFetchRecordZonesOperation : CKDatabaseOperation

{
    _Bool _isFetchAllRecordZonesOperation;
    _Bool _ignorePCSFailures;
    CDUnknownBlockType _fetchRecordZonesCompletionBlock;
    NSArray *_recordZoneIDs;
    NSArray *_recordZones;
    NSMutableDictionary *_recordZonesByZoneID;
    NSMutableDictionary *_recordZoneErrors;
    NSError *_fetchAllRecordZonesError;
}

@property (retain, nonatomic) NSArray *recordZones;
@property (retain, nonatomic) NSMutableDictionary *recordZonesByZoneID;
@property (retain, nonatomic) NSMutableDictionary *recordZoneErrors;
@property (retain, nonatomic) NSError *fetchAllRecordZonesError;
@property (nonatomic) _Bool isFetchAllRecordZonesOperation;
@property (nonatomic) _Bool ignorePCSFailures;
@property (copy, nonatomic) NSArray *recordZoneIDs;
@property (copy, nonatomic) CDUnknownBlockType fetchRecordZonesCompletionBlock;

+ (id)fetchAllRecordZonesOperation;

- (id)init;
- (void)fillOutOperationInfo:(id)arg1;
- (void)fillFromOperationInfo:(id)arg1;
- (_Bool)hasCKOperationCallbacksSet;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (void)performCKOperation;
- (void)_handleProgressCallback:(id)arg1;
- (id)initWithRecordZoneIDs:(id)arg1;

@end

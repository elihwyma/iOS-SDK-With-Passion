/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface CKModifyRecordZonesOperation : CKDatabaseOperation

{
    _Bool _markZonesAsUserPurged;
    CDUnknownBlockType _modifyRecordZonesCompletionBlock;
    NSArray *_recordZonesToSave;
    NSArray *_recordZoneIDsToDelete;
    NSMutableArray *_savedRecordZones;
    NSMutableArray *_deletedRecordZoneIDs;
    NSMutableDictionary *_recordZonesByZoneIDs;
    NSMutableDictionary *_recordZoneErrors;
}

@property (retain, nonatomic) NSMutableArray *savedRecordZones;
@property (retain, nonatomic) NSMutableArray *deletedRecordZoneIDs;
@property (retain, nonatomic) NSMutableDictionary *recordZonesByZoneIDs;
@property (retain, nonatomic) NSMutableDictionary *recordZoneErrors;
@property (nonatomic) _Bool markZonesAsUserPurged;
@property (copy, nonatomic) NSArray *recordZonesToSave;
@property (copy, nonatomic) NSArray *recordZoneIDsToDelete;
@property (copy, nonatomic) CDUnknownBlockType modifyRecordZonesCompletionBlock;

- (id)init;
- (id)initWithRecordZonesToSave:(id)arg1 recordZoneIDsToDelete:(id)arg2;
- (void)fillOutOperationInfo:(id)arg1;
- (void)fillFromOperationInfo:(id)arg1;
- (_Bool)hasCKOperationCallbacksSet;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (void)performCKOperation;
- (void)_handleProgressCallback:(id)arg1;

@end

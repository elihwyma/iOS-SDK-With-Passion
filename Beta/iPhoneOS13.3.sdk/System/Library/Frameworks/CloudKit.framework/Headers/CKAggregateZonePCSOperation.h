/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKDatabaseOperation.h>

@class CKRecordZone, NSArray;

@interface CKAggregateZonePCSOperation : CKDatabaseOperation

{
    CDUnknownBlockType _aggregateZonePCSCompletionBlock;
    NSArray *_sourceZoneIDs;
    CKRecordZone *_targetZone;
}

@property (copy, nonatomic) NSArray *sourceZoneIDs;
@property (copy, nonatomic) CKRecordZone *targetZone;
@property (copy, nonatomic) CDUnknownBlockType aggregateZonePCSCompletionBlock;

- (id)init;
- (void)fillOutOperationInfo:(id)arg1;
- (void)fillFromOperationInfo:(id)arg1;
- (_Bool)hasCKOperationCallbacksSet;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (void)performCKOperation;
- (id)initWithSourceZoneIDs:(id)arg1 targetZone:(id)arg2;

@end

/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <ClassroomKit/CRKCloudEncapsulatedOperation.h>

@class CRKCloudLocalDelta;

@interface CRKCloudPushLocalDeltaOperation : CRKCloudEncapsulatedOperation

{
    CRKCloudLocalDelta *_delta;
}

@property (nonatomic, readonly) CRKCloudLocalDelta *delta;

- (void)main;
- (id)initWithOperationQueue:(id)arg1 database:(id)arg2;
- (void)pushWithUpsertedRecords:(id)arg1 deletedRecordIds:(id)arg2;
- (void)retryableModifyRecordsOperationDidFinish:(id)arg1;
- (id)initWithOperationQueue:(id)arg1 database:(id)arg2 delta:(id)arg3;

@end

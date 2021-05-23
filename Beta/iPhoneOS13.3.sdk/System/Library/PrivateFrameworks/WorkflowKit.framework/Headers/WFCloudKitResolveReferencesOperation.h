/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFCloudKitAsyncOperation.h>

@class CKFetchRecordsOperation, CKOperationGroup, NSArray, WFCloudKitItemRequest, WFCloudKitItemTask;

@interface WFCloudKitResolveReferencesOperation : WFCloudKitAsyncOperation

{
    WFCloudKitItemRequest *_request;
    NSArray *_records;
    CKOperationGroup *_operationGroup;
    CKFetchRecordsOperation *_currentOperation;
    WFCloudKitItemTask *_task;
}

@property (weak, nonatomic, readonly) WFCloudKitItemRequest *request;
@property (nonatomic, readonly) NSArray *records;
@property (nonatomic, readonly) CKOperationGroup *operationGroup;
@property (retain, nonatomic) CKFetchRecordsOperation *currentOperation;
@property (retain, nonatomic) WFCloudKitItemTask *task;

- (void)cancel;
- (void)start;
- (id)initWithRequest:(id)arg1 records:(id)arg2 operationGroup:(id)arg3 task:(id)arg4;

@end

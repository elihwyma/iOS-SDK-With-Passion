/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFCloudKitTask.h>

@class CKOperation, NSError, NSOperationQueue;

@interface WFCloudKitItemTask : WFCloudKitTask

{
    NSOperationQueue *_operationQueue;
    CKOperation *_cloudOperation;
    NSError *_error;
}

@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) CKOperation *cloudOperation;
@property (retain, nonatomic) NSError *error;

- (id)init;
- (void)cancel;

@end

/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFCloudKitTask.h>

@class NSOperationQueue, NSURLSessionTask;

@interface WFCloudKitWebServiceTask : WFCloudKitTask

{
    NSURLSessionTask *_dataTask;
    NSOperationQueue *_operationQueue;
}

@property (retain, nonatomic) NSURLSessionTask *dataTask;
@property (retain, nonatomic) NSOperationQueue *operationQueue;

- (id)init;
- (void)cancel;

@end

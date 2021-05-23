/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <CloudPhotoLibrary/CPLResourceTransferTask.h>

@class CPLResource, NSObject;

@protocol CPLEngineTransportTask, OS_dispatch_queue;

@interface CPLInMemoryResourceDownloadTask : CPLResourceTransferTask

{
    NSObject<OS_dispatch_queue> *_queue;
    id <CPLEngineTransportTask> _transportTask;
    CPLResource *_cloudResource;
    CDUnknownBlockType _launchHandler;
    CDUnknownBlockType _completionHandler;
}

@property (copy, nonatomic, readonly) CDUnknownBlockType launchHandler;
@property (copy, nonatomic, readonly) CDUnknownBlockType completionHandler;
@property (retain, nonatomic) CPLResource *cloudResource;

+ (id)failedTaskForResource:(id)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

- (void)launch;
- (void)cancelTask;
- (id)initWithLaunchHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)finishWithData:(id)arg1 error:(id)arg2;
- (void)launchTransportTask:(id)arg1;

@end

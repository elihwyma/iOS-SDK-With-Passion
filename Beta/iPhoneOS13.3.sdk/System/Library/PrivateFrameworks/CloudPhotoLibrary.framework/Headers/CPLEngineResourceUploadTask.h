/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <CloudPhotoLibrary/CPLResourceTransferTask.h>

@class CPLResource;

@protocol CPLEngineTransportTask;

@interface CPLEngineResourceUploadTask : CPLResourceTransferTask

{
    _Bool _backgroundTask;
    CPLResource *_cloudResource;
    id <CPLEngineTransportTask> _transportTask;
    CDUnknownBlockType _launchHandler;
    CDUnknownBlockType _cancelHandler;
    CDUnknownBlockType _didStartHandler;
    CDUnknownBlockType _progressHandler;
    CDUnknownBlockType _completionHandler;
}

@property (retain, nonatomic) CPLResource *cloudResource;
@property (nonatomic, getter=isBackgroundTask) _Bool backgroundTask;
@property (retain, nonatomic) id <CPLEngineTransportTask> transportTask;
@property (copy, nonatomic, readonly) CDUnknownBlockType launchHandler;
@property (copy, nonatomic, readonly) CDUnknownBlockType cancelHandler;
@property (copy, nonatomic, readonly) CDUnknownBlockType didStartHandler;
@property (copy, nonatomic, readonly) CDUnknownBlockType progressHandler;
@property (copy, nonatomic, readonly) CDUnknownBlockType completionHandler;

- (void)launch;
- (void)cancelTask;
- (id)initWithLaunchHandler:(CDUnknownBlockType)arg1 cancelHandler:(CDUnknownBlockType)arg2 didStartHandler:(CDUnknownBlockType)arg3 progressHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;

@end

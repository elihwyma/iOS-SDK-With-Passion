/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <CloudPhotoLibrary/CPLResourceTransferTask.h>

@class CPLResource, NSData, NSMutableArray, NSString;

@protocol CPLEngineTransportResourcesDownloadTask;

@interface CPLEngineResourceDownloadTask : CPLResourceTransferTask

{
    NSMutableArray *_stateProgressDates;
    NSString *_activeQueuesStatusAtEnqueingTime;
    unsigned long long _preemptingCount;
    _Bool _cancelledByEngine;
    CPLResource *_cloudResource;
    NSData *_transportScope;
    unsigned long long _taskIdentifierForQueue;
    NSString *_clientBundleID;
    id <CPLEngineTransportResourcesDownloadTask> _transportTask;
    CDUnknownBlockType _launchHandler;
    CDUnknownBlockType _cancelHandler;
    CDUnknownBlockType _didStartHandler;
    CDUnknownBlockType _progressHandler;
    CDUnknownBlockType _completionHandler;
    NSString *_transportIdentifier;
}

@property (retain, nonatomic) CPLResource *cloudResource;
@property (retain, nonatomic) NSData *transportScope;
@property (nonatomic) unsigned long long taskIdentifierForQueue;
@property (retain, nonatomic) NSString *clientBundleID;
@property (nonatomic, getter=isCancelledByEngine) _Bool cancelledByEngine;
@property (weak, nonatomic) id <CPLEngineTransportResourcesDownloadTask> transportTask;
@property (copy, nonatomic, readonly) CDUnknownBlockType launchHandler;
@property (copy, nonatomic, readonly) CDUnknownBlockType cancelHandler;
@property (copy, nonatomic, readonly) CDUnknownBlockType didStartHandler;
@property (copy, nonatomic, readonly) CDUnknownBlockType progressHandler;
@property (copy, nonatomic, readonly) CDUnknownBlockType completionHandler;
@property (copy, nonatomic) NSString *transportIdentifier;
@property (nonatomic, readonly) _Bool willGenerateReport;

+ (void)initialize;
+ (unsigned long long)maximumResourceDownloadSizeForResourceType:(unsigned long long)arg1;

- (void)launch;
- (void)cancelTask;
- (id)initWithLaunchHandler:(CDUnknownBlockType)arg1 cancelHandler:(CDUnknownBlockType)arg2 didStartHandler:(CDUnknownBlockType)arg3 progressHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)noteStateDidProgress:(unsigned long long)arg1;
- (void)noteActiveQueuesStatusAtEnqueingTime:(id)arg1;
- (void)noteTaskHasBeenPreempted;

@end

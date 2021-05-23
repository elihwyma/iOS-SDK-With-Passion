/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSProgress, NSString, PHAssetResource, PHAssetResourceRequestOptions, PHResourceAvailabilityJob;

@protocol PHAssetResourceRequestDelegate;

@interface PHAssetResourceRequest : NSObject

{
    PHResourceAvailabilityJob *_availabilityJob;
    struct os_unfair_lock_s _lock;
    _Bool _cancelled;
    NSProgress *_availabilityProgress;
    NSProgress *_fileStreamProgress;
    NSProgress *_totalProgress;
    _Bool _loadURLOnly;
    int _requestID;
    PHAssetResource *_assetResource;
    PHAssetResourceRequestOptions *_options;
    unsigned long long _managerID;
    id <PHAssetResourceRequestDelegate> _delegate;
    CDUnknownBlockType _completionHandler;
    NSDictionary *_info;
    NSString *_taskIdentifier;
    CDUnknownBlockType _dataHandler;
}

@property (copy, nonatomic) CDUnknownBlockType dataHandler;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (nonatomic) _Bool loadURLOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) PHAssetResource *assetResource;
@property (nonatomic, readonly) PHAssetResourceRequestOptions *options;
@property (nonatomic, readonly) int requestID;
@property (nonatomic, readonly) unsigned long long managerID;
@property (weak, nonatomic, readonly) id <PHAssetResourceRequestDelegate> delegate;
@property (nonatomic, readonly) NSDictionary *info;
@property (nonatomic, readonly, getter=isCancelled) _Bool cancelled;
@property (copy, nonatomic) NSString *taskIdentifier;

+ (id)_globalFileIOQueue;

- (void)cancel;
- (void)startRequest;
- (void)resourceAvailabilityChangeRequest:(id)arg1 didReportProgress:(double)arg2 completed:(_Bool)arg3 error:(id)arg4;
- (void)resourceAvailabilityChangeRequest:(id)arg1 didFinishWithSuccess:(_Bool)arg2 url:(id)arg3 data:(id)arg4 info:(id)arg5 error:(id)arg6;
- (void)_setupProgressIfNeeded;
- (id)initWithAssetResource:(id)arg1 options:(id)arg2 requestID:(int)arg3 managerID:(unsigned long long)arg4 delegate:(id)arg5 dataReceivedHandler:(CDUnknownBlockType)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (id)_initialValidationError;
- (void)_reportProgress;
- (void)_finishAsyncWithLocallyAvailableResourceAtURL:(id)arg1;
- (void)_streamDataAtURL:(id)arg1 dataHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_updateAssetResourceWithLocallyAvailable:(_Bool)arg1 fileURL:(id)arg2;

@end

/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHMediaRequestContext.h>

@class NSProgress, PHCompositeMediaResult, PHImageRequest, PHImageRequestOptions, PHMediaResourceRequest;

@interface PHImageRequestContext : PHMediaRequestContext

{
    NSProgress *_progress;
    PHImageRequest *_initialRequest;
    PHImageRequest *_intermediateRequest;
    PHImageRequest *_finalRequest;
    PHMediaResourceRequest *_resourceRequest;
    struct atomic_flag _firstNonFastResultWasObserved;
    struct atomic_flag _finalResultSent;
    PHCompositeMediaResult *_delayedFinalInvalidDataResult;
    PHImageRequestOptions *_imageOptions;
}

@property (nonatomic, readonly) PHImageRequestOptions *imageOptions;

+ (long long)type;

- (CDUnknownBlockType)progressHandler;
- (_Bool)isNetworkAccessAllowed;
- (_Bool)isSynchronous;
- (id)initialRequests;
- (id)produceChildRequestsForRequest:(id)arg1 reportingIsLocallyAvailable:(_Bool)arg2 isDegraded:(_Bool)arg3 result:(id)arg4;
- (_Bool)shouldReportProgress;
- (id)progresses;
- (void)processMediaResult:(id)arg1 forRequest:(id)arg2;
- (_Bool)representsShareableHighQualityResource;
- (id)initWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 displaySpec:(id)arg4 options:(id)arg5 resultHandler:(CDUnknownBlockType)arg6;
- (id)_lazyProgress;
- (id)_initialBehavior;
- (id)_produceFinalImageRequestForRequest:(id)arg1;
- (id)_produceIntermediateImageRequestForRequest:(id)arg1;

@end

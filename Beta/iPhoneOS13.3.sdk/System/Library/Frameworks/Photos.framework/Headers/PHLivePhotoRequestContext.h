/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHMediaRequestContext.h>

@class NSProgress, PHImageRequest, PHLivePhotoRequestOptions, PHLivePhotoResult, PHVideoRequest;

@interface PHLivePhotoRequestContext : PHMediaRequestContext

{
    NSProgress *_imageProgress;
    NSProgress *_videoProgress;
    PHImageRequest *_initialImageRequest;
    PHImageRequest *_finalImageRequest;
    PHVideoRequest *_videoRequest;
    PHLivePhotoResult *_livePhotoResult;
    _Atomic _Bool _finalImageRequestStarted;
    _Atomic _Bool _finalImageReceived;
    _Atomic _Bool _finalVideoReceived;
    PHLivePhotoRequestOptions *_livePhotoOptions;
}

@property (nonatomic, readonly) PHLivePhotoRequestOptions *livePhotoOptions;

+ (long long)type;

- (CDUnknownBlockType)progressHandler;
- (_Bool)isNetworkAccessAllowed;
- (id)initialRequests;
- (id)produceChildRequestsForRequest:(id)arg1 reportingIsLocallyAvailable:(_Bool)arg2 isDegraded:(_Bool)arg3 result:(id)arg4;
- (_Bool)shouldReportProgress;
- (id)progresses;
- (void)processMediaResult:(id)arg1 forRequest:(id)arg2;
- (_Bool)representsShareableHighQualityResource;
- (id)initWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 displaySpec:(id)arg4 options:(id)arg5 resultHandler:(CDUnknownBlockType)arg6;
- (_Bool)_shouldRequestVideo;
- (id)_lazyImageProgress;
- (id)_lazyVideoProgress;
- (void)_setFinalImageRequestFromRequest:(id)arg1;

@end

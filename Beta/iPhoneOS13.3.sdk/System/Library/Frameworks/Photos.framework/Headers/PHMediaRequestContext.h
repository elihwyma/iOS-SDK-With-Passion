/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSProgress, NSString, PHAsset, PHImageDisplaySpec, PHImageResourceChooser;

@protocol PHMediaRequestContextDelegate;

@interface PHMediaRequestContext : NSObject

{
    _Atomic unsigned long long _nextID;
    _Atomic int _repairAttemptCount;
    struct os_unfair_lock_s _lock;
    NSMutableArray *_requests;
    NSMutableArray *_jobs;
    NSMutableDictionary *_requestedResourcesByTaskIdentifier;
    NSMutableSet *_inflightRequestIdentifiers;
    _Bool _isCancelled;
    NSMutableDictionary *_progressByTaskIdentifier;
    NSProgress *_totalProgress;
    int _requestID;
    id <PHMediaRequestContextDelegate> _delegate;
    unsigned long long _signpostID;
    unsigned long long _signpostLayoutID;
    unsigned long long _managerID;
    PHAsset *_asset;
    PHImageDisplaySpec *_displaySpec;
    PHImageResourceChooser *_imageResourceChooser;
    CDUnknownBlockType _resultHandler;
}

@property (retain, nonatomic) PHImageResourceChooser *imageResourceChooser;
@property (retain, nonatomic) PHImageDisplaySpec *displaySpec;
@property (copy, nonatomic, readonly) CDUnknownBlockType resultHandler;
@property (weak, nonatomic) id <PHMediaRequestContextDelegate> delegate;
@property (nonatomic) unsigned long long signpostID;
@property (nonatomic) unsigned long long signpostLayoutID;
@property (nonatomic, readonly) int requestID;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) unsigned long long managerID;
@property (nonatomic, readonly) PHAsset *asset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (long long)type;
+ (id)imageRequestContextWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 imageRequestOptions:(id)arg4 displaySpec:(id)arg5 resultHandler:(CDUnknownBlockType)arg6;
+ (id)videoRequestContextWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 videoRequestOptions:(id)arg4 intent:(long long)arg5 resultHandler:(CDUnknownBlockType)arg6;
+ (id)livePhotoRequestContextWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 livePhotoRequestOptions:(id)arg4 displaySpec:(id)arg5 resultHandler:(CDUnknownBlockType)arg6;
+ (id)contentEditingInputRequestContextWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 options:(id)arg4 useRAWAsUnadjustedBase:(_Bool)arg5 resultHandler:(CDUnknownBlockType)arg6;
+ (id)chooserQueue;

- (void)cancel;
- (void)start;
- (_Bool)isCancelled;
- (CDUnknownBlockType)progressHandler;
- (_Bool)isNetworkAccessAllowed;
- (_Bool)isSynchronous;
- (void)resourceRepairRequest:(id)arg1 didFinishWithSuccess:(_Bool)arg2;
- (void)adjustmentDataRequest:(id)arg1 didReportProgress:(double)arg2 completed:(_Bool)arg3 error:(id)arg4;
- (void)mediaRequest:(id)arg1 didFindLocallyAvailableResult:(_Bool)arg2 isDegraded:(_Bool)arg3;
- (_Bool)mediaRequest:(id)arg1 didStartLocalAvailabilityChangeRequestForResource:(id)arg2;
- (void)mediaRequest:(id)arg1 didFinishWithResult:(id)arg2;
- (_Bool)videoRequest:(id)arg1 didStartVideoChoosingRequestForSize:(struct CGSize)arg2;
- (void)imageRequest:(id)arg1 isQueryingCacheAndDidWait:(_Bool *)arg2 didFindImage:(_Bool *)arg3 resultHandler:(CDUnknownBlockType)arg4;
- (void)imageRequest:(id)arg1 isRequestingScheduledWorkBlock:(CDUnknownBlockType)arg2;
- (_Bool)imageRequest:(id)arg1 isRequestingRepairAndRetryForDataStoreKey:(id)arg2 inStore:(id)arg3 assetObjectID:(id)arg4 forValidationErrors:(id)arg5;
- (void)videoChoosingAndAvailabilityRequest:(id)arg1 didReportProgress:(double)arg2 completed:(_Bool)arg3 error:(id)arg4;
- (void)videoChoosingAndAvailabilityRequest:(id)arg1 didFinishWithVideoURL:(id)arg2 info:(id)arg3 error:(id)arg4;
- (void)resourceAvailabilityChangeRequest:(id)arg1 didReportProgress:(double)arg2 completed:(_Bool)arg3 error:(id)arg4;
- (void)resourceAvailabilityChangeRequest:(id)arg1 didFinishWithSuccess:(_Bool)arg2 url:(id)arg3 data:(id)arg4 info:(id)arg5 error:(id)arg6;
- (id)initWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 displaySpec:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (id)_requestWithIdentifier:(id)arg1;
- (void)_registerAndStartRequests:(id)arg1;
- (void)_setupProgressIfNeeded;
- (_Bool)_makeAvailabilityRequest:(id)arg1 forResource:(id)arg2;
- (unsigned long long)nextRequestIndex;
- (double)totalProgressFraction;
- (id)initialRequests;
- (id)produceChildRequestsForRequest:(id)arg1 reportingIsLocallyAvailable:(_Bool)arg2 isDegraded:(_Bool)arg3 result:(id)arg4;
- (id)_produceChildRequestsForRequest:(id)arg1 reportingIsLocallyAvailable:(_Bool)arg2 isDegraded:(_Bool)arg3;
- (id)_produceChildRequestsForRequest:(id)arg1 withResult:(id)arg2;
- (_Bool)shouldReportProgress;
- (id)progresses;
- (void)setProgress:(id)arg1 forRequestIdentifier:(id)arg2;
- (void)requestWithIdentifier:(id)arg1 didReportProgress:(double)arg2 completed:(_Bool)arg3 error:(id)arg4;
- (void)processMediaResult:(id)arg1 forRequest:(id)arg2;
- (_Bool)representsShareableHighQualityResource;
- (void)resourceAvailabilityChangeRequest:(id)arg1 didLoadData:(id)arg2;

@end

/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSString, PLAssetsdCloudClient;

@protocol OS_dispatch_group, OS_dispatch_queue;

@interface PLPreheatItem : NSObject

{
    unsigned short _format;
    long long _imageType;
    struct CGSize _optimalSourcePixelSize;
    NSString *_assetUUID;
    _Bool _CPLPrefetching;
    NSObject<OS_dispatch_queue> *_CPLPrefetchingIsolationQueue;
    NSString *_CPLPrefetchingDoneToken;
    int _CPLNotifyRegistrationToken;
    _Bool _CPLPrefetchingCancelled;
    NSObject<OS_dispatch_group> *_CPLPrefetchingWaitGroup;
    _Bool _cachingAllowed;
    _Atomic int _requestCount;
    PLAssetsdCloudClient *_cloudClient;
    _Bool _didCompleteCPLPrefetchingWithSuccessOrError;
    _Bool _CPLPrefetchingWasCancelled;
    unsigned short _bestFormat;
    NSString *_virtualCPLTaskIdentifier;
}

@property (nonatomic, readonly) unsigned short format;
@property (nonatomic) unsigned short bestFormat;
@property (nonatomic, readonly) long long imageType;
@property (nonatomic, readonly) struct CGSize optimalSourcePixelSize;
@property (copy, nonatomic, readonly) NSString *assetUUID;
@property (nonatomic, readonly) _Bool CPLPrefetching;
@property (nonatomic, readonly) NSObject<OS_dispatch_group> *CPLPrefetchingWaitGroup;
@property (retain) NSString *virtualCPLTaskIdentifier;
@property _Bool didCompleteCPLPrefetchingWithSuccessOrError;
@property _Bool CPLPrefetchingWasCancelled;
@property (nonatomic) _Bool cachingAllowed;

- (id)description;
- (_Bool)isCancelled;
- (long long)decrementRequestCount;
- (long long)incrementRequestCount;
- (struct NSObject *)cachedImage:(_Bool *)arg1;
- (struct NSObject *)cachedImageIfAvailable:(_Bool *)arg1;
- (_Bool)addImageHandler:(CDUnknownBlockType)arg1;
- (void)startPreheatRequestWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cancelPreheatRequestWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initForCPLPrefetchingWithAssetUUID:(id)arg1 format:(unsigned short)arg2 assetsdClient:(id)arg3;
- (_Bool)isRetained;

@end

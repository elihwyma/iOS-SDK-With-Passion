/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEODataSessionTask, NSString, NSURL;

@protocol NSObject, OS_dispatch_queue;

@interface GEOResourceManifestDownloadTask : NSObject

{
    struct GEOOnce_s _started;
    struct GEOOnce_s _finished;
    NSObject<OS_dispatch_queue> *_queue;
    id <NSObject> _transaction;
    NSURL *_url;
    NSString *_existingETag;
    GEODataSessionTask *_task;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    CDUnknownBlockType _callback;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)cancel;
- (void)dataSession:(id)arg1 didCompleteTask:(id)arg2;
- (id)initWithURL:(id)arg1 eTag:(id)arg2;
- (void)startWithQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_finishWithUpdatedManifest:(id)arg1 newETag:(id)arg2 isExistingManifestCurrent:(_Bool)arg3 error:(id)arg4;
- (void)_captureNetworkEventForTask:(id)arg1;

@end

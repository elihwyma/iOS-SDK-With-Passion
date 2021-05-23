/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSOperationQueue;

@protocol OS_dispatch_queue;

@interface PLAssetResourceDownloadManager : NSObject

{
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_requestIsolationQueue;
    struct os_unfair_lock_s _lock;
    NSMutableDictionary *_requestById;
    _Atomic int _currentRequestId;
}

+ (id)defaultManager;

- (id)init;
- (void)cancelRequest:(int)arg1;
- (id)_requestWithID:(int)arg1;
- (void)_setRequest:(id)arg1 forRequestID:(int)arg2;
- (int)requestCloudResourceType:(unsigned long long)arg1 assetObjectID:(id)arg2 library:(id)arg3 progressHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;

@end

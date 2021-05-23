/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue, PLAssetDownloadManagerDelegate;

@interface PLAssetDownloadManager : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_requestsById;
    NSMutableDictionary *_progressById;
    _Atomic int _currentRequestId;
    id <PLAssetDownloadManagerDelegate> _delegate;
}

@property (weak, nonatomic) id <PLAssetDownloadManagerDelegate> delegate;

+ (id)defaultManager;

- (id)init;
- (void)cancelRequest:(int)arg1;
- (void)_onQueueAsync:(CDUnknownBlockType)arg1;
- (int)requestRequiredResourcesForManagedAssetObjectUUID:(id)arg1 library:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

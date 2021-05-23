/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSError, NSString, NSURL, PHAssetResource, PHAssetResourceRequest, PHAssetResourceRequestOptions;

@protocol PHAssetResourceRequestDelegate;

@interface PHAssetResourceWriteRequest : NSObject

{
    PHAssetResourceRequest *_dataRequest;
    NSError *_error;
    struct os_unfair_lock_s _completionHandlerLock;
    int _requestID;
    PHAssetResource *_assetResource;
    PHAssetResourceRequestOptions *_options;
    unsigned long long _managerID;
    id <PHAssetResourceRequestDelegate> _delegate;
    CDUnknownBlockType _completionHandler;
    NSDictionary *_info;
    NSString *_taskIdentifier;
    NSURL *_destinationFileURL;
}

@property (nonatomic, readonly) NSURL *destinationFileURL;
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
@property (copy, nonatomic, readonly) CDUnknownBlockType completionHandler;
@property (nonatomic, readonly, getter=isCancelled) _Bool cancelled;
@property (copy, nonatomic) NSString *taskIdentifier;

- (void)cancel;
- (void)startRequest;
- (void)assetResourceRequest:(id)arg1 didFindFileURL:(id)arg2;
- (void)assetResourceRequestDidFinish:(id)arg1;
- (id)initWithAssetResource:(id)arg1 destinationFileURL:(id)arg2 options:(id)arg3 requestID:(int)arg4 managerID:(unsigned long long)arg5 delegate:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;

@end

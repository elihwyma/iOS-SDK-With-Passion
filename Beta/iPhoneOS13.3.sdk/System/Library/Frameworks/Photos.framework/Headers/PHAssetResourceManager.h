/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface PHAssetResourceManager : NSObject

{
    _Atomic int _nextRequestID;
    NSMutableDictionary *_requestsByID;
    struct os_unfair_lock_s _lock;
    unsigned long long _managerID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultManager;
+ (unsigned long long)_nextManagerID;

- (id)init;
- (void)assetResourceRequest:(id)arg1 didFindFileURL:(id)arg2;
- (void)assetResourceRequestDidFinish:(id)arg1;
- (int)_nextRequestID;
- (int)requestDataForAssetResource:(id)arg1 options:(id)arg2 dataReceivedHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)writeDataForAssetResource:(id)arg1 toFile:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (int)requestWriteDataForAssetResource:(id)arg1 toFile:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)cancelDataRequest:(int)arg1;
- (int)requestFileURLForAssetResource:(id)arg1 options:(id)arg2 urlReceivedHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)infoForRequest:(int)arg1;
- (id)consolidateAssets:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)reconnectAssets:(id)arg1 urlResolvingHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_autoResolveReferencedResources:(id)arg1 folderURL:(id)arg2 resourceClient:(id)arg3;

@end

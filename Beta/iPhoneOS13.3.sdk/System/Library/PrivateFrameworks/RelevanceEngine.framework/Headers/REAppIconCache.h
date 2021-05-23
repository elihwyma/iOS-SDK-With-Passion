/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RESingleton.h>

@class NSCache, NSObject;

@protocol OS_dispatch_queue;

@interface REAppIconCache : RESingleton

{
    NSCache *_imageCache;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)_init;
- (void)_loadRemoteIconForIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_loadIconForIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)iconForApplicationWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

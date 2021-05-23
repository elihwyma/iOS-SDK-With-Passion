/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@protocol OS_dispatch_queue;

@interface BWDeferredContainerManagerBase : NSObject

{
    NSObject<OS_dispatch_queue> *_containerQueue;
}

+ (void)initialize;

- (void)dealloc;
- (id)manifestsForApplicationID:(id)arg1 err:(int *)arg2;
- (int)deleteContainerForApplicationID:(id)arg1 captureRequestIdentifier:(id)arg2;
- (id)initWithQueuePriority:(unsigned int)arg1;
- (id)_containerPathForApplicationID:(id)arg1 captureRequestIdentifier:(id)arg2 pathExists:(_Bool *)arg3 isDirectory:(_Bool *)arg4;
- (_Bool)_insertUniqueManifestIntoTimeSortedArray:(id)arg1 manifestArray:(id)arg2;
- (id)manifestForApplicationID:(id)arg1 captureRequestIdentifier:(id)arg2 err:(int *)arg3;

@end

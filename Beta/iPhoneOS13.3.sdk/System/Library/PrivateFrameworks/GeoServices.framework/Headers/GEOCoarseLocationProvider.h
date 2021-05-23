/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@protocol OS_dispatch_queue;

@interface GEOCoarseLocationProvider : NSObject

{
    NSObject<OS_dispatch_queue> *_workQueue;
}

- (id)init;
- (void)_fetchBasicCoarseEquivalentForLocation:(id)arg1 fallbackIsPermanent:(_Bool)arg2 callbackQueue:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)fetchCoarseEquivalentForLocation:(id)arg1 callbackQueue:(id)arg2 callback:(CDUnknownBlockType)arg3;

@end

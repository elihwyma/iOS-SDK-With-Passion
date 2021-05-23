/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSMutableArray;

@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface _GEOURLManifestListener : NSObject

{
    NSMutableArray *_handlers;
    struct os_unfair_lock_s _lock;
    NSObject<OS_dispatch_source> *_timeoutTimer;
}

+ (id)sharedListener;

- (id)init;
- (void)_finish:(_Bool)arg1;
- (void)waitForManifestWithCallback:(id)arg1;

@end

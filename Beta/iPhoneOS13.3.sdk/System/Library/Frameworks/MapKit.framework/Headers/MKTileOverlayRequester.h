/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <GeoServices/GEOTileRequester.h>

@class NSMutableArray, NSMutableSet, NSObject;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MKTileOverlayRequester : GEOTileRequester

{
    _Bool _cancelled;
    NSMutableArray *_waiting;
    NSMutableSet *_running;
    NSMutableArray *_errors;
    NSObject<OS_dispatch_queue> *_workQueue;
}

+ (unsigned char)tileProviderIdentifier;
+ (unsigned int)registerOverlay:(id)arg1;
+ (void)unregisterOverlay:(unsigned int)arg1;

- (void)dealloc;
- (void)cancel;
- (void)start;
- (_Bool)isRunning;
- (void)_cleanup;
- (id)initWithTileRequest:(id)arg1 delegateQueue:(id)arg2 delegate:(id)arg3;
- (void)_operationFinished:(id)arg1;
- (void)_operationFailed:(id)arg1 error:(id)arg2;
- (void)_doWorkOrFinish;
- (void)_startOnWorkQueue;

@end

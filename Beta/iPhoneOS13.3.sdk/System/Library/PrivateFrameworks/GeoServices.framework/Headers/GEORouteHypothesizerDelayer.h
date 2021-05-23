/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEORouteHypothesizer, GEOXPCActivity, geo_isolater;

__attribute__((visibility("hidden")))
@interface GEORouteHypothesizerDelayer : NSObject

{
    struct __CFBinaryHeap *_minHeap;
    GEORouteHypothesizer *_nextHypothesizer;
    geo_isolater *_isolater;
    GEOXPCActivity *_activity;
}

+ (void)checkin;

- (id)init;
- (void)dealloc;
- (void)_setNextHypothesizer:(id)arg1;
- (void)_startValidHypothesizers;
- (void)delayStartOfHypothesizer:(id)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKMediaClusterPredicate.h>

@interface OKMediaLocationZoneClusterPredicate : OKMediaClusterPredicate

{
    double _distance;
}

@property (readonly) double distance;

- (void)dealloc;
- (id)title;
- (id)evaluateItems:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (float)efficiencyForItems:(id)arg1;
- (id)_containsInSet:(id)arg1 withinItems:(id)arg2 distance:(double)arg3;
- (id)_titleWithPlacemark:(id)arg1;
- (id)initWithDistance:(double)arg1;

@end

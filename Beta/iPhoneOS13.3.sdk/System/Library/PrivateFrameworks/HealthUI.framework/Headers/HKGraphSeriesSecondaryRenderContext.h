/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface HKGraphSeriesSecondaryRenderContext : NSObject

{
    NSMutableArray *_aboveScreenRegions;
    NSMutableArray *_belowScreenRegions;
}

- (id)init;
- (void)addOffScreenRegionWithStartLocation:(double)arg1 endLocation:(double)arg2 color:(id)arg3 aboveScreen:(_Bool)arg4;
- (void)addOffScreenRegionAtLocation:(double)arg1 color:(id)arg2 aboveScreen:(_Bool)arg3;
- (void)drawInAxisRect:(struct CGRect)arg1 backgroundColor:(id)arg2 renderContext:(struct CGContext *)arg3;

@end

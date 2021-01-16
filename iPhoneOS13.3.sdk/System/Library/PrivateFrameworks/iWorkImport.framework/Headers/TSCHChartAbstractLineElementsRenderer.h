//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCHRenderer.h>

__attribute__((visibility("hidden")))
@interface TSCHChartAbstractLineElementsRenderer : TSCHRenderer
{
}

- (void)p_renderLabelsIntoContext:(CGContext )arg1 seriesIndex:(NSUInteger)arg2 model:(id)arg3 modelCache:(id)arg4 bodyLayoutItem:(id)arg5 valueSet:(id)arg6;
- (void)p_renderIntoContext:(CGContext )arg1 visible:(CGRect)arg2;
- (void)p_finishContextAfterRendering:(CGContext )arg1 modelCache:(id)arg2 didEnableTransparencyLayer:(BOOL)arg3;
- (void)p_setupContextForRendering:(CGContext )arg1 layerRect:(CGRect)arg2 modelCache:(id)arg3 shadow:(id)arg4 outDidEnableTransparencyLayer:(BOOL )arg5;
- (id)symbolTransformsForRenderingElements;
- (CGAffineTransform)p_adjustTransformForAADefeatInContext:(CGContext )arg1 inTransform:(CGAffineTransform)arg2 forSeriesShape:(CGPath )arg3 inBodyBounds:(CGRect)arg4;
- (id)p_findChartRootLayoutItem:(id)arg1;
- (void)p_clipOutSymbolsInContext:(CGContext )arg1 withTransformArray:(CGAffineTransform )arg2 withCount:(NSUInteger)arg3 forSeries:(id)arg4;
- (BOOL)useBlendModeCopyForTransparencyLayer;
- (int)chunkPlane;

@end

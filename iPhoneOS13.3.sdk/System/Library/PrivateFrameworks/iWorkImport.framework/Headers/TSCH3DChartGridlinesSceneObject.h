//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH3DSceneObject.h>

@class TSCH3DPrefilteredLineRenderer;

__attribute__((visibility("hidden")))
@interface TSCH3DChartGridlinesSceneObject : TSCH3DSceneObject
{
    TSCH3DPrefilteredLineRenderer *mRenderer;
}

+ (id)partWithAxes:(id)arg1;
- (void)postGetBounds:(id)arg1;
- (void)primeRenderCaches:(id)arg1;
- (void)getBounds:(id)arg1;
- (void)postrender:(id)arg1;
- (void)render:(id)arg1;
- (void)p_render:(id)arg1;
- (BOOL)p_shouldRenderInFrontForPipeline:(id)arg1;
- (tmat4x4_3074befe)p_gridlineTransformForPipeline:(id)arg1;
- (id)effects;
- (void)dealloc;
- (id)init;

@end


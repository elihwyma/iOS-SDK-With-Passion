//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH3DChartShadowsSceneObject.h>

__attribute__((visibility("hidden")))
@interface TSCH3DChartOrthographicShadowsSceneObject : TSCH3DChartShadowsSceneObject
{
}

+ (id)blurParametersArray;
- (id)createShadowsRenderer;
- (void)updateShadowPlane:(id)arg1 texcoords:(id)arg2 scene:(id)arg3 blurslack:(float)arg4 angle:(float)arg5 quality:(float)arg6 planePadding:(box_a3bd9649)arg7;
- (void)updateCoordsAndTexcoords:(const box_a3bd9649 )arg1 zOffset:(float)arg2 cameraPosition:(const tvec3_17f03ce0 )arg3 quad:(id)arg4 texcoords:(id)arg5;
- (id)createCamera;

@end


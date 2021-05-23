/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

@class CLKUIQuadView, NTKAltitudeColorCurveView, NTKSiderealBackgroundQuad;

@interface NTKSiderealDialBackgroundView : UIView

{
    NTKSiderealBackgroundQuad *_backgroundQuad;
    CLKUIQuadView *_quadView;
    NTKSiderealBackgroundQuad *_quad;
    NTKAltitudeColorCurveView *_backgroundDialView;
}

@property (retain, nonatomic) NTKAltitudeColorCurveView *backgroundDialView;
@property (retain, nonatomic) CLKUIQuadView *quadView;
@property (nonatomic, readonly) NTKSiderealBackgroundQuad *quad;

- (void)layoutSubviews;
- (void)renderSynchronouslyWithImageQueueDiscard:(_Bool)arg1 inGroup:(id)arg2;
- (void)setSolarDayProgress:(double)arg1;
- (void)setSectors:(id)arg1;
- (void)updateDayMask;
- (id)initWithFrame:(struct CGRect)arg1 orbitDiameter:(double)arg2 timeOrbitRadius:(double)arg3 timeRadius:(double)arg4 dialImage:(id)arg5 waypointImage:(id)arg6 gnomonImage:(id)arg7 dayGnomonImage:(id)arg8 dayDiskBloomImage:(id)arg9 dayDiscImage:(id)arg10 nightGnomonImage:(id)arg11 nightDiscImage:(id)arg12 nightRingImage:(id)arg13 dataSource:(id)arg14;

@end

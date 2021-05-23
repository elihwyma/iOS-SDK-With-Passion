/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKRichComplicationCurveView.h>

@class NSArray;

@interface NTKRichComplicationCurvedMeteredView : NTKRichComplicationCurveView

{
    NSArray *_meterLayers;
}

@property (retain, nonatomic) NSArray *meterLayers;

- (void)setProgress:(double)arg1;
- (void)_updateGradient;
- (void)colorMetersWithProgress:(double)arg1;
- (void)_setupShapeLayer:(id)arg1;
- (id)_shapeStrokeColor;
- (double)rotationAngleAtProgress:(float)arg1;
- (CDUnknownBlockType)customizeMeterLayerBlock;

@end

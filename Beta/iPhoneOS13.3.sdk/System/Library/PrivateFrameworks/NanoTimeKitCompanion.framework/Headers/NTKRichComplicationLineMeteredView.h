/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKRichComplicationLineView.h>

@class NSArray;

@interface NTKRichComplicationLineMeteredView : NTKRichComplicationLineView

{
    NSArray *_meterLayers;
}

@property (retain, nonatomic) NSArray *meterLayers;

- (void)setProgress:(double)arg1;
- (void)_updateGradient;
- (struct CGPoint)_pointAtProgress:(float)arg1;
- (void)colorMetersWithProgress:(double)arg1;
- (void)_setupShapeLayer:(id)arg1;
- (id)_shapeStrokeColor;

@end

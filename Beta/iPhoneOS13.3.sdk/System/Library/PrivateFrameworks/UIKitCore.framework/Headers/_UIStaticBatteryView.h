/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIBatteryView.h>

@interface _UIStaticBatteryView : _UIBatteryView

{
    long long _inflightBoltAnimationCount;
}

+ (id)_batteryBoltMaskImageWithSize:(struct CGSize)arg1 boltSize:(struct CGSize)arg2 forScale:(double)arg3;
+ (id)_batteryBoltImageWithSize:(struct CGSize)arg1 boltSize:(struct CGSize)arg2 forScale:(double)arg3;
+ (id)_batteryBodyImageWithSize:(struct CGSize)arg1 forScale:(double)arg2 batteryRect:(struct CGRect)arg3 cornerRadius:(double)arg4 lineWidth:(double)arg5 withBoltCutOutOfSize:(struct CGSize)arg6 inRect:(struct CGRect)arg7 boltFlipped:(_Bool)arg8;
+ (id)_batteryBodyImageWithSize:(struct CGSize)arg1 forScale:(double)arg2 batteryRect:(struct CGRect)arg3 cornerRadius:(double)arg4 lineWidth:(double)arg5;
+ (id)_batteryPinImageWithSize:(struct CGSize)arg1 forScale:(double)arg2 complexPinPath:(_Bool)arg3;
+ (id)_batteryFillImageWithSize:(struct CGSize)arg1 forScale:(double)arg2 cornerRadius:(double)arg3 withBoltCutOutOfSize:(struct CGSize)arg4 inRect:(struct CGRect)arg5 boltFlipped:(_Bool)arg6;
+ (id)_batteryFillImageWithSize:(struct CGSize)arg1 forScale:(double)arg2 cornerRadius:(double)arg3;
+ (id)_renderedImageOfSize:(struct CGSize)arg1 scale:(double)arg2 withActions:(CDUnknownBlockType)arg3;
+ (id)_imageWithRenderedBezierPath:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 pathScaleFactor:(double)arg4 stroke:(_Bool)arg5;
+ (id)_imageByPunchingImage:(id)arg1 inRect:(struct CGRect)arg2 flippedHorizontally:(_Bool)arg3 outOfImage:(id)arg4 inRect:(struct CGRect)arg5 size:(struct CGSize)arg6 scale:(double)arg7;

- (double)_batteryPathScaleFactor;
- (double)_batteryBoltLargeScaleFactor;
- (_Bool)_useImagesWithCutoutsForBolt;
- (struct CGSize)_boltPathSize;
- (struct CGRect)_boltRectForTraitCollection:(id)arg1 boltSize:(struct CGSize)arg2;
- (struct CGRect)_updateBodyLayers;
- (void)_updateFillLayer;
- (void)_createBodyLayers;
- (void)_createFillLayer;
- (void)_createBoltLayersWithSize:(struct CGSize)arg1;
- (void)_updateBodyColors;
- (void)_updateBatteryFillColor;
- (double)_batteryBoltSmallScaleFactor;
- (void)_willBeginAnimatingBoltToVisible:(_Bool)arg1;
- (void)_didFinishAnimatingBoltToVisible:(_Bool)arg1;

@end

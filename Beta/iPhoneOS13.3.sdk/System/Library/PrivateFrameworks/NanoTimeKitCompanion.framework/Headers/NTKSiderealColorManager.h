/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NTKAltitudeColorCurve;

@interface NTKSiderealColorManager : NSObject

{
    NSMutableArray *_updateHandlers;
    NTKAltitudeColorCurve *_dialBackground;
    NSArray *_dayGradient;
    NTKAltitudeColorCurve *_civilTwilight;
    NTKAltitudeColorCurve *_nauticalTwilight;
    NTKAltitudeColorCurve *_astronomicalTwilight;
    NTKAltitudeColorCurve *_innerComplication;
    NTKAltitudeColorCurve *_outerComplication;
    NTKAltitudeColorCurve *_dayDiskBloom;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)_init;
- (void)_notifyHandlers;
- (void)setSunAltitude:(double)arg1;
- (void)addColorUpdateHandler:(CDUnknownBlockType)arg1;
- (id)dialBackgroundColorCurve;
- (id)dayGradientColorCurves;
- (id)civilTwilightColorCurve;
- (id)nauticalTwilightColorCurve;
- (id)astronomicalTwilightColorCurve;
- (id)innerComplicationColorCurve;
- (id)outerComplicationColorCurve;
- (id)dayDiskBloomColorCurve;

@end

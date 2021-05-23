/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

@class CALayer, CLKDevice, NSArray, NTKCaliforniaColorPalette, NTKCaliforniaStyleTransitionHandler;

@interface NTKCaliforniaContentView : UIView

{
    _Bool _showingStatusIcon;
    _Bool _circularPillMarkersCenterPointsCalculated;
    unsigned long long _style;
    unsigned long long _dial;
    unsigned long long _color;
    CLKDevice *_device;
    CALayer *_hourTicks;
    CALayer *_minuteTicks;
    CALayer *_circularHourTicks;
    CALayer *_circularMinuteTicks;
    NSArray *_hourMarkers;
    NSArray *_temporaryHourMarkers;
    unsigned long long _temporaryHourMarkersStyle;
    unsigned long long _temporaryHourMarkersDial;
    NTKCaliforniaColorPalette *_colorPalette;
    NTKCaliforniaStyleTransitionHandler *_styleTransitionHandler;
}

@property (retain, nonatomic) CLKDevice *device;
@property (retain, nonatomic) CALayer *hourTicks;
@property (retain, nonatomic) CALayer *minuteTicks;
@property (retain, nonatomic) CALayer *circularHourTicks;
@property (retain, nonatomic) CALayer *circularMinuteTicks;
@property (retain, nonatomic) NSArray *hourMarkers;
@property (retain, nonatomic) NSArray *temporaryHourMarkers;
@property (nonatomic) unsigned long long temporaryHourMarkersStyle;
@property (nonatomic) unsigned long long temporaryHourMarkersDial;
@property (retain, nonatomic) NTKCaliforniaColorPalette *colorPalette;
@property (retain, nonatomic) NTKCaliforniaStyleTransitionHandler *styleTransitionHandler;
@property (nonatomic) _Bool showingStatusIcon;
@property (nonatomic) _Bool circularPillMarkersCenterPointsCalculated;
@property (nonatomic) unsigned long long style;
@property (nonatomic) unsigned long long dial;
@property (nonatomic) unsigned long long color;

+ (id)_disabledLayerActions;

- (void)layoutSubviews;
- (id)_createLayer;
- (void)applyTransitionFraction:(double)arg1 fromStyle:(unsigned long long)arg2 toStyle:(unsigned long long)arg3;
- (void)applyTransitionFraction:(double)arg1 fromDial:(unsigned long long)arg2 toDial:(unsigned long long)arg3;
- (void)configureTicksForStatus:(_Bool)arg1;
- (struct CGPoint *)hourMarkersCenterPointConstantsForStyle:(unsigned long long)arg1 dial:(unsigned long long)arg2;
- (struct CGPoint *)circularPillMarkersCenterPoints;
- (void)setMinuteTicksColor:(id)arg1;
- (void)setHourTicksColor:(id)arg1;
- (void)setColorInHourMarkerView:(id)arg1 color:(id)arg2;
- (void)removeHourMarkers;
- (void)_createDigitsIfNeededWithStyle:(unsigned long long)arg1 dial:(unsigned long long)arg2;
- (void)removeTemporaryHourMarkers;
- (void)addFullscreenTicksIfNeeded;
- (void)addCircularTicksIfNeeded;
- (void)_layoutHourMarkersLayers:(id)arg1 style:(unsigned long long)arg2 dialShape:(unsigned long long)arg3;
- (id)hourTicksForStatus:(_Bool)arg1;
- (id)layerWithImage:(id)arg1;
- (id)_digitLayersForStyle:(unsigned long long)arg1 dial:(unsigned long long)arg2;
- (id)pillLayerFromHourMarkerView:(id)arg1;
- (id)createCaliforniaGraphicAtIndex:(unsigned long long)arg1 dial:(unsigned long long)arg2;
- (id)createPillAtIndex:(unsigned long long)arg1 dial:(unsigned long long)arg2;
- (id)createLabelForStyle:(unsigned long long)arg1 dial:(unsigned long long)arg2;
- (id)textForDigit:(unsigned long long)arg1 style:(unsigned long long)arg2;
- (id)imageNameForDigit:(unsigned long long)arg1 style:(unsigned long long)arg2 dial:(unsigned long long)arg3;
- (id)createPillViewWithAngle:(double)arg1 size:(const struct CGSize *)arg2;
- (id)imageNameComponentForDial:(unsigned long long)arg1;
- (id)imageNameComponentForStyle:(unsigned long long)arg1;
- (void)_createTemporaryDigitsIfNeededWithStyle:(unsigned long long)arg1 dial:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1 dial:(unsigned long long)arg2 style:(unsigned long long)arg3 color:(unsigned long long)arg4 device:(id)arg5;
- (void)setCircularTicksHidden:(_Bool)arg1;
- (id)_createLayersWithCount:(unsigned long long)arg1;
- (void)applyTransitionFraction:(double)arg1 fromColorPalette:(id)arg2 toColorPalette:(id)arg3;

@end

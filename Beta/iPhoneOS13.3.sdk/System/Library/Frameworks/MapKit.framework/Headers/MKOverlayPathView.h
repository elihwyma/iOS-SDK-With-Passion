/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKOverlayView.h>

@class NSArray, UIColor;

@interface MKOverlayPathView : MKOverlayView

{
    UIColor *_fillColor;
    UIColor *_strokeColor;
    double _lineWidth;
    int _lineJoin;
    int _lineCap;
    double _miterLimit;
    double _lineDashPhase;
    NSArray *_lineDashPattern;
    struct CGPath *_path;
}

@property (retain) UIColor *fillColor;
@property (retain) UIColor *strokeColor;
@property double lineWidth;
@property int lineJoin;
@property int lineCap;
@property double miterLimit;
@property double lineDashPhase;
@property (copy) NSArray *lineDashPattern;
@property struct CGPath *path;

- (void)dealloc;
- (id)initWithOverlay:(id)arg1;
- (void)createPath;
- (void)_performInitialConfiguration;
- (void)applyFillPropertiesToContext:(struct CGContext *)arg1 atZoomScale:(double)arg2;
- (void)fillPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (void)applyStrokePropertiesToContext:(struct CGContext *)arg1 atZoomScale:(double)arg2;
- (void)strokePath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (void)invalidatePath;
- (void)drawMapRect:(CDStruct_02837cd9)arg1 zoomScale:(double)arg2 inContext:(struct CGContext *)arg3;
- (_Bool)canDrawMapRect:(CDStruct_02837cd9)arg1 zoomScale:(double)arg2;

@end

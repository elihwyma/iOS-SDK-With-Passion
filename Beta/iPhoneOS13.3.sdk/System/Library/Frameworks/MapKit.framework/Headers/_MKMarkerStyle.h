/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface _MKMarkerStyle : NSObject

{
    UIColor *_markerColor;
    double _shadowAlpha;
    UIColor *_strokeColor;
    double _strokeWidth;
    UIColor *_glyphColor;
    UIImage *_glyphImage;
}

@property (nonatomic, readonly) UIColor *markerColor;
@property (nonatomic, readonly) double shadowAlpha;
@property (nonatomic, readonly) UIColor *strokeColor;
@property (nonatomic, readonly) double strokeWidth;
@property (nonatomic, readonly) UIColor *glyphColor;
@property (nonatomic, readonly) UIImage *glyphImage;

+ (id)markerStyleForTraitCollection:(id)arg1 state:(long long)arg2 styleAttributes:(id)arg3 coordinate:(struct CLLocationCoordinate2D)arg4;

@end

/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/Swift-Protocol.h>

@class UIColor, UIImage, UIView;

@protocol _MKBalloonCalloutViewConfiguring <Swift>

@property (nonatomic, readonly, getter=_balloonCalloutStyle) long long balloonCalloutStyle;
@property (nonatomic, readonly, getter=_balloonTintColor) UIColor *balloonTintColor;
@property (nonatomic, readonly, getter=_balloonStrokeColor) UIColor *balloonStrokeColor;
@property (nonatomic, readonly, getter=_balloonImage) UIImage *balloonImage;
@property (nonatomic, readonly, getter=_balloonContentView) UIView *balloonContentView;
@property (nonatomic, readonly, getter=_balloonInnerStrokeColor) UIColor *balloonInnerStrokeColor;

@end

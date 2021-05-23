/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/_MKLabelMarkerView.h>

@class NSString, UIColor, UIImage, UIView;

__attribute__((visibility("hidden")))
@interface _MKBalloonLabelMarkerView : _MKLabelMarkerView

{
    UIView *_anchorDotView;
    _Bool _needsToResolveBalloonAttributes;
    long long _balloonCalloutStyle;
    _Bool _balloonCalloutShouldOriginateFromSmallSize;
    UIColor *_balloonFillColor;
    UIColor *_balloonStrokeColor;
    UIImage *_balloonImage;
    UIView *_balloonContentView;
    double _smallBalloonScaleFactor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=_balloonCalloutStyle) long long balloonCalloutStyle;
@property (nonatomic, readonly, getter=_balloonTintColor) UIColor *balloonTintColor;
@property (nonatomic, readonly, getter=_balloonStrokeColor) UIColor *balloonStrokeColor;
@property (nonatomic, readonly, getter=_balloonImage) UIImage *balloonImage;
@property (nonatomic, readonly, getter=_balloonContentView) UIView *balloonContentView;
@property (nonatomic, readonly, getter=_balloonInnerStrokeColor) UIColor *balloonInnerStrokeColor;

+ (Class)calloutViewClass;

- (void)prepareForReuse;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (_Bool)updateCalloutViewIfNeededAnimated:(_Bool)arg1;
- (_Bool)shouldShowCallout;
- (_Bool)_balloonCalloutShouldOriginateFromSmallSize:(double *)arg1;
- (void)_configureBalloonForDataIconImageKeys:(id)arg1 scale:(double)arg2;
- (void)_resolveBalloonAttributesIfNecessary;
- (void)_addAnchorDotViewIfNeeded;

@end

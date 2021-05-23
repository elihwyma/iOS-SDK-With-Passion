/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKAnnotationView.h>

@class GEOFeatureStyleAttributes, MKWalletMerchantStylingInfo, NSString, UIColor, UIImage, UIImageView, UILabel, UIView, _MKBezierPathView;

@interface MKMarkerAnnotationView : MKAnnotationView

{
    UIImageView *_shadowView;
    _MKBezierPathView *_markerView;
    UIImageView *_glyphImageView;
    UILabel *_glyphLabel;
    _MKBezierPathView *_selectedMarkerView;
    UIImageView *_selectedGlyphImageView;
    UILabel *_selectedGlyphLabel;
    _MKBezierPathView *_selectedDotView;
    UIView *_contentMaskView;
    GEOFeatureStyleAttributes *_customStyleAttributes;
    MKWalletMerchantStylingInfo *_walletMerchantStylingInfo;
    _Bool _isObserving;
    _Bool _animatesWhenAdded;
    UIColor *_markerTintColor;
    UIColor *_glyphTintColor;
    NSString *_glyphText;
    UIImage *_glyphImage;
    UIImage *_selectedGlyphImage;
    UIColor *_markerStrokeTintColor;
    double _markerStrokeWidth;
}

@property (retain, nonatomic, getter=_walletMerchantStylingInfo, setter=_setWalletMerchantStylingInfo:) MKWalletMerchantStylingInfo *walletMerchantStylingInfo;
@property (copy, nonatomic) UIColor *markerStrokeTintColor;
@property (nonatomic) double markerStrokeWidth;
@property (retain, nonatomic) UIView *selectedContentView;
@property (retain, nonatomic, getter=_styleAttributes, setter=_setStyleAttributes:) GEOFeatureStyleAttributes *styleAttributes;
@property (nonatomic) long long titleVisibility;
@property (nonatomic) long long subtitleVisibility;
@property (copy, nonatomic) UIColor *markerTintColor;
@property (copy, nonatomic) UIColor *glyphTintColor;
@property (copy, nonatomic) NSString *glyphText;
@property (copy, nonatomic) UIImage *glyphImage;
@property (copy, nonatomic) UIImage *selectedGlyphImage;
@property (nonatomic) _Bool animatesWhenAdded;

+ (Class)_mapkitLeafClass;
+ (float)_defaultDisplayPriority;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)prepareForReuse;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)prepareForDisplay;
- (void)_setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)prepareForSnapshotting;
- (void)setAnnotation:(id)arg1;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (_Bool)canShowCallout;
- (_Bool)_hasDataRequiringCallout;
- (long long)_currentMarkerState;
- (void)_updateContentForState:(long long)arg1;
- (id)_effectiveMarkerTintColorForState:(long long)arg1;
- (void)_updateContentForState:(long long)arg1 forceUpdate:(_Bool)arg2;
- (id)_effectiveMarkerStrokeTintColorForState:(long long)arg1;
- (id)_effectiveGlyphTintColorForState:(long long)arg1;
- (double)_effectiveMarkerStrokeWidthForState:(long long)arg1;
- (id)_effectiveGlyphText;
- (id)_effectiveGlyphImageForState:(long long)arg1 isSystemProvided:(_Bool *)arg2;
- (void)_setupNormalViewsIfNeeded;
- (void)_setupSelectedViewsIfNeededUsesCallout:(_Bool)arg1;
- (void)_configureViewsForState:(long long)arg1 usesCallout:(_Bool)arg2;
- (void)_unhideForDisplay;
- (double)_effectiveShadowAlphaForState:(long long)arg1;
- (void)setDragState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (long long)_stateForIsSelected:(_Bool)arg1;
- (void)_configureAnimated:(_Bool)arg1 fromState:(long long)arg2 toState:(long long)arg3;
- (_Bool)updateCalloutViewIfNeededAnimated:(_Bool)arg1;
- (struct UIEdgeInsets)_defaultCollisionAlignmentRectInsets;
- (void)_didDragWithVelocity:(struct CGPoint)arg1;
- (_Bool)_shouldDeselectWhenDragged;
- (_Bool)isProvidingCustomFeature;
- (id)_effectiveSubtitlesIsCollidable:(_Bool *)arg1;

@end

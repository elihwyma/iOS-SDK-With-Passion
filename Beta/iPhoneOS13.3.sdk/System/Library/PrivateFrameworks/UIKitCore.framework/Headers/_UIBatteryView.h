/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class CALayer, CAShapeLayer, NSString, UIAccessibilityHUDItem, UIColor, UILabel, _UIBatteryViewAXHUDImageCacheInfo;

@interface _UIBatteryView : UIView

{
    _Bool _saverModeActive;
    _Bool _showsInlineChargingIndicator;
    _Bool _showsPercentage;
    UIColor *_fillColor;
    UIColor *_bodyColor;
    UIColor *_pinColor;
    UIColor *_boltColor;
    double _chargePercent;
    long long _chargingState;
    double _lowBatteryChargePercentThreshold;
    long long _iconSize;
    UILabel *_percentageLabel;
    _UIBatteryViewAXHUDImageCacheInfo *_accessibilityHUDImageCacheInfo;
    CALayer *_bodyLayer;
    CALayer *_pinLayer;
    CALayer *_boltMaskLayer;
    CALayer *_boltLayer;
    CALayer *_fillLayer;
    long long _internalSizeCategory;
    double _bodyColorAlpha;
    double _pinColorAlpha;
}

@property (nonatomic) long long iconSize;
@property (nonatomic, readonly) CAShapeLayer *bodyShapeLayer;
@property (nonatomic, readonly) CAShapeLayer *pinShapeLayer;
@property (nonatomic, readonly) CAShapeLayer *boltMaskShapeLayer;
@property (nonatomic, readonly) CAShapeLayer *boltShapeLayer;
@property (retain, nonatomic) UILabel *percentageLabel;
@property (retain, nonatomic) _UIBatteryViewAXHUDImageCacheInfo *accessibilityHUDImageCacheInfo;
@property (retain, nonatomic) CALayer *bodyLayer;
@property (retain, nonatomic) CALayer *pinLayer;
@property (retain, nonatomic) CALayer *boltMaskLayer;
@property (retain, nonatomic) CALayer *boltLayer;
@property (retain, nonatomic) CALayer *fillLayer;
@property (nonatomic) long long internalSizeCategory;
@property (nonatomic) _Bool showsPercentage;
@property (nonatomic) double bodyColorAlpha;
@property (nonatomic) double pinColorAlpha;
@property (nonatomic) long long sizeCategory;
@property (nonatomic) double chargePercent;
@property (nonatomic) long long chargingState;
@property (nonatomic) _Bool saverModeActive;
@property (nonatomic) double lowBatteryChargePercentThreshold;
@property (nonatomic, readonly, getter=isLowBattery) _Bool lowBattery;
@property (nonatomic) _Bool showsInlineChargingIndicator;
@property (copy, nonatomic) UIColor *fillColor;
@property (copy, nonatomic) UIColor *bodyColor;
@property (copy, nonatomic) UIColor *pinColor;
@property (copy, nonatomic) UIColor *boltColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool wantsCrossfade;
@property (nonatomic, readonly) _Bool prefersBaselineAlignment;
@property (nonatomic, readonly) long long overriddenVerticalAlignment;
@property (nonatomic, readonly) UIAccessibilityHUDItem *accessibilityHUDRepresentation;

+ (id)_pinBezierPathForSize:(struct CGSize)arg1 complex:(_Bool)arg2;
+ (id)_boltBezierPathForSize:(struct CGSize)arg1;
+ (id)_boltMaskBezierPath;
+ (struct CGSize)_batterySizeForIconSize:(long long)arg1;
+ (struct CGSize)_pinSizeForIconSize:(long long)arg1;
+ (double)_lineWidthAndInterspaceForIconSize:(long long)arg1;
+ (struct CGSize)_statusBarIntrinsicContentSizeForIconSize:(long long)arg1;

- (id)initWithCoder:(id)arg1;
- (void)_commonInit;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)applyStyleAttributes:(id)arg1;
- (struct CGRect)_bodyRectForTraitCollection:(id)arg1;
- (double)_batteryBoltLargeScaleFactor;
- (double)_lineWidthAndInterspaceForTraitCollection:(id)arg1;
- (double)_outsideCornerRadiusForTraitCollection:(id)arg1;
- (struct CGSize)_batterySizeForTraitCollection:(id)arg1;
- (struct CGSize)_pinSizeForTraitCollection:(id)arg1;
- (void)_fillLayerFrame:(struct CGRect *)arg1 cornerRadius:(double *)arg2;
- (id)_batteryFillColor;
- (_Bool)_shouldShowBolt;
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
- (void)_updateTransform;
- (_Bool)_currentlyShowsPercentage;
- (void)__updateFillLayer;
- (id)_batteryTextColor;
- (void)_updateFillColor;
- (double)_insideCornerRadiusForTraitCollection:(id)arg1;
- (void)_unflipBoltIfNecessary;
- (void)_notifyWillBeginAnimatingBoltToVisible:(_Bool)arg1;
- (void)_notifyDidFinishAnimatingBoltToVisible:(_Bool)arg1;
- (void)_updatePercentage;
- (void)_updateBolt;
- (id)initWithSizeCategory:(long long)arg1;

@end

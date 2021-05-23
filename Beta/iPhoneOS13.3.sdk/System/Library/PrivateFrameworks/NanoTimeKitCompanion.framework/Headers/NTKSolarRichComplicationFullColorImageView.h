/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

@class CAGradientLayer, CALayer, CLKDevice, CLLocation, NSDate, NSDictionary, NSString, NTKBezierPathPointModel, NTKBezierPathView, NTKSolarPath, NTKSolarTimeModel;

@protocol CLKMonochromeFilterProvider;

@interface NTKSolarRichComplicationFullColorImageView : UIView

{
    struct {
        double curveLineWidth;
        struct CGSize curveMaxSize;
        double lineTop;
        double lineHeight;
        double strokeDiskDiameter;
        double strokeDiskBorderWidth;
        double fillDiskDiameter;
        double haloMinScale;
        double haloMaxScale;
        double backgroundGradientSunsetLayerMaxAlpha;
    } _layoutConstants;
    UIView *_backgroundView;
    CAGradientLayer *_gradientLayer;
    CALayer *_gradientAdjustmentLayer;
    UIView *_lineView;
    NTKBezierPathView *_pathView;
    NTKSolarTimeModel *_solarTimeModel;
    NTKSolarPath *_solarPath;
    NTKBezierPathPointModel *_pointModel;
    CALayer *_strokeDiskMaskLayer;
    CALayer *_strokeDiskBorderLayer;
    CALayer *_fillDiskLayer;
    CALayer *_fillDiskHaloLayer;
    CALayer *_belowHorizonLayer;
    UIView *_fillDiskHaloContainerView;
    NSDictionary *_waypoints;
    double _horizonYInCurve;
    double _sunsetXInCurve;
    struct CGRect _solarPathViewRect;
    double _prevDiskTimePercentage;
    struct NSNumber *_clockTimerToken;
    CLKDevice *_device;
    _Bool _paused;
    _Bool _solarPathNeedsUpdate;
    _Bool _usingIdealizedTime;
    id <CLKMonochromeFilterProvider> _filterProvider;
    CLLocation *_location;
    NSDate *_timeTravelDate;
}

@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) _Bool usingIdealizedTime;
@property (retain, nonatomic) NSDate *timeTravelDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <CLKMonochromeFilterProvider> filterProvider;

- (void)dealloc;
- (void)layoutSubviews;
- (void)_didReceiveSignificantTimeChangeNotification;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (id)initFullColorImageViewWithDevice:(id)arg1;
- (void)pauseLiveFullColorImageView;
- (void)resumeLiveFullColorImageView;
- (void)configureWithImageProvider:(id)arg1 reason:(long long)arg2;
- (void)_stopClockUpdates;
- (_Bool)_shouldAnimateWithTemplateUpdateReason:(long long)arg1;
- (void)_startClockUpdates;
- (void)_updateWaypoints;
- (void)updateWithLocation:(id)arg1 useIdealizedTime:(_Bool)arg2 forceUpdate:(_Bool)arg3 animated:(_Bool)arg4;
- (void)_setSolarPathNeedsUpdate;
- (void)_didReceiveTimeZoneDidChangeNotification;
- (void)_dateDidUpdate;
- (void)_updateSolarPathWithAnimated:(_Bool)arg1;
- (void)_updateSolarDiskWithUsingIdealizedTime:(_Bool)arg1 forceUpdate:(_Bool)arg2 animated:(_Bool)arg3;
- (void)_updateGradientBackgroundWithYPosition:(double)arg1 xPercentage:(double)arg2 topDistanceAboveHorizonLine:(double)arg3 bottomDistanceBelowHorizonLine:(double)arg4;

@end

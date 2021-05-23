/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UIView.h>

@class NSString, VKMapView;

__attribute__((visibility("hidden")))
@interface MKBasicMapView : UIView

{
    UIView *_hostView;
    VKMapView *_mapView;
    double _mapModeStartTime;
    double _trafficStartTime;
    _Bool _changingViewSize;
    _Bool _inactive;
    _Bool _hasRenderedSomething;
    _Bool _inBackground;
}

@property (nonatomic, readonly) VKMapView *mapView;
@property (nonatomic, readonly) struct UIEdgeInsets edgeInsets;
@property (nonatomic, readonly, getter=isInBackground) _Bool inBackground;
@property (nonatomic) _Bool rendersInBackground;
@property (nonatomic) _Bool hasRenderedSomething;
@property (nonatomic) double mapModeStartTime;
@property (nonatomic) double trafficStartTime;
@property (nonatomic, readonly, getter=isChangingViewSize) _Bool changingViewSize;
@property (nonatomic) _Bool inactive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)setBounds:(struct CGRect)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)_animateCanvasForBounds:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 andGlobe:(_Bool)arg2 shouldRasterize:(_Bool)arg3;
- (void)updateStatsForTrafficEnabledTime;
- (void)updateStatsForEnablingTraffic:(_Bool)arg1;
- (void)updateStatsForSwitchingToMapType:(int)arg1;
- (void)updateStatsForTimeSpentInCurrentMapTypeIsShowingFlyover:(_Bool)arg1;
- (struct CLLocationCoordinate2D)convertPoint:(struct CGPoint)arg1 toCoordinateFromView:(id)arg2;
- (struct CGPoint)convertCoordinate:(struct CLLocationCoordinate2D)arg1 toPointToView:(id)arg2;
- (struct CGPoint)convertCoordinate:(struct CLLocationCoordinate2D)arg1 toCameraModelPointToView:(id)arg2;
- (_Bool)isPointValidForGesturing:(struct CGPoint)arg1;
- (void)_updateBackgroundState;
- (void)_finishedSnapshot:(id)arg1;
- (void)_updateMapViewHidden;
- (void)_unregisterSceneNotifications;
- (void)_registerSceneNotifications;
- (void)_updateForCurrentScreen;
- (void)_updateStatsForTimeSpentInCurrentMapTypeIsShowingFlyover:(_Bool)arg1 ignoreIfViewInWindow:(_Bool)arg2;
- (void)_updateStatsForTrafficEnabledTime:(_Bool)arg1;
- (void)addCalloutSubview:(id)arg1;
- (struct CGSize)calloutContainerCanvasSize;
- (double)calloutContainerCanvasScale;

@end

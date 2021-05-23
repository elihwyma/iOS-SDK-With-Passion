/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UIView.h>

#import <MapKit/Swift-Protocol.h>

@class GEOMuninViewState, GEOStorefrontView, MKCompassView, MKHapticEngine, MKMapItem, MKMuninBumpFlash, MKMuninGestureController, NSArray, NSDate, NSLayoutConstraint, NSString, NSURL, UIImageView, UITapGestureRecognizer, VKLabelMarker, VKMapView, VKMuninMarker, _MKMuninLayerHostingView;

@protocol MKMapServiceTicket, MKMuninViewDelegate;

@interface MKMuninView : UIView <Swift>

{
    _MKMuninLayerHostingView *_hostView;
    _Bool _changingViewSize;
    _Bool _wantsCompassShown;
    UIImageView *_transitionStartImageview;
    UIImageView *_transitionEndImageview;
    UIImageView *_transitionGridImageview;
    MKCompassView *_compassView;
    NSLayoutConstraint *_compassTopConstraint;
    NSLayoutConstraint *_compassTrailingConstraint;
    UITapGestureRecognizer *_compassTapGestureRecognizer;
    MKMuninGestureController *_gestureController;
    VKMapView *_muninView;
    struct CLLocationCoordinate2D _lastCoordinate;
    NSArray *_lastGroundViews;
    NSString *_lastJunctionName;
    id <MKMapServiceTicket> _refineTicket;
    id <MKMapServiceTicket> _revGeoTicket;
    struct CGRect _oldRect;
    _Bool _hasValidViewState;
    _Bool _storefrontFullyDrawn;
    _Bool _wantsStorefrontCloseUpView;
    _Bool _moveToStorefrontViewInProgress;
    _Bool _didTriggerAdequatelyDrawnNotification;
    MKMapItem *_mapItem;
    MKMapItem *_revGeoMapItem;
    GEOStorefrontView *_requestedStorefrontView;
    NSDate *_startTime;
    int _triggerAction;
    MKHapticEngine *_hapticEngine;
    MKMuninBumpFlash *_bumpFlashView;
    _Bool _hasEnteredMunin;
    _Bool _navigatingEnabled;
    _Bool _panningEnabled;
    _Bool _pinchingEnabled;
    id <MKMuninViewDelegate> _delegate;
    GEOMuninViewState *_muninViewState;
    struct UIEdgeInsets _compassInsets;
}

@property (retain, nonatomic) VKMapView *muninView;
@property (nonatomic, getter=isCompassHidden) _Bool compassHidden;
@property (nonatomic) struct UIEdgeInsets compassInsets;
@property (nonatomic) _Bool hasEnteredMunin;
@property (nonatomic) _Bool navigatingEnabled;
@property (nonatomic) _Bool panningEnabled;
@property (nonatomic) _Bool pinchingEnabled;
@property (nonatomic) _Bool showsRoadLabels;
@property (nonatomic) _Bool showsPointLabels;
@property (nonatomic) struct CLLocationCoordinate2D centerCoordinate;
@property (nonatomic) double presentationYaw;
@property (weak, nonatomic) id <MKMuninViewDelegate> delegate;
@property (nonatomic, readonly) GEOMuninViewState *muninViewState;
@property (nonatomic, readonly) VKLabelMarker *selectedLabelMarker;
@property (nonatomic, readonly) NSArray *visibleRoadLabels;
@property (nonatomic, readonly) NSArray *imageResources;
@property (nonatomic, readonly) VKMuninMarker *muninMarker;
@property (nonatomic, readonly) NSArray *visiblePlaceMUIDs;
@property (nonatomic, readonly) MKMapItem *mapItem;
@property (nonatomic, readonly) NSDate *collectionDate;
@property (nonatomic, readonly) _Bool adequatelyDrawn;
@property (nonatomic, readonly, getter=isLoading) _Bool loading;
@property (nonatomic, readonly) NSURL *sharingURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setUserInteractionEnabled:(_Bool)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_updateLocationInfo;
- (void)_handleCompassTap;
- (void)_maps_initCommon;
- (_Bool)_pointContainedInCompassView:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setCompassHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_animateCanvasForBounds:(struct CGRect)arg1;
- (void)_updateCompassInsets;
- (void)setPresentationYaw:(double)arg1 pitch:(double)arg2 animated:(_Bool)arg3;
- (void)recordTriggerAction:(int)arg1;
- (void)_enterMuninForMapItem:(id)arg1 wantsCloseUpView:(_Bool)arg2;
- (void)_enterMuninForMuninMarker:(id)arg1 withHeading:(double)arg2;
- (void)_enterMuninForMuninViewState:(id)arg1;
- (void)_resetViewState;
- (_Bool)cancelPendingMove;
- (void)_updateCameraFrame;
- (void)_updateCompass;
- (_Bool)_moveToStorefrontView:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)tapAtPoint:(struct CGPoint)arg1;
- (void)moveToCloseUpViewAnimated:(_Bool)arg1;
- (void)moveToStandOffViewAnimated:(_Bool)arg1;
- (void)_refineLabelMarker:(id)arg1;
- (void)deselectLabelMarker;
- (id)labelMarkerForCustomFeatureAnnotation:(id)arg1;
- (void)addCustomFeatureDataSource:(id)arg1;
- (void)removeCustomFeatureDataSource:(id)arg1;
- (void)_updateLocationInfoForCoordinate:(struct CLLocationCoordinate2D)arg1 allowReverseGeocodeIfNeeded:(_Bool)arg2;
- (void)mapLayerDidChangeVisibleRegion;
- (void)moveToCloseUpView;
- (id)_locationInfoWithHeading:(double)arg1;
- (void)_reverseGeocodeCoordinate:(struct CLLocationCoordinate2D)arg1;
- (void)muninGestureControllerDidStartUserInteraction:(id)arg1;
- (void)muninGestureControllerDidStopUserInteraction:(id)arg1;
- (void)muninGestureController:(id)arg1 didTapLabelMarker:(id)arg2;
- (void)muninGestureController:(id)arg1 didTapAtPoint:(struct CGPoint)arg2 areaAvailable:(_Bool)arg3;
- (void)muninGestureController:(id)arg1 didZoomWithDirection:(long long)arg2 type:(long long)arg3;
- (void)muninGestureControllerDidPan:(id)arg1;
- (void)mapLayerDidChangeRegionAnimated:(_Bool)arg1;
- (void)mapLayerWillAnimateToLocation:(CDStruct_c3b9c2ee)arg1;
- (void)mapLayerWasUnableToAnimate;
- (void)mapLayerDidChangeSceneState:(id)arg1 withState:(unsigned long long)arg2;
- (void)mapLayer:(id)arg1 nearestJunctionDidChange:(id)arg2 currentRoad:(id)arg3;
- (void)setPresentationYaw:(double)arg1 animated:(_Bool)arg2;
- (void)enterMuninWithEntryPoint:(id)arg1;
- (void)openInMapsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)moveToMapItem:(id)arg1 wantsCloseUpView:(_Bool)arg2 orMuninMarker:(id)arg3 withHeading:(double)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)moveToStandOffView;
- (void)selectLabelMarker:(id)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
 */

#import <UIView.h>

@class FUFLightTrack, FUPlaneTrackerAnnotationView, MKMapView, NSArray, NSLayoutConstraint, NSMutableArray, NSString, TLKProminenceView, UIPageControl, UIPageViewController, UIScrollView, UIVisualEffectView;

@protocol FUFlightViewDelegate;

@interface FUFlightView : UIView

{
    FUPlaneTrackerAnnotationView *_planeTracker;
    NSMutableArray *_tracks;
    FUFLightTrack *_currentTrack;
    NSMutableArray *_controllers;
    UIPageViewController *_pageViewController;
    UIScrollView *_pageViewContainer;
    _Bool _spotlightMode;
    _Bool _landscapeMode;
    NSLayoutConstraint *_pageControllerHeightConstraint;
    NSArray *_allLegs;
    unsigned long long _displayStyle;
    _Bool _ignoreMapUpdate;
    _Bool _highlightCurrentFlightLeg;
    _Bool _showInfoPanel;
    long long _currentFocus;
    MKMapView *_mapView;
    UIVisualEffectView *_backBlurView;
    TLKProminenceView *_borderLineViewLandscape;
    TLKProminenceView *_borderLineViewPortrait;
    UIPageControl *_pageControl;
    NSLayoutConstraint *_pageContainerHeightConstraint;
    NSLayoutConstraint *_lanscapeConstraint1;
    NSLayoutConstraint *_lanscapeConstraint2;
    NSLayoutConstraint *_lanscapeConstraint3;
    NSLayoutConstraint *_portraitConstraint1;
    UIView *_errorView;
    UIView *_loadingView;
    NSArray *_flights;
    long long _selectedFlight;
    long long _selectedLeg;
    id <FUFlightViewDelegate> _delegate;
    NSLayoutConstraint *_bottomMapConstraint;
    NSLayoutConstraint *_leadingMapConstraint;
    struct UIEdgeInsets _mapInsets;
}

@property (nonatomic) long long currentFocus;
@property (weak, nonatomic) MKMapView *mapView;
@property (weak, nonatomic) UIVisualEffectView *backBlurView;
@property (weak, nonatomic) TLKProminenceView *borderLineViewLandscape;
@property (weak, nonatomic) TLKProminenceView *borderLineViewPortrait;
@property (weak, nonatomic) UIPageControl *pageControl;
@property (weak, nonatomic) NSLayoutConstraint *pageContainerHeightConstraint;
@property (weak, nonatomic) NSLayoutConstraint *lanscapeConstraint1;
@property (weak, nonatomic) NSLayoutConstraint *lanscapeConstraint2;
@property (weak, nonatomic) NSLayoutConstraint *lanscapeConstraint3;
@property (weak, nonatomic) NSLayoutConstraint *portraitConstraint1;
@property (retain) UIView *errorView;
@property (retain) UIView *loadingView;
@property (retain, nonatomic) NSArray *flights;
@property (nonatomic) long long selectedFlight;
@property (nonatomic) long long selectedLeg;
@property (nonatomic) _Bool highlightCurrentFlightLeg;
@property (nonatomic) _Bool showInfoPanel;
@property (weak) id <FUFlightViewDelegate> delegate;
@property (retain, nonatomic) NSLayoutConstraint *bottomMapConstraint;
@property (retain, nonatomic) NSLayoutConstraint *leadingMapConstraint;
@property (nonatomic) unsigned long long displayStyle;
@property (nonatomic) struct UIEdgeInsets mapInsets;
@property (nonatomic) _Bool ignoreMapUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void)layoutMarginsDidChange;
- (_Bool)preservesSuperviewLayoutMargins;
- (void)didMoveToWindow;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)awakeFromNib;
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(_Bool)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;
- (void)addTrack:(id)arg1;
- (void)tlk_updateForAppearance:(id)arg1;
- (id)allLegs;
- (_Bool)setFlights:(id)arg1 selectedFlight:(long long)arg2 selectedLeg:(long long)arg3;
- (void)removeMapBackground;
- (void)updateMapCamera;
- (void)showLoading;
- (void)showError;
- (void)showInfo;
- (void)flightInfoView:(id)arg1 didUpdateFocus:(long long)arg2;
- (void)updateMapAppearance;
- (_Bool)mapOnly;
- (void)setupStyles;
- (_Bool)landscapeMode;
- (void)updatePageControllerScrolling;
- (void)updateOrientationConstraints;
- (void)updateBorderLines;
- (_Bool)landscapeModeForTraits:(id)arg1;
- (void)fitMap:(_Bool)arg1;
- (id)currentFlight;
- (void)updateMapArcs;
- (id)currentLeg;
- (id)infoViewControllerCreate;
- (void)cleanupView;
- (unsigned long long)absoluteLegIndex;
- (void)setAbsoluteIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (id)departureCamera;
- (id)arrivalCamera;
- (_Bool)hasFollowupContent:(id)arg1;
- (id)flightForLeg:(id)arg1;
- (id)flightCamera;
- (void)changeCurrentPage:(id)arg1;

@end

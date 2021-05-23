/*
 Image: /System/Library/Frameworks/CarPlay.framework/CarPlay
 */

#import <CarPlay/CPTemplate.h>

#import <CarPlay/Swift-Protocol.h>

@class CPBarButton, CPNavigationAlert, NAFuture, NSArray, NSMutableDictionary, NSString, UIColor;

@protocol CPBannerProviding, CPMapTemplateDelegate, CPNavigationSessionProviding;

@interface CPMapTemplate : CPTemplate <Swift>

{
    _Bool _automaticallyHidesNavigationBar;
    _Bool _hidesButtonsWithNavigationBar;
    UIColor *_guidanceBackgroundColor;
    unsigned long long _tripEstimateStyle;
    NSArray *_mapButtons;
    id <CPMapTemplateDelegate> _mapDelegate;
    CPNavigationAlert *_currentNavigationAlert;
    NSMutableDictionary *_postedBannerObjects;
    NAFuture *_navigationSessionProviderFuture;
    id <CPBannerProviding> _bannerProvider;
    id <CPNavigationSessionProviding> _navigationSessionProvider;
    NSArray *_tripPreviews;
}

@property (retain, nonatomic) NSMutableDictionary *postedBannerObjects;
@property (retain, nonatomic) NAFuture *navigationSessionProviderFuture;
@property (retain, nonatomic) NAFuture *templateProviderFuture;
@property (retain, nonatomic) id <CPBannerProviding> bannerProvider;
@property (retain, nonatomic) id <CPNavigationSessionProviding> navigationSessionProvider;
@property (copy, nonatomic, readonly) NSArray *tripPreviews;
@property (retain, nonatomic) UIColor *guidanceBackgroundColor;
@property (nonatomic) unsigned long long tripEstimateStyle;
@property (retain, nonatomic) NSArray *mapButtons;
@property (nonatomic) _Bool automaticallyHidesNavigationBar;
@property (nonatomic) _Bool hidesButtonsWithNavigationBar;
@property (weak, nonatomic) id <CPMapTemplateDelegate> mapDelegate;
@property (nonatomic, readonly, getter=isPanningInterfaceVisible) _Bool panningInterfaceVisible;
@property (nonatomic, readonly) CPNavigationAlert *currentNavigationAlert;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSArray *leadingNavigationBarButtons;
@property (retain, nonatomic) NSArray *trailingNavigationBarButtons;
@property (retain, nonatomic) CPBarButton *backButton;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)mapButton:(id)arg1 setHidden:(_Bool)arg2;
- (_Bool)mapButton:(id)arg1 setImageSet:(id)arg2;
- (_Bool)mapButton:(id)arg1 setFocusedImage:(id)arg2;
- (void)handleActionForControlIdentifier:(id)arg1;
- (long long)_displayStyleForManeuver:(id)arg1;
- (void)_postBannerIfNecessaryForManeuver:(id)arg1;
- (void)_updateBannerIfNecessaryForManeuver:(id)arg1 travelEstimates:(id)arg2;
- (void)previewTripIdentifier:(id)arg1 usingRouteIdentifier:(id)arg2;
- (void)startTripIdentifier:(id)arg1 usingRouteIdentifier:(id)arg2;
- (void)clientPanBeganWithDirection:(long long)arg1;
- (void)clientPanEndedWithDirection:(long long)arg1;
- (void)clientPanWithDirection:(long long)arg1;
- (void)clientPanGestureBegan;
- (void)clientPanGestureWithDeltaPoint:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (void)clientPanGestureEndedWithVelocity:(struct CGPoint)arg1;
- (void)clientPanViewDidAppear;
- (void)clientPanViewDidDisappear;
- (void)clientPanViewWillDisappear;
- (void)clientNavigationAlertWillAppear:(id)arg1;
- (void)clientNavigationAlertDidAppear:(id)arg1;
- (void)clientNavigationAlertWillDisappear:(id)arg1 context:(unsigned long long)arg2;
- (void)clientNavigationAlertDidDisappear:(id)arg1 context:(unsigned long long)arg2;
- (void)clientTripCanceledByExternalNavigation;
- (void)clientTripAlreadyStartedException;
- (void)dismissNavigationAlertAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)bannerTappedWithIdentifier:(id)arg1;
- (void)bannerDidAppearWithIdentifier:(id)arg1;
- (void)bannerDidDisappearWithIdentifier:(id)arg1;
- (void)updateTravelEstimates:(id)arg1 forTrip:(id)arg2 withTimeRemainingColor:(unsigned long long)arg3;
- (void)_postBannerIfNecessaryForNavigationAlert:(id)arg1;
- (void)_resolveTrip:(id)arg1 routeChoice:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_updateNavigationAlert:(id)arg1;
- (void)showTripPreviews:(id)arg1 textConfiguration:(id)arg2;
- (void)showRouteChoicesPreviewForTrip:(id)arg1 textConfiguration:(id)arg2;
- (void)hideTripPreviews;
- (void)updateTravelEstimates:(id)arg1 forTrip:(id)arg2;
- (id)startNavigationSessionForTrip:(id)arg1;
- (void)presentNavigationAlert:(id)arg1 animated:(_Bool)arg2;
- (void)showPanningInterfaceAnimated:(_Bool)arg1;
- (void)dismissPanningInterfaceAnimated:(_Bool)arg1;

@end

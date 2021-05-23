/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKPlaceSectionRowView.h>

@class MKMapItem, NSLayoutConstraint, NSMutableArray, NSString, UIButton, UILabel, _MKQuickRouteManager;

__attribute__((visibility("hidden")))
@interface MKPlaceDirectionsCell : MKPlaceSectionRowView

{
    UIButton *_directionsButton;
    UIButton *_walkButton;
    UIButton *_transitButton;
    UIButton *_driveButton;
    UILabel *_walkTimeLabel;
    UILabel *_transitTimeLabel;
    UILabel *_driveTimeLabel;
    NSLayoutConstraint *_directionsToWalkButtonConstraint;
    NSLayoutConstraint *_directionsToTransitButtonConstraint;
    NSLayoutConstraint *_directionsToDriveButtonConstraint;
    NSLayoutConstraint *_walkButtonToTransitButtonConstraint;
    NSLayoutConstraint *_walkButtonToDriveButtonConstraint;
    NSLayoutConstraint *_transitButtonToDriveButtonConstraint;
    NSLayoutConstraint *_directionsTrailingConstraint;
    NSLayoutConstraint *_walkButtonTrailingConstraint;
    NSLayoutConstraint *_transitButtonTrailingConstraint;
    NSLayoutConstraint *_driveButtonTrailingConstraint;
    _MKQuickRouteManager *_quickRouteManager;
    NSMutableArray *_baseConstraints;
    NSMutableArray *_buttonBaselineConstraints;
    _Bool _offlineMode;
    MKMapItem *_mapItem;
    CDUnknownBlockType _requestDirectionsBlock;
}

@property (retain, nonatomic) MKMapItem *mapItem;
@property (copy, nonatomic) CDUnknownBlockType requestDirectionsBlock;
@property (nonatomic) _Bool offlineMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateConstraints;
- (void)contentSizeDidChange;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (void)locationManagerDidReset:(id)arg1;
- (_Bool)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)_quickDirectionsTapped:(id)arg1;
- (void)_walkingDirectionsTapped:(id)arg1;
- (id)newButtonWithImage:(id)arg1 andSelector:(SEL)arg2;
- (void)_transitDirectionsTapped:(id)arg1;
- (void)_drivingDirectionsTapped:(id)arg1;
- (id)newLabel;
- (void)updateETAs:(_Bool)arg1 constraintsOnly:(_Bool)arg2;
- (id)timeEstimateFont;
- (void)updateETAFor:(unsigned long long)arg1 button:(id)arg2 label:(id)arg3;
- (_Bool)quickRouteShouldOnlyUseAutomobile;
- (_Bool)quickRouteShouldIncludeTransitWhenNotPreferredTransportType;
- (unsigned long long)preferredDirectionsTypeForQuickRoute;
- (void)quickRouteManager:(id)arg1 didUpdateETA:(id)arg2 error:(id)arg3 animated:(_Bool)arg4;

@end

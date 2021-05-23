/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UIView.h>

@class CLInUseAssertion, MKLocationManager, NSString, UILabel;

@interface MKStarkCompassView : UIView

{
    UIView *_contentsView;
    _Bool _monitoringCourse;
    UILabel *_label;
    MKLocationManager *_locationManager;
    CLInUseAssertion *_assertion;
    _Bool _contentsHidden;
    _Bool _active;
    int _compassPoint;
}

@property (nonatomic) int compassPoint;
@property (nonatomic) _Bool contentsHidden;
@property (nonatomic, getter=isActive) _Bool active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (id)initWithEffectiveBundleIdentifier:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)_setActive:(_Bool)arg1;
- (void)_createSubviews;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (void)locationManagerDidReset:(id)arg1;
- (_Bool)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)_startLocationUpdates;
- (void)_stopLocationUpdates;
- (void)_updateStyling;
- (void)_updateContents;
- (_Bool)_canStartLocationUpdates;
- (void)_updateDisplayedHeadingWithHeading:(double)arg1;
- (id)initWithSharedMKLocationManager;

@end

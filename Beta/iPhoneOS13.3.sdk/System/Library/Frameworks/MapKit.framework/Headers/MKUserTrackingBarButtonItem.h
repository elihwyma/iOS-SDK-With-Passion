/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UIBarButtonItem.h>

@class MKMapView, NSString, UIButton, UIImage, UINavigationBar, UIToolbar, UIView, _MKUserTrackingButton, _MKUserTrackingButtonController;

@protocol MKUserTrackingView;

@interface MKUserTrackingBarButtonItem : UIBarButtonItem

{
    _Bool _hasCustomAssociatedView;
    UIButton *_customButton;
    _MKUserTrackingButtonController *_controller;
    _MKUserTrackingButton *_userTrackingButton;
    _Bool _explicitlyEnabled;
    _Bool _internallyEnabled;
    UIImage *_trackingEmptyImage;
    UIImage *_trackingNoneImage;
    UIImage *_trackingFollowImage;
    UIImage *_trackingFollowWithHeadingImage;
    MKMapView *_mapView;
    UIToolbar *_toolbar;
    UINavigationBar *_navigationBar;
    UIView *_associatedView;
}

@property (nonatomic, setter=_setState:) long long _state;
@property (retain, nonatomic) UIToolbar *_toolbar;
@property (retain, nonatomic) UINavigationBar *_navigationBar;
@property (retain, nonatomic) UIView *_associatedView;
@property (retain, nonatomic, setter=_setUserTrackingView:) id <MKUserTrackingView> _userTrackingView;
@property (nonatomic, getter=_selectsWhenTracking, setter=_setSelectsWhenTracking:) _Bool selectsWhenTracking;
@property (retain, nonatomic) MKMapView *mapView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)_activityIndicatorClass;

- (id)init;
- (void)dealloc;
- (void)setEnabled:(_Bool)arg1;
- (id)initWithCoder:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)isEnabled;
- (id)createViewForNavigationItem:(id)arg1;
- (id)createViewForToolbar:(id)arg1;
- (long long)_activityIndicatorStyle;
- (id)initWithMapView:(id)arg1;
- (void)_goToNextMode:(id)arg1;
- (void)_setInternallyEnabled:(_Bool)arg1;
- (id)_imageForState:(long long)arg1 controlState:(unsigned long long)arg2;
- (id)_trackingEmptyImage;
- (id)_trackingNoneImage;
- (id)_trackingFollowImage;
- (id)_trackingFollowWithHeadingImage;
- (_Bool)_isInMiniBar;
- (void)_repositionViews;
- (void)_updateForState:(long long)arg1;
- (_Bool)_isHighlightedForState:(long long)arg1;
- (id)_imageForUserTrackingMode:(long long)arg1;
- (void)_setImage:(id)arg1 forUserTrackingMode:(long long)arg2;
- (id)_landscapeImagePhoneForUserTrackingMode:(long long)arg1;
- (void)_setLandscapeImagePhone:(id)arg1 forUserTrackingMode:(long long)arg2;

@end

/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UIButton.h>

@class MKMapView, NSMutableDictionary, NSString, _MKUserTrackingButtonController;

@protocol MKUserTrackingView;

@interface _MKUserTrackingButton : UIButton

{
    _MKUserTrackingButtonController *_controller;
    NSMutableDictionary *_customImages;
    NSMutableDictionary *_customLandscapeImagePhones;
    NSMutableDictionary *_customImageEdgeInsets;
    _Bool _selectsWhenTracking;
    _Bool _explicitlyEnabled;
    _Bool _internallyEnabled;
    _Bool _applyDefaultImageIfNeeded;
    _Bool _inMiniBar;
}

@property (nonatomic, readonly) _MKUserTrackingButtonController *controller;
@property (nonatomic, getter=_selectsWhenTracking, setter=_setSelectsWhenTracking:) _Bool selectsWhenTracking;
@property (weak, nonatomic) MKMapView *mapView;
@property (weak, nonatomic) id <MKUserTrackingView> userTrackingView;
@property (nonatomic, readonly) _Bool inMiniBar;
@property (nonatomic, readonly) unsigned long long behavior;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)buttonWithUserTrackingView:(id)arg1;
+ (Class)_activityIndicatorClass;
+ (id)buttonWithUserTrackingView:(id)arg1 withType:(long long)arg2 applyDefaultImageIfNeeded:(_Bool)arg3;
+ (id)buttonWithUserTrackingView:(id)arg1 withType:(long long)arg2;
+ (id)buttonWithMapView:(id)arg1;
+ (id)buttonWithMapView:(id)arg1 applyDefaultImageIfNeeded:(_Bool)arg2;

- (void)setEnabled:(_Bool)arg1;
- (long long)_state;
- (void)_setState:(long long)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGRect)_selectedIndicatorBounds;
- (void)updateForMiniBarState:(_Bool)arg1;
- (long long)_activityIndicatorStyle;
- (void)_setInternallyEnabled:(_Bool)arg1;
- (id)_imageForState:(long long)arg1 controlState:(unsigned long long)arg2;
- (id)_imageForUserTrackingMode:(long long)arg1 controlState:(unsigned long long)arg2;
- (void)_setImage:(id)arg1 forUserTrackingMode:(long long)arg2 controlState:(unsigned long long)arg3;
- (id)_landscapeImagePhoneForUserTrackingMode:(long long)arg1 controlState:(unsigned long long)arg2;
- (void)_setLandscapeImagePhone:(id)arg1 forUserTrackingMode:(long long)arg2 controlState:(unsigned long long)arg3;
- (void)_repositionViews;
- (void)_updateForState:(long long)arg1;
- (_Bool)_isHighlightedForState:(long long)arg1;
- (id)_defaultImageForUserTrackingMode:(long long)arg1 controlState:(unsigned long long)arg2;
- (id)_defaultLandscapeImagePhoneForUserTrackingMode:(long long)arg1 controlState:(unsigned long long)arg2;
- (struct UIEdgeInsets)_imageEdgeInsetsForUserTrackingMode:(long long)arg1;
- (void)_setImageEdgeInsets:(struct UIEdgeInsets)arg1 forUserTrackingMode:(long long)arg2;

@end

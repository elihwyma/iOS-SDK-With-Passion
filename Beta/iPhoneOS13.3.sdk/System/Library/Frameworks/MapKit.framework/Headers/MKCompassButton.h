/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UIView.h>

@class MKCompassView, MKMapView;

@interface MKCompassButton : UIView

{
    MKCompassView *_compassView;
    _Bool _visible;
    MKMapView *_mapView;
    long long _compassVisibility;
}

@property (weak, nonatomic) MKMapView *mapView;
@property (nonatomic) long long compassVisibility;

+ (id)compassButtonWithMapView:(id)arg1;

- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)_updateVisibility;
- (id)initWithFrame:(struct CGRect)arg1 mapView:(id)arg2;
- (void)didTapCompassGesture:(id)arg1;
- (void)mapViewDidUpdateYawNotification:(id)arg1;

@end

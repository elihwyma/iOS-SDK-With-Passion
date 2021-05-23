/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UIView.h>

@class MKMapView, _MKUserTrackingButton;

@interface MKUserTrackingButton : UIView

{
    _MKUserTrackingButton *_button;
}

@property (weak, nonatomic) MKMapView *mapView;

+ (id)userTrackingButtonWithMapView:(id)arg1;

- (id)init;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 button:(id)arg2;

@end

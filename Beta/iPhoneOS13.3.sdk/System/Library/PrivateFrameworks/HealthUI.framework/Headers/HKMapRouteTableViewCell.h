/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UITableViewCell.h>

@class MKMapView, NSString;

@interface HKMapRouteTableViewCell : UITableViewCell

{
    MKMapView *_mapView;
}

@property (retain) MKMapView *mapView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultReuseIdentifier;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupSubviews;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;
- (void)setUpConstraints;

@end

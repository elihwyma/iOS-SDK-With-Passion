/*
 Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

#import <UIKit/UIView.h>

@class CPSRouteEstimatesView, CPTrip, NSString;

@interface CPSNavigationETAView : UIView

{
    CPTrip *_trip;
    CPSRouteEstimatesView *_routeEstimatesView;
    unsigned long long _tripEstimateStyle;
    UIView *_borderView;
}

@property (retain, nonatomic) UIView *borderView;
@property (nonatomic, readonly) CPTrip *trip;
@property (nonatomic, readonly) CPSRouteEstimatesView *routeEstimatesView;
@property (nonatomic) unsigned long long tripEstimateStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)setHidden:(_Bool)arg1;
- (void)removeFromSuperview;
- (void)_updateStyle;
- (void)didMoveToSuperview;
- (void)updateEstimates:(id)arg1 forManeuver:(id)arg2;
- (id)initWithTrip:(id)arg1 style:(unsigned long long)arg2;
- (void)showManeuvers:(id)arg1;

@end

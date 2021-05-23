/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKEventDetailItem.h>

@class CLLocation, EKEventMapCell, MKMapItemView, UIView;

@interface EKEventMapDetailItem : EKEventDetailItem

{
    EKEventMapCell *_cell;
    MKMapItemView *_mapView;
    UIView *_loadingView;
    CLLocation *_location;
    EKEventMapCell *_oldCell;
    _Bool _animationHasRan;
    _Bool _hasMapItemLaunchOptionFromTimeToLeaveNotification;
}

@property (nonatomic) _Bool hasMapItemLaunchOptionFromTimeToLeaveNotification;

- (void)reset;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (_Bool)configureWithCalendar:(id)arg1 preview:(_Bool)arg2;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (void)setupMapView;
- (void)updateViewColors;
- (void)_animateMapIfNeededWithPresentingController:(id)arg1 presentingView:(id)arg2;
- (double)_mapHeight;
- (id)_mapRelatedViewConstraintsForMapRelatedView:(id)arg1 inCell:(id)arg2;
- (CDStruct_c3b9c2ee)_makeSpanWithCoordinate:(struct CLLocationCoordinate2D)arg1 radius:(double)arg2 minRadius:(double)arg3;
- (void)_loadMapItem:(id)arg1 withCoordinateSpan:(CDStruct_c3b9c2ee)arg2;
- (void)eventViewController:(id)arg1 tableViewDidScroll:(id)arg2;

@end

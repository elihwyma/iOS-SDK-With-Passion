/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKPlaceSectionViewController.h>

@class MKMapItem, MKPlaceSectionHeaderView, NSArray, NSString, NSTimeZone;

@protocol _MKInfoCardAnalyticsDelegate;

__attribute__((visibility("hidden")))
@interface MKPlaceHoursViewController : MKPlaceSectionViewController

{
    _Bool _isExpanded;
    MKPlaceSectionHeaderView *_headerView;
    NSArray *_businessHours;
    _Bool _resizableViewsDisabled;
    id <_MKInfoCardAnalyticsDelegate> _analyticsDelegate;
    MKMapItem *_mapItem;
}

@property (retain, nonatomic) MKMapItem *mapItem;
@property (nonatomic, readonly) NSTimeZone *timeZone;
@property (nonatomic, readonly) NSArray *businessHours;
@property (weak, nonatomic) id <_MKInfoCardAnalyticsDelegate> analyticsDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool resizableViewsDisabled;

+ (id)placeHoursWithMapItem:(id)arg1;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)_contentSizeDidChange;
- (id)initWithMapItem:(id)arg1;
- (id)titleString;
- (void)infoCardThemeChanged;
- (id)infoCardChildPossibleActions;
- (id)infoCardChildUnactionableUIElements;
- (void)_toggleShowAllHours;
- (void)_setExpanded:(_Bool)arg1;
- (void)_updateHoursAnimated:(_Bool)arg1;
- (_Bool)_shouldOnlyShowExpanded;
- (id)hoursBuilderWithHours:(id)arg1;

@end

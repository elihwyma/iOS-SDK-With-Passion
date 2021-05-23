/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKPlaceSectionViewController.h>

@class MKMapItem, MKPlaceSectionHeaderView, NSString, UIScrollView, UIStackView;

@protocol MKPlaceServiceHoursViewControllerProtocol;

@interface MKPlaceServiceHoursViewController : MKPlaceSectionViewController

{
    _Bool _isExpanded;
    MKPlaceSectionHeaderView *_headerView;
    long long _type;
    UIScrollView *_scrollView;
    UIStackView *_stackView;
    id <MKPlaceServiceHoursViewControllerProtocol> _placeServiceDelegate;
    MKMapItem *_mapItem;
}

@property (retain, nonatomic) MKMapItem *mapItem;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (weak, nonatomic) id <MKPlaceServiceHoursViewControllerProtocol> placeServiceDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)titleString;
+ (id)placeServiceHoursWithMapItem:(id)arg1 type:(long long)arg2;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)_contentSizeDidChange;
- (id)infoCardChildPossibleActions;
- (id)infoCardChildUnactionableUIElements;
- (id)initWithMapItem:(id)arg1 type:(long long)arg2;
- (void)_showAllHeaderButtonTapped;
- (void)_updateServiceHourRows;
- (void)captureCloseAnalytics;

@end

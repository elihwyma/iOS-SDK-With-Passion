/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKPlaceSectionViewController.h>

@class MKMapItem, MKPlaceSectionHeaderView, NSString, _MKPlaceBusinessInfoRow;

__attribute__((visibility("hidden")))
@interface MKPlaceBusinessInfoViewController : MKPlaceSectionViewController

{
    MKMapItem *_mapItem;
    MKPlaceSectionHeaderView *_headerView;
    _MKPlaceBusinessInfoRow *_businessInfoRow;
}

@property (retain, nonatomic) MKMapItem *mapItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)mapItemHasBusinessInfoToDisplay:(id)arg1;

- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)infoCardThemeChanged;
- (void)_updateBusinessInfo;
- (id)_imageForApplePay;
- (id)_stringForAmenity:(int)arg1;
- (id)infoCardChildPossibleActions;
- (id)infoCardChildUnactionableUIElements;

@end

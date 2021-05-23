/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKPlaceSectionViewController.h>

@class MKMapItem, NSArray, NSString;

@protocol MKPlaceRelatedViewControllerDelegate, _MKInfoCardAnalyticsDelegate;

__attribute__((visibility("hidden")))
@interface MKPlaceRelatedViewController : MKPlaceSectionViewController

{
    NSArray *_fetchedMapItems;
    NSArray *_cells;
    MKMapItem *_mapItem;
    id <MKPlaceRelatedViewControllerDelegate> _delegate;
    id <_MKInfoCardAnalyticsDelegate> _analyticsDelegate;
}

@property (retain, nonatomic) MKMapItem *mapItem;
@property (weak, nonatomic) id <MKPlaceRelatedViewControllerDelegate> delegate;
@property (weak, nonatomic) id <_MKInfoCardAnalyticsDelegate> analyticsDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)placeRelatedViewControllerFor:(id)arg1;

- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)_updateHeightConstraints;
- (void)_updateTitle;
- (void)preferredContentSizeChanged:(id)arg1;
- (void)sectionView:(id)arg1 didSelectRow:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)fetchPOIs;
- (void)_reloadRelatedMapItems:(id)arg1;
- (void)_updateRows;
- (id)_moduleTitle;
- (void)_seeAllAction:(id)arg1;
- (void)_captureSeeAllAction;
- (void)_captureTapActionWithMapItem:(id)arg1;

@end

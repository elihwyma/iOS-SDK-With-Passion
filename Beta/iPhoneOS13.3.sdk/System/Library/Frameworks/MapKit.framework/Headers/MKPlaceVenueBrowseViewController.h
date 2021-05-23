/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UIViewController.h>

@class MKFixedToTopCollectionViewFlowLayout, MKMapItem, MKVenuesBrowseCollectionView, NSArray, NSLayoutConstraint, NSString, UIColor, UIFont;

@protocol GEOVenueComponentIdentifier, MKPlaceVenueBrowseViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface MKPlaceVenueBrowseViewController : UIViewController

{
    id <MKPlaceVenueBrowseViewControllerDelegate> _delegate;
    unsigned long long _venueID;
    id <GEOVenueComponentIdentifier> _componentIdentifier;
    NSArray *_browseItems;
    MKVenuesBrowseCollectionView *_collectionView;
    MKFixedToTopCollectionViewFlowLayout *_collectionViewFlowLayout;
    NSLayoutConstraint *_collectionViewBottomConstraint;
    UIFont *_preferredCellTitleLabelFont;
    UIColor *_cellTitleLabelTextColor;
    MKMapItem *_mapItem;
    struct CGSize _preferredCellSize;
}

@property (nonatomic) unsigned long long venueID;
@property (retain, nonatomic) id <GEOVenueComponentIdentifier> componentIdentifier;
@property (retain, nonatomic) NSArray *browseItems;
@property (retain, nonatomic) MKVenuesBrowseCollectionView *collectionView;
@property (retain, nonatomic) MKFixedToTopCollectionViewFlowLayout *collectionViewFlowLayout;
@property (retain, nonatomic) NSLayoutConstraint *collectionViewBottomConstraint;
@property (nonatomic) struct CGSize preferredCellSize;
@property (retain, nonatomic) UIFont *preferredCellTitleLabelFont;
@property (retain, nonatomic) UIColor *cellTitleLabelTextColor;
@property (retain, nonatomic) MKMapItem *mapItem;
@property (weak, nonatomic) id <MKPlaceVenueBrowseViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)canDisplayForMapItem:(id)arg1;

- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (_Bool)_canShowWhileLocked;
- (void)viewDidLayoutSubviews;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)setupCollectionView;
- (id)initWithMapItem:(id)arg1;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)infoCardThemeChanged;
- (void)_ppt_postNotificationName:(id)arg1 object:(id)arg2;
- (double)collectionViewBottomPadding;
- (void)updateCellTitleLabelTextColor;
- (int)placeCardTypeForAnalytics;

@end

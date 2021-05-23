/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UIViewController.h>

@class MKMapCamera, MKMapItem, NSArray, NSString, _MKPlaceInlineMapContentView, _MKPlaceViewController;

__attribute__((visibility("hidden")))
@interface MKPlaceInlineMapViewController : UIViewController

{
    _MKPlaceInlineMapContentView *_contentView;
    MKMapItem *_updatingInlineMapItem;
    _Bool _bottomHairlineHidden;
    _Bool _useWindowTrait;
    MKMapItem *_mapItem;
    _MKPlaceViewController *_owner;
    MKMapCamera *_mapCamera;
}

@property (nonatomic) _Bool useWindowTrait;
@property (retain, nonatomic) MKMapCamera *mapCamera;
@property (nonatomic, readonly) NSArray *visibleMapItems;
@property (retain, nonatomic) MKMapItem *mapItem;
@property (nonatomic, getter=isBottomHairlineHidden) _Bool bottomHairlineHidden;
@property (weak, nonatomic) _MKPlaceViewController *owner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)inlineMapWithMapItem:(id)arg1 options:(unsigned long long)arg2;

- (id)snapshot;
- (void)loadView;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)_updateMap;
- (long long)preferredUserInterfaceStyle;
- (id)initWithMKMapItem:(id)arg1;
- (void)_handleTapOnMap;
- (void)updateInlineMapWithRefinedMapItems;
- (void)_updateInlineMapWithRefinedMapItems;
- (struct CGSize)_mapSize;
- (id)traitCollectionForSnapshot;
- (void)_updateSnapshotImage:(id)arg1;
- (void)_launchMaps;

@end

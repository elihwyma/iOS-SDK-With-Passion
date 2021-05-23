/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKPlaceSectionViewController.h>

@class MKMapItem, MKPlaceSectionRowView, NSMutableArray, NSString, UILongPressGestureRecognizer;

@protocol MKPlaceActionManagerProtocol, _MKPlaceItem;

__attribute__((visibility("hidden")))
@interface MKPlaceInfoViewController : MKPlaceSectionViewController

{
    NSMutableArray *_rows;
    UILongPressGestureRecognizer *_longPressRecognizer;
    MKPlaceSectionRowView *_selectedRow;
    _Bool _offlineMode;
    _Bool _bottomHairlineHidden;
    MKMapItem *_mapItem;
    id <MKPlaceActionManagerProtocol> _actionDelegate;
    id <_MKPlaceItem> _placeItem;
}

@property (retain, nonatomic) id <_MKPlaceItem> placeItem;
@property (nonatomic) _Bool bottomHairlineHidden;
@property (nonatomic, readonly) _Bool hasContent;
@property (retain, nonatomic) MKMapItem *mapItem;
@property (weak, nonatomic) id <MKPlaceActionManagerProtocol> actionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool offlineMode;

- (id)contact;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)sectionView:(id)arg1 didSelectRow:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)infoCardChildPossibleActions;
- (id)infoCardChildUnactionableUIElements;
- (id)draggableContent;
- (id)initWithPlaceItem:(id)arg1;
- (void)_rowLongPressed:(id)arg1;
- (void)_updateViewsAnimated:(_Bool)arg1;
- (unsigned long long)actionTypeFromRowType:(unsigned long long)arg1;
- (void)_menuDismissed:(id)arg1;
- (id)_addRowForType:(unsigned long long)arg1 withValue:(id)arg2 toViews:(id)arg3;
- (void)_addContactRow:(id)arg1 ofType:(unsigned long long)arg2 toViews:(id)arg3 defaultTitle:(id)arg4;
- (_Bool)shouldShowDetails;
- (_Bool)_shouldShowSuggestAnEdit;
- (id)_createViewForInfoRow:(unsigned long long)arg1;
- (void)_configureRow:(id)arg1 ofType:(unsigned long long)arg2 withValue:(id)arg3;
- (void)_shareAddress:(id)arg1 fromView:(id)arg2;
- (void)_launchMapsDirectionsWithSource:(id)arg1 destination:(id)arg2 directionsMode:(id)arg3;

@end

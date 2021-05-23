/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKPlaceSectionViewController.h>

@class NSString;

@protocol _MKInfoCardAnalyticsDelegate, _MKPlaceItem;

__attribute__((visibility("hidden")))
@interface MKPlaceMessageViewController : MKPlaceSectionViewController

{
    id <_MKInfoCardAnalyticsDelegate> _analyticsDelegate;
    id <_MKPlaceItem> _placeItem;
}

@property (retain, nonatomic) id <_MKPlaceItem> placeItem;
@property (weak, nonatomic) id <_MKInfoCardAnalyticsDelegate> analyticsDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)sectionView:(id)arg1 didSelectRow:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)infoCardChildPossibleActions;
- (id)infoCardChildUnactionableUIElements;
- (id)initWithPlaceItem:(id)arg1;
- (void)loadRow;

@end

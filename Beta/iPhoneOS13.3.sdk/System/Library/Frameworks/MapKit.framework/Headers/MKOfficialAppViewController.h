/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKPlaceSectionViewController.h>

@class MKMapItem, MKOfficialAppView, MKPlaceSectionHeaderView, NSString;

@protocol MKOfficialAppViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface MKOfficialAppViewController : MKPlaceSectionViewController

{
    _Bool _isShowing;
    MKMapItem *_mapItem;
    id <MKOfficialAppViewControllerDelegate> _officialAppDelegate;
    MKOfficialAppView *_officialAppView;
    MKPlaceSectionHeaderView *_officialAppHeaderView;
}

@property (retain, nonatomic) MKOfficialAppView *officialAppView;
@property (retain, nonatomic) MKPlaceSectionHeaderView *officialAppHeaderView;
@property (nonatomic) _Bool isShowing;
@property (retain, nonatomic) MKMapItem *mapItem;
@property (weak, nonatomic) id <MKOfficialAppViewControllerDelegate> officialAppDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (id)infoCardChildPossibleActions;
- (id)infoCardChildUnactionableUIElements;
- (id)initWithMKMapItem:(id)arg1;
- (void)officialAppViewDidSelectPunchOutButton:(id)arg1;
- (void)_loadOfficialApp;
- (void)updateOfficialViewButtonText;
- (void)_loadAppArtwork:(id)arg1 adamID:(id)arg2;
- (void)_updateView:(id)arg1;
- (void)_updateAppImage:(id)arg1 error:(id)arg2;

@end

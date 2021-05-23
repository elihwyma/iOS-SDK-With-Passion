/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/_MKTableViewController.h>

@class MKMapItem, NSString;

@protocol GEOTransitLineItem, MKTransitAttributionViewControllerDelegate;

@interface MKTransitAttributionViewController : _MKTableViewController

{
    _Bool _isAttributionURLAvailable;
    MKMapItem *_mapItem;
    id <GEOTransitLineItem> _lineItem;
    id <MKTransitAttributionViewControllerDelegate> _delegate;
}

@property (retain, nonatomic) MKMapItem *mapItem;
@property (retain, nonatomic) id <GEOTransitLineItem> lineItem;
@property (weak, nonatomic) id <MKTransitAttributionViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool requiresPreferredContentSizeInStackingView;

- (void)dealloc;
- (void)_commonInit;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)viewDidLayoutSubviews;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (id)_attribution;
- (id)initWithMapItem:(id)arg1;
- (void)_transitInfoUpdated;
- (_Bool)_hasAttribution;
- (id)_attributionCell;
- (void)_presentTransitAttributionDetails;
- (id)initWithTransitLineItem:(id)arg1;

@end

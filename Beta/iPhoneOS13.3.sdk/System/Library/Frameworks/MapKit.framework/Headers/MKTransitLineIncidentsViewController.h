/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/_MKTableViewController.h>

#import <MapKit/Swift-Protocol.h>

@class MKTransitItemIncidentsController, MKTransitItemReferenceDateUpdater, NSDate, NSString;

@protocol GEOTransitLineItem, MKTransitLineIncidentsViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface MKTransitLineIncidentsViewController : _MKTableViewController <Swift>

{
    MKTransitItemIncidentsController *_incidentsController;
    NSDate *_referenceDate;
    id <MKTransitLineIncidentsViewControllerDelegate> _incidentsDelegate;
    id <GEOTransitLineItem> _lineItem;
    MKTransitItemReferenceDateUpdater *_itemUpdater;
}

@property (nonatomic, readonly) id <GEOTransitLineItem> lineItem;
@property (copy, nonatomic, readonly) NSDate *referenceDate;
@property (nonatomic, readonly) MKTransitItemReferenceDateUpdater *itemUpdater;
@property (weak, nonatomic) id <MKTransitLineIncidentsViewControllerDelegate> incidentsDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool requiresPreferredContentSizeInStackingView;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)_incidents;
- (id)initWithLineItem:(id)arg1;
- (void)_showIncidentDetails;
- (void)transitItemReferenceDateUpdater:(id)arg1 didUpdateToReferenceDate:(id)arg2;
- (void)updateTransitLineItemIfNeeded;
- (id)_incidentCellForRow:(long long)arg1;
- (void)transitUIReferenceTimeUpdated:(id)arg1;
- (void)_dismissTransitIncidents;

@end

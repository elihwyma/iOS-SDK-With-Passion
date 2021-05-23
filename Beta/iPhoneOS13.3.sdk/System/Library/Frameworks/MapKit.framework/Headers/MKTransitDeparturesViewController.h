/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/_MKTableViewController.h>

@class MKMapItem, MKTransitDeparturesDataSource, NSString;

@protocol MKTransitDepaturesViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface MKTransitDeparturesViewController : _MKTableViewController

{
    _Bool _allowTransitLineSelection;
    struct CGRect _lastMaxWidthBounds;
    _Bool _isInSiri;
    MKMapItem *_mapItem;
    id <MKTransitDepaturesViewControllerDelegate> _delegate;
    MKTransitDeparturesDataSource *_dataSource;
}

@property (retain, nonatomic) MKMapItem *mapItem;
@property (nonatomic, readonly) MKTransitDeparturesDataSource *dataSource;
@property (nonatomic, readonly) _Bool isInSiri;
@property (weak, nonatomic) id <MKTransitDepaturesViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool requiresPreferredContentSizeInStackingView;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (_Bool)_canShowWhileLocked;
- (void)viewDidLayoutSubviews;
- (void)infoCardThemeChanged;
- (id)infoCardChildPossibleActions;
- (id)infoCardChildUnactionableUIElements;
- (id)initWithMapItem:(id)arg1 allowTransitLineSelection:(_Bool)arg2;
- (int)currentTransitCategory;
- (id)traitsForTransitDeparturesDataSource:(id)arg1;
- (void)transitDeparturesDataSourceDidReload:(id)arg1;
- (struct UIEdgeInsets)separatorInsetsForTransitDeparturesDataSource:(id)arg1;
- (id)separatorColorForTransitDeparturesDataSource:(id)arg1;
- (void)transitDeparturesDataSource:(id)arg1 didSelectConnectionInformation:(id)arg2;
- (void)transitDeparturesDataSource:(id)arg1 showIncidents:(id)arg2;
- (void)transitDeparturesDataSource:(id)arg1 didSelectTransitLine:(id)arg2 fromCell:(id)arg3;
- (void)transitDeparturesDataSource:(id)arg1 didSelectDepartureSequence:(id)arg2 transitStationMapItem:(id)arg3 transitLine:(id)arg4 fromCell:(id)arg5;
- (_Bool)transitDeparturesDataSource:(id)arg1 canSelectDepartureSequence:(id)arg2 transitStationMapItem:(id)arg3 transitLine:(id)arg4 fromCell:(id)arg5;
- (void)transitDeparturesDataSourceDidToggleHiddenSystem:(id)arg1;

@end

/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/_MKTableViewController.h>

@class NSArray;

@interface MKTransitIncidentsViewController : _MKTableViewController

{
    NSArray *_incidents;
}

@property (copy, nonatomic) NSArray *incidents;

- (void)dealloc;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)_updateTitle;
- (void)infoCardThemeChanged;
- (id)initWithIncidents:(id)arg1;
- (void)_localeDidChange;
- (id)_cellForRow:(long long)arg1 inSection:(long long)arg2;

@end

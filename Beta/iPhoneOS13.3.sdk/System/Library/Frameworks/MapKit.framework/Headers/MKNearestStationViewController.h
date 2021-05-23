/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UITableViewController.h>

@class MKMapItem, NSString;

@protocol MKNearestStationViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface MKNearestStationViewController : UITableViewController

{
    NSString *_lineName;
    id <MKNearestStationViewControllerDelegate> _delegate;
    MKMapItem *_nearestStation;
    NSString *_errorMessage;
    unsigned long long _state;
}

@property (weak, nonatomic) id <MKNearestStationViewControllerDelegate> delegate;
@property (retain, nonatomic) MKMapItem *nearestStation;
@property (copy, nonatomic) NSString *errorMessage;
@property (nonatomic) unsigned long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool requiresPreferredContentSizeInStackingView;

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)initWithLineName:(id)arg1;
- (void)transitionToState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (_Bool)_stateHasContentToDisplay;

@end

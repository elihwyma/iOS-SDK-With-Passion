/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UITableViewController.h>

@class NSArray, NSString, NSTimeZone, UISearchController;

@protocol EKTimeZoneViewControllerDelegate;

@interface EKTimeZoneViewController : UITableViewController

{
    UISearchController *_searchController;
    int _style;
    int _chooserStyle;
    id <EKTimeZoneViewControllerDelegate> _delegate;
    NSTimeZone *_timeZone;
    NSArray *_cities;
}

@property (retain, nonatomic) NSArray *cities;
@property (weak, nonatomic) id <EKTimeZoneViewControllerDelegate> delegate;
@property (copy, nonatomic) NSTimeZone *timeZone;
@property (nonatomic, readonly) int chooserStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (struct CGSize)preferredContentSize;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)willDismissSearchController:(id)arg1;
- (id)initWithChooserStyle:(int)arg1;

@end

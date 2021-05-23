/*
 Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

#import <UIKit/UITableViewController.h>

@class NSArray, UILabel, UIView;

@interface HLPHelpSearchResultTableViewController : UITableViewController

{
    UILabel *_footerLabel;
    double _separatorValue;
    NSArray *_searchResults;
    UIView *_footerView;
}

@property (retain, nonatomic) UIView *footerView;
@property (retain, nonatomic) NSArray *searchResults;

- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)preferSeparatorValue:(double)arg1;
- (void)updateWithSearchText:(id)arg1 searchResults:(id)arg2;

@end

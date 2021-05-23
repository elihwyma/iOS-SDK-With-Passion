/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UITableViewController.h>

@class NSCountedSet, NSString, UISearchController, _SFPasswordIconController;

__attribute__((visibility("hidden")))
@interface _SFPasswordTableViewController : UITableViewController

{
    _SFPasswordIconController *_iconController;
    NSCountedSet *_visibleDomains;
    UISearchController *_searchController;
    NSString *_searchPattern;
}

@property (nonatomic, readonly) NSString *searchPattern;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (long long)positionForBar:(id)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)_updateIconForDomain:(id)arg1 forCell:(id)arg2;
- (void)searchPatternDidUpdate;
- (void)iconDidUpdateForDomain:(id)arg1 iconController:(id)arg2;
- (id)initWithStyle:(long long)arg1 siteMetadataManager:(id)arg2 configuration:(id)arg3;

@end

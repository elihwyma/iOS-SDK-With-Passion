/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIViewController.h>

@class NSArray, NSMutableDictionary, NSMutableOrderedSet, NSString, UIImage, UISearchBar, UITableView;

@protocol WFAppSearchViewControllerDelegate;

@interface WFAppSearchViewController : UIViewController

{
    _Bool _allowMultipleSelection;
    id <WFAppSearchViewControllerDelegate> _delegate;
    UITableView *_tableView;
    UISearchBar *_searchBar;
    long long _appSearchType;
    NSArray *_omittedAppBundleIDs;
    NSArray *_apps;
    NSMutableOrderedSet *_selectedApps;
    NSMutableDictionary *_cachedAppIconForBundleId;
    UIImage *_placeholderImage;
}

@property (weak, nonatomic) UITableView *tableView;
@property (weak, nonatomic) UISearchBar *searchBar;
@property (nonatomic, readonly) long long appSearchType;
@property (nonatomic, readonly) NSArray *omittedAppBundleIDs;
@property (nonatomic, readonly) _Bool allowMultipleSelection;
@property (copy, nonatomic) NSArray *apps;
@property (retain, nonatomic) NSMutableOrderedSet *selectedApps;
@property (retain, nonatomic) NSMutableDictionary *cachedAppIconForBundleId;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (weak, nonatomic) id <WFAppSearchViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)cancel;
- (void)done;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)applicationIconImageForBundleIdentifier:(id)arg1;
- (void)updateDoneButtonEnabledState;
- (id)initWithAppSearchType:(long long)arg1;
- (id)initWithAppSearchType:(long long)arg1 allowMultipleSelection:(_Bool)arg2 selectedApps:(id)arg3;
- (id)initWithAppSearchType:(long long)arg1 omittedAppBundleIDs:(id)arg2 allowMultipleSelection:(_Bool)arg3 selectedApps:(id)arg4;
- (void)adjustInsetsForKeyboard;
- (void)loadApps;
- (id)filteredApps;

@end

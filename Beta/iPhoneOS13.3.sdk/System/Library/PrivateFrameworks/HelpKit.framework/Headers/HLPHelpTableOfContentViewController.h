/*
 Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

#import <UIKit/UITableViewController.h>

@class HLPHelpBookController, HLPHelpLocale, HLPHelpSearchIndexController, HLPHelpSearchResultTableViewController, HLPHelpUsageController, NSArray, NSLayoutConstraint, NSMutableArray, NSString, UIButton, UILabel, UISearchController, UIView;

@protocol HLPHelpTableOfContentViewControllerDelegate;

@interface HLPHelpTableOfContentViewController : UITableViewController

{
    UIView *_tableBackgroundView;
    UIView *_tableFooterSeparatorView;
    UILabel *_copyrightFooterLabel;
    UIButton *_footerViewOverlayButton;
    NSLayoutConstraint *_copyrightFooterLabelHeightConstraint;
    NSLayoutConstraint *_copyrightFooterLabelTopConstraint;
    _Bool _fullBookView;
    id <HLPHelpTableOfContentViewControllerDelegate> _delegate;
    NSArray *_searchTerms;
    HLPHelpLocale *_locale;
    HLPHelpBookController *_helpBookController;
    HLPHelpUsageController *_usageController;
    NSMutableArray *_openSections;
    NSMutableArray *_displayHelpItems;
    UISearchController *_searchController;
    UIView *_tableFooterView;
    HLPHelpSearchIndexController *_helpSearchIndexController;
    HLPHelpSearchResultTableViewController *_searchResultTableViewController;
}

@property (retain, nonatomic) NSMutableArray *openSections;
@property (retain, nonatomic) NSMutableArray *displayHelpItems;
@property (retain, nonatomic) UISearchController *searchController;
@property (retain, nonatomic) UIView *tableFooterView;
@property (retain, nonatomic) HLPHelpSearchIndexController *helpSearchIndexController;
@property (retain, nonatomic) HLPHelpSearchResultTableViewController *searchResultTableViewController;
@property (nonatomic) _Bool fullBookView;
@property (weak, nonatomic) id <HLPHelpTableOfContentViewControllerDelegate> delegate;
@property (retain, nonatomic) NSArray *searchTerms;
@property (retain, nonatomic) HLPHelpLocale *locale;
@property (retain, nonatomic) HLPHelpBookController *helpBookController;
@property (retain, nonatomic) HLPHelpUsageController *usageController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithStyle:(long long)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)willPresentSearchController:(id)arg1;
- (void)willDismissSearchController:(id)arg1;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)loadError;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)cancelSpotlightSearchDelay;
- (void)updateFooterViewBackgroundColor;
- (void)scrollToHelpItem:(id)arg1 deselectImmediately:(_Bool)arg2 animated:(_Bool)arg3;
- (void)deselectCurrentRow;
- (void)updateFooterViewLayout;
- (void)updateSearchResultViewSeparatorValue;
- (void)copyrightButtonTapped;
- (void)showHelpBookInfo;
- (void)openHelpItem:(id)arg1 animated:(_Bool)arg2;
- (void)showTopicItem:(id)arg1 fromTableView:(id)arg2;
- (void)appendChildrenForSectionItem:(id)arg1;
- (void)updateCellSelectionWithScollPosition:(long long)arg1 helpItem:(id)arg2 animated:(_Bool)arg3;
- (void)closeSectionItem:(id)arg1;
- (long long)numberOfVisibleHelpItemForSectionItem:(id)arg1;
- (void)spotlightSearchDelay;
- (void)updateWithHelpBookController:(id)arg1;

@end

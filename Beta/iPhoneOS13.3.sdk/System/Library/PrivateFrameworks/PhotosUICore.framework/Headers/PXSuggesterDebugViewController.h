/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UITableViewController.h>

@class NSArray, NSDate, NSDictionary, NSString, PHSuggestion, UIActivityIndicatorView, UIBarButtonItem, UILabel;

@interface PXSuggesterDebugViewController : UITableViewController

{
    NSArray *_heuristicallySortedItems;
    NSArray *_sortedItems;
    NSString *_name;
    NSDictionary *_options;
    PHSuggestion *_currentSuggestion;
    _Bool _fullLibraryIsEnabled;
    NSDate *_date;
    unsigned long long _currentSortCriteria;
    _Bool _showsInvalidItems;
    UIActivityIndicatorView *_spinnerView;
    UILabel *_noResultLabel;
    UIBarButtonItem *_fullLibraryButton;
    UIBarButtonItem *_dateButton;
    UIBarButtonItem *_showInvalidItemsButton;
    UIBarButtonItem *_sortButton;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)refresh;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (id)initWithName:(id)arg1 options:(id)arg2;
- (void)_updateToolbarItems;
- (id)oneUpPresentationDataSourceManager:(id)arg1;
- (id)oneUpPresentationMediaProvider:(id)arg1;
- (long long)oneUpPresentationOrigin:(id)arg1;
- (id)assetsDataSourceManagerForSuggestion:(id)arg1;
- (void)configureCell:(id)arg1 withItem:(id)arg2;
- (void)willStartProcessing;
- (void)didStopProcessing;
- (void)_fetchSuggestions;
- (id)fullLibraryButton;
- (id)dateButton;
- (id)showInvalidItemsButton;
- (id)sortButton;
- (void)didSelectFullLibraryButton:(id)arg1;
- (void)didSelectDateButton:(id)arg1;
- (void)didSelectShowInvalidItemsButton:(id)arg1;
- (void)updateShowInvalidItemsButton;
- (void)didSelectSortButton:(id)arg1;
- (void)_sortItems;
- (id)_stringWithSortCriteria:(unsigned long long)arg1;

@end

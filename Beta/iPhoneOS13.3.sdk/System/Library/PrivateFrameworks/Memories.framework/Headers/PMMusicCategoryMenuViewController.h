/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UITableViewController.h>

@class PMMusicProvider, UIBarButtonItem;

@protocol PMEditProviderDelegate, PMEditorToolbarOwner;

@interface PMMusicCategoryMenuViewController : UITableViewController

{
    PMMusicProvider *musicProvider;
    id <PMEditProviderDelegate> _delegate;
    id <PMEditorToolbarOwner> _toolbarOwner;
    UIBarButtonItem *_filterTypeButton;
}

@property (retain, nonatomic) UIBarButtonItem *filterTypeButton;
@property (retain, nonatomic) PMMusicProvider *musicProvider;
@property (weak, nonatomic) id <PMEditProviderDelegate> delegate;
@property (weak, nonatomic) id <PMEditorToolbarOwner> toolbarOwner;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)popFromNavigationController;
- (void)_addObserverForTextSizeDidChange;
- (void)userTextSizeDidChange;
- (void)addFilterButtonToTopBar;
- (void)changeFilterStyle:(id)arg1;

@end

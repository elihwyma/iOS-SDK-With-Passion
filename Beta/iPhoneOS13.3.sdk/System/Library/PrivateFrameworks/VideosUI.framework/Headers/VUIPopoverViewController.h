/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <TVMLKit/_TVBgImageLoadingViewController.h>

@class NSArray, NSString, UIBarButtonItem, UITableView, VUIPopoverDescriptor;

__attribute__((visibility("hidden")))
@interface VUIPopoverViewController : _TVBgImageLoadingViewController

{
    _Bool _ignoreDismissalOnExpansionOrContraction;
    _Bool _supportsAutoDismiss;
    VUIPopoverDescriptor *_popoverDescriptor;
    long long _expandedRow;
    NSArray *_popoverEntries;
    UIBarButtonItem *_cancelButtonItem;
}

@property (nonatomic) long long expandedRow;
@property (copy, nonatomic) NSArray *popoverEntries;
@property (nonatomic, readonly) UITableView *tableView;
@property (nonatomic, readonly) UIBarButtonItem *cancelButtonItem;
@property (nonatomic, readonly) struct CGSize calculatedPreferredContentSize;
@property (nonatomic, readonly) VUIPopoverDescriptor *popoverDescriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)_updatePreferredContentSize;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_dismissViewControllerAnimated:(_Bool)arg1;
- (id)initWithViewElement:(id)arg1;
- (void)updateWithViewElement:(id)arg1;
- (id)_modalPresenterPresentedViewController;
- (void)_cancelButtonTouchUpInside:(id)arg1;
- (double)_heightForOptionAtRow:(unsigned long long)arg1;

@end

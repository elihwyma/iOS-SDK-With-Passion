/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UIViewController.h>

@class CNUINavigationListItem, CNUINavigationListView, CNUINavigationListViewCellHeightEstimator, NSArray, NSString;

@protocol CNUINavigationListStyle, CNUINavigationListViewControllerDelegate;

@interface CNUINavigationListViewController : UIViewController

{
    _Bool _showFirstSectionTopSeparator;
    _Bool _ignoreParentControllerResize;
    CNUINavigationListView *_navigationListView;
    NSArray *_items;
    CNUINavigationListItem *_expandedItem;
    id <CNUINavigationListViewControllerDelegate> _delegate;
    id <CNUINavigationListStyle> _navigationListStyle;
    long long _contentAlignment;
    CNUINavigationListViewCellHeightEstimator *_cellHeightEstimator;
    CNUINavigationListItem *_displayedExpandedItem;
}

@property (retain, nonatomic) CNUINavigationListView *navigationListView;
@property (retain, nonatomic) CNUINavigationListViewCellHeightEstimator *cellHeightEstimator;
@property (retain, nonatomic) CNUINavigationListItem *displayedExpandedItem;
@property (nonatomic) _Bool ignoreParentControllerResize;
@property (copy, nonatomic) NSArray *items;
@property (retain, nonatomic) CNUINavigationListItem *expandedItem;
@property (weak, nonatomic) id <CNUINavigationListViewControllerDelegate> delegate;
@property (retain, nonatomic) id <CNUINavigationListStyle> navigationListStyle;
@property (nonatomic) long long contentAlignment;
@property (nonatomic) _Bool showFirstSectionTopSeparator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)itemRequiresDetailCell:(id)arg1;

- (id)init;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2;
- (id)itemAtIndex:(long long)arg1;
- (_Bool)navigationListView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (_Bool)navigationListView:(id)arg1 shouldSelectRowAtIndexPath:(id)arg2;
- (void)navigationListView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (void)navigationListView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)styleUpdated;
- (double)cellSeparatorHeight;
- (void)expandItem:(id)arg1;
- (void)toggleItem:(id)arg1;
- (_Bool)canExpandItem:(id)arg1;
- (id)dequeueReusableStandardCell;
- (id)dequeueReusableDetailCell;
- (id)itemAtIndexPath:(id)arg1;
- (id)itemsForItem:(id)arg1;
- (struct CGSize)contentSizeForExpandedItem:(id)arg1;
- (void)updateNavigationListView;
- (void)updateNavigationListViewSeparatorStyle;
- (void)reloadNavigationListView;
- (void)updateNavigationListViewStateAnimated:(_Bool)arg1;
- (_Bool)canSelectItem:(id)arg1;
- (void)startTrackingRolloverWithGestureRecognizer:(id)arg1;
- (void)stopTrackingRollover;

@end

/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UITableViewController.h>

@class NSLayoutConstraint, NSOrderedSet, NSString, PXGadgetSpec;

@protocol PXGadgetDelegate;

__attribute__((visibility("hidden")))
@interface PUSearchRecentSearchesGadget : UITableViewController

{
    PXGadgetSpec *_gadgetSpec;
    id <PXGadgetDelegate> _delegate;
    unsigned long long _accessoryButtonType;
    NSOrderedSet *_recentSearches;
    NSLayoutConstraint *_separatorRegularTrailingConstraint;
    NSLayoutConstraint *_separatorCompactWidthConstraint;
}

@property (copy, nonatomic) NSOrderedSet *recentSearches;
@property (retain, nonatomic) NSLayoutConstraint *separatorRegularTrailingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *separatorCompactWidthConstraint;
@property (nonatomic, readonly) unsigned long long accessoryButtonType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long gadgetType;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec;
@property (weak, nonatomic) id <PXGadgetDelegate> delegate;
@property (nonatomic, readonly) _Bool hasContentToDisplay;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) NSString *accessoryButtonTitle;
@property (nonatomic, readonly) unsigned long long headerStyle;
@property (nonatomic) long long priority;
@property (nonatomic, readonly) _Bool supportsHighlighting;
@property (nonatomic, readonly) _Bool supportsSelection;
@property (nonatomic, readonly) _Bool supportsAssetsDrop;
@property (nonatomic, readonly) Class collectionViewItemClass;
@property (nonatomic) struct CGRect visibleContentRect;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (struct CGSize)contentSize;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)viewDidLoad;
- (struct NSObject *)contentViewController;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)_reloadData;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewLayoutMarginsDidChange;
- (void)userDidSelectAccessoryButton:(struct NSObject *)arg1;
- (void)_updateTableViewLayoutMargins;
- (void)resetLineSeparatorInsets;

@end

/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUNavigationItem.h>

@class NSNumber;

@interface SUDelayedNavigationItem : SUNavigationItem

{
    _Bool _delayedBackButtonHidden;
    id _delayedBackButtonTitle;
    id _delayedLeftBarButtonItems;
    NSNumber *_delayedLeftItemsSupplementBackButton;
    id _delayedTitle;
    id _delayedTitleView;
    id _delayedRightBarButtonItems;
    _Bool _shouldDelayChanges;
    SUNavigationItem *_wrappedNavigationItem;
}

@property (retain, nonatomic) SUNavigationItem *wrappedNavigationItem;
@property (nonatomic) _Bool shouldDelayChanges;

- (void)dealloc;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)navigationBar;
- (id)titleView;
- (void)setTitleView:(id)arg1;
- (id)leftBarButtonItems;
- (id)rightBarButtonItems;
- (id)leftBarButtonItem;
- (id)rightBarButtonItem;
- (_Bool)leftItemsSupplementBackButton;
- (id)backButtonTitle;
- (id)initWithNavigationItem:(id)arg1;
- (void)setLeftBarButtonItem:(id)arg1 animated:(_Bool)arg2;
- (void)setRightBarButtonItem:(id)arg1 animated:(_Bool)arg2;
- (void)setLeftBarButtonItems:(id)arg1 animated:(_Bool)arg2;
- (void)setRightBarButtonItems:(id)arg1 animated:(_Bool)arg2;
- (void)setBackButtonTitle:(id)arg1;
- (void)setHidesBackButton:(_Bool)arg1;
- (void)setLeftItemsSupplementBackButton:(_Bool)arg1;
- (void)setTitleView:(id)arg1 animated:(_Bool)arg2;
- (void)commitDelayedChanges;
- (void)_prepareButtonItemForDisplay:(id)arg1;
- (void)_scheduleCommit;

@end

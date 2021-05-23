/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UIResponder.h>

@class NSMutableSet, NSOrderedSet, NSString, SFDownloadsBarButtonItem, UIBarButtonItem, UIToolbar, _SFBarManager;

__attribute__((visibility("hidden")))
@interface SFBarRegistration : UIResponder

{
    NSOrderedSet *_arrangedBarItems;
    UIToolbar *_bar;
    _SFBarManager *_barManager;
    UIBarButtonItem *_backItem;
    UIBarButtonItem *_bookmarksItem;
    UIBarButtonItem *_forwardItem;
    UIBarButtonItem *_newTabItem;
    UIBarButtonItem *_shareItem;
    UIBarButtonItem *_tabExposeItem;
    UIBarButtonItem *_openInSafariItem;
    SFDownloadsBarButtonItem *_downloadsItem;
    NSMutableSet *_hiddenBarItems;
    NSOrderedSet *_lastCommittedArrangedBarItems;
    long long _layout;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)containsBarItem:(long long)arg1;
- (id)_newBarButtonItemForSFBarItem:(long long)arg1;
- (void)_itemReceivedLongPress:(id)arg1;
- (void)_itemReceivedTouchDown:(id)arg1;
- (void)_itemReceivedTap:(id)arg1;
- (long long)_barItemForUIBarButtonItem:(id)arg1;
- (id)_UIBarButtonItemForBarItem:(long long)arg1;
- (_Bool)_arrangedBarItemsNeedUpdate;
- (id)_effectiveArrangedBarItems;
- (id)_UIBarButtonItemsForArrangedBarItems:(id)arg1;
- (void)updateArrangedUIBarButtonItemsIfNeeded;
- (id)UIBarButtonItemForItem:(long long)arg1;
- (id)popoverSourceInfoForItem:(long long)arg1;
- (id)initWithBar:(id)arg1 barManager:(id)arg2 layout:(long long)arg3 persona:(unsigned long long)arg4;
- (void)setBookmarksItemSelected:(_Bool)arg1;
- (void)setDownloadsItemProgress:(double)arg1;
- (void)pulseDownloadsItem;
- (void)setBarItem:(long long)arg1 enabled:(_Bool)arg2;
- (void)setBarItem:(long long)arg1 hidden:(_Bool)arg2;

@end

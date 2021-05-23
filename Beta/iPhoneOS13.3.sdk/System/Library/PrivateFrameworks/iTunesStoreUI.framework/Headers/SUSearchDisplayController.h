/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <UIKit/UISearchDisplayController.h>

@interface SUSearchDisplayController : UISearchDisplayController

{
    _Bool _store_navigationBarHidingEnabled;
}

- (void)_updateSearchBarMaskIfNecessary;
- (_Bool)isNavigationBarHidingEnabled;
- (void)setActive:(_Bool)arg1 animated:(_Bool)arg2;
- (id)_createPopoverController;
- (void)setNavigationBarHidingEnabled:(_Bool)arg1;
- (void)_noEventSetSearchFieldText:(id)arg1;

@end

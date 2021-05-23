/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUMenuViewController.h>

@class SUNavigationMenu;

@interface SUNavigationMenuViewController : SUMenuViewController

{
    SUNavigationMenu *_navigationMenu;
}

@property (nonatomic, readonly) SUNavigationMenu *navigationMenu;

- (id)init;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_cancelAction:(id)arg1;
- (long long)numberOfMenuItems;
- (id)initWithNavigationMenu:(id)arg1;
- (id)titleOfMenuItemAtIndex:(long long)arg1;
- (void)_protocolButtonAction:(id)arg1;

@end

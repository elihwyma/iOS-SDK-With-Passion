/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUMenuViewController.h>

@class NSArray, SUScriptFunction;

@interface SUNativeScriptMenuViewController : SUMenuViewController

{
    SUScriptFunction *_action;
    NSArray *_menuItems;
}

@property (retain, nonatomic) SUScriptFunction *action;
@property (retain, nonatomic) NSArray *menuItems;

- (void)dealloc;
- (long long)numberOfMenuItems;
- (id)copyScriptViewController;
- (void)performActionForMenuItemAtIndex:(long long)arg1;
- (id)titleOfMenuItemAtIndex:(long long)arg1;
- (_Bool)isMenuItemEnabledAtIndex:(long long)arg1;

@end

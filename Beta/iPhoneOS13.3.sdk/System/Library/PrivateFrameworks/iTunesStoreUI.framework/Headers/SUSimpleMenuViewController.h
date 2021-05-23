/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUMenuViewController.h>

@class NSArray, NSString;

@interface SUSimpleMenuViewController : SUMenuViewController

{
    NSString *_cancelButtonTitle;
    NSArray *_titles;
}

@property (copy, nonatomic) NSArray *titles;
@property (copy, nonatomic) NSString *cancelButtonTitle;

- (void)dealloc;
- (void)_cancelAction:(id)arg1;
- (id)initWithTitles:(id)arg1;
- (long long)numberOfMenuItems;
- (void)reloadContentSizeForViewInPopover;
- (id)titleOfMenuItemAtIndex:(long long)arg1;
- (_Bool)isMenuItemEnabledAtIndex:(long long)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class NSArray, NSString, SKUIMenuViewController, UIButton, UILabel, UIPopoverController;

@protocol SKUIPopupMenuDelegate;

__attribute__((visibility("hidden")))
@interface SKUIPopupMenuHeaderView : UIView

{
    id <SKUIPopupMenuDelegate> _delegate;
    UIButton *_menuButton;
    UILabel *_menuLabel;
    NSString *_menuLabelTitle;
    NSArray *_menuItemTitles;
    SKUIMenuViewController *_menuViewController;
    UIPopoverController *_menuPopoverController;
    long long _selectedMenuItemIndex;
    UILabel *_titleLabel;
}

@property (weak, nonatomic) id <SKUIPopupMenuDelegate> delegate;
@property (copy, nonatomic) NSArray *menuItemTitles;
@property (copy, nonatomic) NSString *menuLabelTitle;
@property (nonatomic) long long selectedMenuItemIndex;
@property (copy, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)_titleLabel;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)setColoringWithColorScheme:(id)arg1;
- (void)_menuButtonAction:(id)arg1;
- (void)menuViewController:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)_reloadMenuButton;

@end

/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIControl.h>

@class NSArray, NSString, SKUIClientContext, SKUIColorScheme, UIButton, UILabel, UIPopoverController, UIView;

__attribute__((visibility("hidden")))
@interface SKUIIPadCustomerReviewsHeaderView : UIControl

{
    UIButton *_appSupportButton;
    SKUIClientContext *_clientContext;
    SKUIColorScheme *_colorScheme;
    UIPopoverController *_sortPopoverController;
    long long _selectedSortIndex;
    UIView *_separatorView;
    UIButton *_sortButton;
    UILabel *_sortLabel;
    NSArray *_sortTitles;
    UILabel *_titleLabel;
    UIButton *_writeAReviewButton;
}

@property (retain, nonatomic) SKUIColorScheme *colorScheme;
@property (nonatomic, readonly) UIControl *appSupportButton;
@property (nonatomic, readonly) UIControl *writeAReviewButton;
@property (nonatomic) long long selectedSortIndex;
@property (copy, nonatomic) NSArray *sortTitles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)setBackgroundColor:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithClientContext:(id)arg1;
- (void)menuViewController:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)_reloadSortButton;
- (void)_destroySortPopoverController;
- (void)_sortButtonAction:(id)arg1;

@end

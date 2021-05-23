/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewReuseView.h>

@class NSMapTable, NSMutableArray, NSString, SKUIDividerView, SKUIMenuPopoverController, UIControl;

__attribute__((visibility("hidden")))
@interface SKUIFilterBarView : SKUIViewReuseView

{
    SKUIDividerView *_bottomDividerView;
    NSMutableArray *_centerElementViews;
    struct UIEdgeInsets _contentInset;
    NSMutableArray *_elementControllers;
    UIControl *_focusedMenuButton;
    NSMutableArray *_leftElementViews;
    SKUIMenuPopoverController *_popoverController;
    NSMutableArray *_rightElementViews;
    NSMapTable *_viewElementViews;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;
+ (id)_attributedStringForButton:(id)arg1 context:(id)arg2;
+ (id)_attributedStringForLabel:(id)arg1 context:(id)arg2;
+ (id)_attributedStringForMenuItem:(id)arg1 context:(id)arg2;
+ (id)_attributedStringForButtonText:(id)arg1 style:(id)arg2 context:(id)arg3;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;
- (id)viewForElementIdentifier:(id)arg1;
- (void)_buttonAction:(id)arg1;
- (void)_cancelConfirmationAction:(id)arg1;
- (void)_showConfirmationAction:(id)arg1;
- (void)_imageTapAction:(id)arg1;
- (void)_menuButtonAction:(id)arg1;
- (void)_destroyMenuPopover;
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;
- (void)menuPopoverDidCancel:(id)arg1;
- (void)menuPopover:(id)arg1 didSelectMenuItemAtIndex:(long long)arg2;
- (void)menuPopover:(id)arg1 willRepositionToRect:(inout struct CGRect *)arg2 inView:(inout id *)arg3;

@end

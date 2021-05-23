/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewReuseView.h>

@class NSArray, NSMapTable, NSMutableArray, NSString, SKUIListViewElement, SKUIMenuPopoverController, UIControl;

__attribute__((visibility("hidden")))
@interface SKUIHorizontalListView : SKUIViewReuseView

{
    NSMutableArray *_artworkRequestPassthroughViews;
    struct UIEdgeInsets _contentInset;
    struct UIEdgeInsets _bigHitInsets;
    double _elementSpacing;
    UIControl *_focusedMenuButton;
    NSMapTable *_imageViewToImageResourceCacheKey;
    NSArray *_lines;
    SKUIListViewElement *_listElement;
    SKUIMenuPopoverController *_popoverController;
    _Bool _useBigHitTarget;
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
+ (struct CGSize)_sizeForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (id)_attributedStringForMenuItem:(id)arg1 context:(id)arg2;
+ (id)_linesWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (double)_elementSpacingForViewElement:(id)arg1;
+ (double)_lineSpacingForLineElements:(id)arg1;
+ (id)_attributedStringForButtonText:(id)arg1 type:(long long)arg2 style:(id)arg3 context:(id)arg4;
+ (double)_lineSpacingForViewElement:(id)arg1;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (struct CGRect)hitRect;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;
- (id)viewForElementIdentifier:(id)arg1;
- (void)_buttonAction:(id)arg1;
- (void)_imageTapAction:(id)arg1;
- (void)_menuButtonAction:(id)arg1;
- (void)_destroyMenuPopover;
- (void)menuPopoverDidCancel:(id)arg1;
- (void)menuPopover:(id)arg1 didSelectMenuItemAtIndex:(long long)arg2;
- (void)menuPopover:(id)arg1 willRepositionToRect:(inout struct CGRect *)arg2 inView:(inout id *)arg3;
- (id)_viewElementForView:(id)arg1;

@end

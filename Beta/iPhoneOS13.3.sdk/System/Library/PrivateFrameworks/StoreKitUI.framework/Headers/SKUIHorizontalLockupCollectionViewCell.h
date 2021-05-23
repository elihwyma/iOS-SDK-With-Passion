/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUICollectionViewCell.h>

@class NSString, SKUIButtonViewElement, SKUICellScrollView, SKUICheckboxInputViewElement, SKUIHorizontalLockupView, UIButton, UIColor, UIImageView, UIView;

__attribute__((visibility("hidden")))
@interface SKUIHorizontalLockupCollectionViewCell : SKUICollectionViewCell

{
    UIButton *_actionButton;
    SKUIButtonViewElement *_actionButtonViewElement;
    SKUICellScrollView *_actionsScrollView;
    struct UIEdgeInsets _contentInset;
    SKUICheckboxInputViewElement *_editModeCheckboxElement;
    UIImageView *_editModeControl;
    UIView *_highlightBackgroundView;
    SKUIHorizontalLockupView *_lockupView;
    UIColor *_lockupViewBackgroundColor;
}

@property (nonatomic) struct UIEdgeInsets contentInset;
@property (nonatomic, readonly, getter=isScrollingCellToHideActionButton) _Bool scrollingCellToHideActionButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;
+ (double)maximumPerspectiveHeightForSize:(struct CGSize)arg1;

- (void)dealloc;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)applyLayoutAttributes:(id)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;
- (id)viewForElementIdentifier:(id)arg1;
- (void)setPerspectiveTargetView:(id)arg1;
- (void)setVanishingPoint:(struct CGPoint)arg1;
- (void)updateForChangedDistanceFromVanishingPoint;
- (_Bool)isDeleteButtonHidden;
- (void)hideDeleteButton;
- (void)_removeEditControlAnimated:(_Bool)arg1;
- (void)_addEditControlAnimated:(_Bool)arg1;
- (_Bool)_isActionsScrollViewEnabled;
- (void)_reloadActionsScrollViewWithViewElement:(id)arg1 context:(id)arg2;
- (id)_editControlImage;
- (void)_reloadHighlightBackgroundView;
- (void)_reloadLockupViewBackgroundColor;
- (void)_actionButtonAction:(id)arg1;
- (id)_attributedStringForActionButton:(id)arg1 context:(id)arg2;
- (id)_highlightBackgroundColor;

@end

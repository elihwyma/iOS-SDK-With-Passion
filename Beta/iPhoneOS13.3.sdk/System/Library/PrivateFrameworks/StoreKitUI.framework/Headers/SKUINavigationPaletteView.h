/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewReuseView.h>

@class NSHashTable, NSMapTable, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface SKUINavigationPaletteView : SKUIViewReuseView

{
    NSHashTable *_artworkRelatedChildViewElementViews;
    struct UIEdgeInsets _contentInset;
    NSMapTable *_imageViewToImageResourceCacheKey;
    NSMutableArray *_segmentedControls;
    NSMutableArray *_stretchViews;
    long long _verticalAlignment;
    NSMapTable *_viewElementViews;
    NSMapTable *_viewSpacings;
}

@property (nonatomic) long long verticalAlignment;
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
+ (id)_attributedStringForText:(id)arg1 style:(id)arg2 context:(id)arg3;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;
- (id)viewForElementIdentifier:(id)arg1;
- (void)_buttonAction:(id)arg1;

@end

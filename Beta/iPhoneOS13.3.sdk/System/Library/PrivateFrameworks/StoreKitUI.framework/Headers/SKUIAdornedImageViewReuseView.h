/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewReuseView.h>

@class NSMapTable, NSString, SKUIImageViewElement, SKUIPlayButton;

__attribute__((visibility("hidden")))
@interface SKUIAdornedImageViewReuseView : SKUIViewReuseView

{
    NSMapTable *_imageViewToImageResourceCacheKey;
    SKUIImageViewElement *_imageViewElement;
    SKUIPlayButton *_playButton;
    unsigned long long _playButtonPosition;
    NSMapTable *_viewElementViews;
}

@property (nonatomic, readonly) SKUIPlayButton *playButton;
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
+ (id)_attributedStringForButtonText:(id)arg1 type:(long long)arg2 style:(id)arg3 context:(id)arg4;

- (id)init;
- (void)layoutSubviews;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;
- (id)viewForElementIdentifier:(id)arg1;
- (void)_buttonAction:(id)arg1;
- (void)mediaPlayer:(id)arg1 itemStateChanged:(id)arg2;
- (struct CGRect)frameForView:(id)arg1;

@end

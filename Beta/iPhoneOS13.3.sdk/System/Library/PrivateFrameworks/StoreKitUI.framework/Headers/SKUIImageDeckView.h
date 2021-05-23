/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewReuseView.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSArray, NSMapTable, NSString, SKUIImageDeckViewElement, UIDynamicAnimator, UIView;

__attribute__((visibility("hidden")))
@interface SKUIImageDeckView : SKUIViewReuseView <Swift>

{
    UIDynamicAnimator *_animator;
    double _fitWidth;
    SKUIImageDeckViewElement *_imageDeckViewElement;
    NSMapTable *_viewElementViews;
    NSArray *_imageViews;
    NSMapTable *_imageViewToImageResourceCacheKey;
    UIView *_selectedImageView;
    unsigned long long _selectedImageViewIndex;
    struct UIEdgeInsets _contentInset;
}

@property (retain, nonatomic) NSArray *imageViews;
@property (nonatomic) struct UIEdgeInsets contentInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;

- (id)init;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;
- (id)viewForElementIdentifier:(id)arg1;
- (void)_layoutImages;

@end

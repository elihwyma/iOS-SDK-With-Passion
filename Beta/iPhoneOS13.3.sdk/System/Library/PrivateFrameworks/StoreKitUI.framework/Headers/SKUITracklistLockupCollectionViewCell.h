/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewReuseCollectionViewCell.h>

@class NSMapTable, NSMutableDictionary, NSString, SKUIGradientView, SKUIPreviewProgressIndicator, SKUITrackViewElement, SKUITracklistColumnData, SUPlayerStatus, UIView;

__attribute__((visibility("hidden")))
@interface SKUITracklistLockupCollectionViewCell : SKUIViewReuseCollectionViewCell

{
    NSMapTable *_buyButtonDescriptorToButton;
    SKUITracklistColumnData *_columnData;
    NSMutableDictionary *_columnViewsByIndex;
    NSMapTable *_imageViewToImageResourceCacheKey;
    SUPlayerStatus *_lastPlayerStatus;
    SKUIGradientView *_offerConfirmationGradientView;
    SKUIPreviewProgressIndicator *_previewProgressIndicator;
    long long _previewState;
    UIView *_separatorView;
    SKUITrackViewElement *_track;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;
+ (id)_attributedStringForOrdinal:(id)arg1 context:(id)arg2;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;
- (id)viewForElementIdentifier:(id)arg1;
- (void)_buttonAction:(id)arg1;
- (void)_cancelConfirmationAction:(id)arg1;
- (void)_showConfirmationAction:(id)arg1;
- (void)itemOfferButtonDidAnimateTransition:(id)arg1;
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;
- (void)showPreviewProgressWithStatus:(id)arg1 animated:(_Bool)arg2;
- (void)_audioPlayerStatusChangeNotification:(id)arg1;
- (id)_addFlipContainerViewWithFrontView:(id)arg1 backView:(id)arg2;
- (void)_resolvePreviewStateAfterTransitionForFlipView:(id)arg1;
- (id)_previewMediaURL;
- (void)hidePreviewProgressAnimated:(_Bool)arg1;
- (void)togglePreviewPlaybackAnimated:(_Bool)arg1;
- (id)_previewColumnView;
- (id)_previewControlViewElement;
- (void)_enumerateViewElementViewsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_layoutConfirmationGradientRelativeToView:(id)arg1 alpha:(double)arg2;

@end

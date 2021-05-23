/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewReuseView.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSHashTable, NSMapTable, NSMutableArray, NSString, SKUIBadgeViewElement, SKUIGradientView, SKUIHorizontalLockupLayout, SKUILockupViewElement, SKUIPlayButton, SKUIPreviewProgressIndicator, SUPlayerStatus, UIColor, UITapGestureRecognizer, UIView;

__attribute__((visibility("hidden")))
@interface SKUIHorizontalLockupView : SKUIViewReuseView <Swift>

{
    NSHashTable *_artworkRelatedChildViewElementViews;
    SKUIBadgeViewElement *_badge;
    NSMapTable *_buyButtonDescriptorToButton;
    struct UIEdgeInsets _contentInset;
    NSMapTable *_cacheKeyToImageView;
    SUPlayerStatus *_lastPlayerStatus;
    SKUIHorizontalLockupLayout *_layout;
    SKUILockupViewElement *_lockupElement;
    UIView *_metadataBackgroundView;
    SKUIGradientView *_offerConfirmationGradientView;
    NSHashTable *_offerViews;
    SKUIPlayButton *_playButton;
    SKUIPreviewProgressIndicator *_previewProgressIndicator;
    long long _previewState;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSMutableArray *_tappableViews;
    _Bool _useClearBackground;
    NSMapTable *_viewElementViews;
    _Bool _updateLayoutOnButtonConfirmation;
    UIColor *_gradientColor;
}

@property (retain, nonatomic) UIView *metadataBackgroundView;
@property (retain, nonatomic) UIColor *gradientColor;
@property (nonatomic) _Bool updateLayoutOnButtonConfirmation;
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
+ (double)maximumPerspectiveHeightForSize:(struct CGSize)arg1;
+ (void)_requestLayoutForViewElements:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (_Bool)_usesEditorialLayoutForLabelViewElement:(id)arg1;
+ (id)_attributedStringForOrdinal:(id)arg1 context:(id)arg2;

- (void)dealloc;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;
- (id)viewForElementIdentifier:(id)arg1;
- (void)_buttonAction:(id)arg1;
- (void)setPerspectiveTargetView:(id)arg1;
- (void)setVanishingPoint:(struct CGPoint)arg1;
- (void)updateForChangedDistanceFromVanishingPoint;
- (void)_cancelConfirmationAction:(id)arg1;
- (void)_showConfirmationAction:(id)arg1;
- (void)itemOfferButtonDidAnimateTransition:(id)arg1;
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;
- (id)_viewElementForView:(id)arg1;
- (_Bool)offerViewAnimateTransition:(id)arg1;
- (void)offerViewDidAnimateTransition:(id)arg1;
- (void)offerViewWillAnimateTransition:(id)arg1;
- (void)showPreviewProgressWithStatus:(id)arg1 animated:(_Bool)arg2;
- (void)_audioPlayerStatusChangeNotification:(id)arg1;
- (double)_dividerHeight:(id)arg1;
- (void)setContainerBackgroundImageForPlayButton:(id)arg1;
- (id)_previewFrontView;
- (id)_addFlipContainerViewWithFrontView:(id)arg1 backView:(id)arg2;
- (void)_resolvePreviewStateAfterTransitionForFlipView:(id)arg1;
- (id)_previewProgressIndicator;
- (id)_previewMediaURL;
- (void)hidePreviewProgressAnimated:(_Bool)arg1;
- (_Bool)_usesBackgroundWithAlpha;
- (void)_tapGestureAction:(id)arg1;
- (struct CGSize)_sizeViewsForColumn:(id)arg1 toFitWidth:(double)arg2;
- (void)_animateButton:(id)arg1;
- (void)_resizeMetadataRelativeToItemOfferView:(id)arg1;
- (void)_layoutConfirmationGradientRelativeToItemOfferView:(id)arg1 alpha:(double)arg2;
- (void)_addConfirmationGradientForView:(id)arg1;
- (void)_handlePlayButtonTap:(id)arg1 element:(id)arg2;
- (void)togglePreviewPlaybackAnimated:(_Bool)arg1;
- (void)_performDefaultActionForImage:(id)arg1;
- (void)_expandEditorialForLabel:(id)arg1;
- (id)_columnForView:(id)arg1;
- (void)_previewIndicatorAction:(id)arg1;
- (void)mediaPlayer:(id)arg1 itemStateChanged:(id)arg2;
- (void)toggleButtonDidAnimateTransition:(id)arg1;
- (void)toggleButtonWillAnimateTransition:(id)arg1;
- (id)preferredBackgroundColor;

@end

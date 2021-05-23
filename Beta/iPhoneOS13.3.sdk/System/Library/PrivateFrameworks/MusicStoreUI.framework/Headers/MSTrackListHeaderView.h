/*
 Image: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
 */

#import <UIView.h>

@class SUItem, SUItemOfferButton, SUReflectionImageView, SUTouchCaptureView, UIImage, UILabel;

@protocol MSTrackListHeaderDelegate;

@interface MSTrackListHeaderView : UIView

{
    id <MSTrackListHeaderDelegate> _delegate;
    UIImage *_artworkImage;
    SUItem *_item;
    UILabel *_albumLabel;
    UILabel *_artistLabel;
    UILabel *_disclaimerLabel;
    UILabel *_itemCountLabel;
    UILabel *_releaseDateLabel;
    SUReflectionImageView *_artworkView;
    SUItemOfferButton *_offerButton;
    SUTouchCaptureView *_touchCaptureView;
}

@property (retain, nonatomic) UIImage *artworkImage;
@property (nonatomic) id <MSTrackListHeaderDelegate> delegate;
@property (retain, nonatomic) SUItem *item;

- (void)dealloc;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)sizeToFit;
- (void)reloadView;
- (void)_touchCaptureAction:(id)arg1;
- (void)_purchasesChangedNotification:(id)arg1;
- (void)_reloadAlbumLabel;
- (void)_reloadArtistLabel;
- (void)_reloadArtworkView;
- (void)_reloadDisclaimerLabel;
- (void)_reloadItemCountLabel;
- (void)_reloadOfferButton;
- (void)_reloadReleaseDateLabel;
- (struct CGSize)_sizeThatFitsLabel:(id)arg1 size:(struct CGSize)arg2 numberOfLines:(long long)arg3;
- (void)_showPurchaseConfirmation;
- (void)_hidePurchaseConfirmation;
- (void)_performPurchaseAnimation;
- (void)_setShowingPurchaseConfirmation:(_Bool)arg1;
- (id)_newGenericSmallFontLabel;
- (void)_offerButtonAction:(id)arg1;

@end

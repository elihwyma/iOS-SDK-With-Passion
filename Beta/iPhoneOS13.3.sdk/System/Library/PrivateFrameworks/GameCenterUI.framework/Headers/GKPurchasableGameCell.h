/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKBaseGameCell.h>

@class GKRatingView, GKStoreItemInternal, UILabel;

@interface GKPurchasableGameCell : GKBaseGameCell

{
    float _capturedRating;
    GKStoreItemInternal *_storeItem;
    UILabel *_developerLabel;
    UILabel *_priceLabel;
    GKRatingView *_ratingStarsView;
    UILabel *_numberRatings;
}

@property (retain, nonatomic) GKStoreItemInternal *storeItem;
@property (retain, nonatomic) UILabel *developerLabel;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) GKRatingView *ratingStarsView;
@property (nonatomic) float capturedRating;
@property (retain, nonatomic) UILabel *numberRatings;

- (void)dealloc;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)didUpdateModel;
- (_Bool)canRemoveItem;
- (void)establishConstraints;

@end

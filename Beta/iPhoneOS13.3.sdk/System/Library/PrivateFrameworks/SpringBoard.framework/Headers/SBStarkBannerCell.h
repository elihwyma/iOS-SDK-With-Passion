/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBCollectionViewCell.h>

@class MTMaterialShadowView, SBBannerContextView, UIView;

@protocol SBStarkNotificationsConfiguring;

@interface SBStarkBannerCell : SBCollectionViewCell

{
    id <SBStarkNotificationsConfiguring> _starkNotificationsConfiguration;
    MTMaterialShadowView *_materialView;
    UIView *_strokeView;
    SBBannerContextView *_bannerContextView;
}

@property (retain, nonatomic) id <SBStarkNotificationsConfiguring> starkNotificationsConfiguration;
@property (retain, nonatomic) SBBannerContextView *bannerContextView;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)canBecomeFirstResponder;
- (_Bool)_disableRasterizeInAnimations;
- (id)bannerContext;
- (void)setBannerContext:(id)arg1;
- (void)noteWillDismissWithReason:(int)arg1;
- (void)noteWillAppear;
- (void)noteDidAppear;
- (void)noteDidDismiss;

@end

/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UICollectionViewCell.h>

@class CALayer, CKNicknameBannerView, UIButton;

@protocol CKNicknameUpdatesCollectionViewCellDelegate;

__attribute__((visibility("hidden")))
@interface CKNicknameUpdatesCollectionViewCell : UICollectionViewCell

{
    id <CKNicknameUpdatesCollectionViewCellDelegate> _delegate;
    CKNicknameBannerView *_bannerView;
    UIButton *_updateButton;
    UIButton *_ignoreButton;
    CALayer *_topKeyline;
    CALayer *_bottomKeyline;
    unsigned long long _order;
}

@property (nonatomic) id <CKNicknameUpdatesCollectionViewCellDelegate> delegate;
@property (retain, nonatomic) CKNicknameBannerView *bannerView;
@property (retain, nonatomic) UIButton *updateButton;
@property (retain, nonatomic) UIButton *ignoreButton;
@property (retain, nonatomic) CALayer *topKeyline;
@property (retain, nonatomic) CALayer *bottomKeyline;
@property (nonatomic) unsigned long long order;

+ (id)reuseIdentifier;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)_updateButtonTapped:(id)arg1;
- (void)_ignoreButtonTapped:(id)arg1;
- (void)configureWithNicknameUpdate:(id)arg1;

@end

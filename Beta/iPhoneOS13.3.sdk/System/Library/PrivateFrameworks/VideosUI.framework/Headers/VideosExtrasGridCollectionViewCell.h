/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UICollectionViewCell.h>

@class IKLockupElement, MPUContentSizeLayoutConstraint, NSLayoutConstraint, UILabel, UIView, VideosExtrasConstrainedArtworkContainerView;

__attribute__((visibility("hidden")))
@interface VideosExtrasGridCollectionViewCell : UICollectionViewCell

{
    UIView *_spacerView;
    NSLayoutConstraint *_artworkContainerWidthConstraint;
    NSLayoutConstraint *_artworkContainerHeightConstraint;
    MPUContentSizeLayoutConstraint *_topLineHeight;
    MPUContentSizeLayoutConstraint *_subtitleLineHeight;
    NSLayoutConstraint *_spacerHeight;
    NSLayoutConstraint *_spacerTop;
    IKLockupElement *_lockupElement;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    VideosExtrasConstrainedArtworkContainerView *_artworkContainer;
}

@property (nonatomic, readonly) VideosExtrasConstrainedArtworkContainerView *artworkContainer;
@property (weak, nonatomic) IKLockupElement *lockupElement;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)configureForLockup:(id)arg1 cellStyle:(id)arg2 withSizing:(_Bool)arg3;
- (void)configureForLockup:(id)arg1 cellStyle:(id)arg2;

@end

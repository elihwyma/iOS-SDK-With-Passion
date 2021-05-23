/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UITableViewCell.h>

@class IKListItemLockupElement, MPUContentSizeLayoutConstraint, NSArray, NSLayoutConstraint, UILabel, UIView, VideosExtrasConstrainedArtworkContainerView;

__attribute__((visibility("hidden")))
@interface VideosExtrasTableViewCell : UITableViewCell

{
    VideosExtrasConstrainedArtworkContainerView *_artworkContainer;
    UIView *_textContainerView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    NSLayoutConstraint *_minimumHeightConstraint;
    NSArray *_topConstraints;
    NSArray *_bottomConstraints;
    NSLayoutConstraint *_leadingViewConstraint;
    NSLayoutConstraint *_artworkSpacerHeightConstraint;
    NSLayoutConstraint *_textSpacerHeightConstraint;
    NSLayoutConstraint *_artworkWidthConstraint;
    NSLayoutConstraint *_artworkHeightConstraint;
    NSLayoutConstraint *_textLeadingConstraint;
    NSLayoutConstraint *_textTrailingConstraint;
    NSLayoutConstraint *_topLabelConstraint;
    MPUContentSizeLayoutConstraint *_subtitleBaselineConstraint;
    NSLayoutConstraint *_bottomLabelConstraint;
    IKListItemLockupElement *_element;
}

@property (nonatomic) IKListItemLockupElement *element;
@property (nonatomic, readonly) VideosExtrasConstrainedArtworkContainerView *artworkContainerView;

- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)configureForListItemLockupElement:(id)arg1 wide:(_Bool)arg2;

@end

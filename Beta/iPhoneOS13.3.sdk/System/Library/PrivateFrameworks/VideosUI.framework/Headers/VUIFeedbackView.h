/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIView.h>

@class TVRatingBadgeView, VUIFeedbackLayout, VUILabel, _TVImageView;

__attribute__((visibility("hidden")))
@interface VUIFeedbackView : UIView

{
    VUIFeedbackLayout *_layout;
    UIView *_headerView;
    VUILabel *_headerSubtitleLabel;
    _TVImageView *_headerBadgeView;
    VUILabel *_sourceLabel;
    _TVImageView *_sourceBadgeView;
    TVRatingBadgeView *_ratingView;
    UIView *_descriptionView;
    VUILabel *_prototypeSubtitleLabel;
    VUILabel *_prototypeHeaderLabel;
    struct CGSize _headerBadgeSize;
    struct CGSize _sourceBadgeSize;
}

@property (retain, nonatomic) VUILabel *prototypeSubtitleLabel;
@property (retain, nonatomic) VUILabel *prototypeHeaderLabel;
@property (retain, nonatomic) VUIFeedbackLayout *layout;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) VUILabel *headerSubtitleLabel;
@property (retain, nonatomic) _TVImageView *headerBadgeView;
@property (retain, nonatomic) VUILabel *sourceLabel;
@property (retain, nonatomic) _TVImageView *sourceBadgeView;
@property (retain, nonatomic) TVRatingBadgeView *ratingView;
@property (retain, nonatomic) UIView *descriptionView;
@property (nonatomic) struct CGSize headerBadgeSize;
@property (nonatomic) struct CGSize sourceBadgeSize;

+ (id)headerBadgeViewWithImageElement:(id)arg1 layout:(id)arg2 existingView:(id)arg3;
+ (id)headerImageViewWithString:(id)arg1 layout:(id)arg2 existingView:(id)arg3;
+ (id)headerTitleViewWithString:(id)arg1 layout:(id)arg2 existingView:(id)arg3;
+ (id)headerSubtitleLabelWithString:(id)arg1 layout:(id)arg2 existingView:(id)arg3;
+ (id)sourceBadgeViewWithImageElement:(id)arg1 layout:(id)arg2 existingView:(id)arg3;
+ (id)sourceLabelWithString:(id)arg1 layout:(id)arg2 existingView:(id)arg3;
+ (id)descriptionViewWithElement:(id)arg1 layout:(id)arg2 existingView:(id)arg3;
+ (struct CGSize)_scaledBadgeSizeWithImageLayout:(id)arg1 traitCollection:(id)arg2;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)prepareForCellReuse;

@end

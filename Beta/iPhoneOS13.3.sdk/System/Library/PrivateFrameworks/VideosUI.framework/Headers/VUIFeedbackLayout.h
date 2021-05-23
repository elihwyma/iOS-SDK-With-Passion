/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <TVMLKit/TVViewLayout.h>

@class TVImageLayout, TVRatingBadgeLayout, UIColor, VUIFeedbackTableLayout, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIFeedbackLayout : TVViewLayout

{
    VUITextLayout *_headerTitleLayout;
    VUITextLayout *_headerSubtitleLayout;
    VUITextLayout *_sourceTextLayout;
    VUITextLayout *_descriptionTextLayout;
    TVImageLayout *_headerBadgeLayout;
    TVImageLayout *_sourceBadgeLayout;
    VUIFeedbackTableLayout *_reviewTableLayout;
    TVRatingBadgeLayout *_ratingBadgeLayout;
    UIColor *_darkHighlightColor;
    long long _layoutType;
    struct TVCornerRadii _borderRadii;
    struct UIEdgeInsets _headerImagePadding;
}

@property (nonatomic, readonly) VUITextLayout *headerTitleLayout;
@property (nonatomic, readonly) VUITextLayout *headerSubtitleLayout;
@property (nonatomic, readonly) VUITextLayout *sourceTextLayout;
@property (nonatomic, readonly) VUITextLayout *descriptionTextLayout;
@property (nonatomic, readonly) TVImageLayout *headerBadgeLayout;
@property (nonatomic, readonly) TVImageLayout *sourceBadgeLayout;
@property (nonatomic, readonly) VUIFeedbackTableLayout *reviewTableLayout;
@property (nonatomic, readonly) TVRatingBadgeLayout *ratingBadgeLayout;
@property (nonatomic) struct TVCornerRadii borderRadii;
@property (retain, nonatomic) UIColor *darkHighlightColor;
@property (nonatomic, readonly) struct UIEdgeInsets headerImagePadding;
@property (nonatomic, readonly) long long layoutType;

+ (id)layoutWithLayout:(id)arg1 element:(id)arg2;

- (id)initWithLayoutType:(long long)arg1;
- (void)_setupLayout:(long long)arg1;

@end

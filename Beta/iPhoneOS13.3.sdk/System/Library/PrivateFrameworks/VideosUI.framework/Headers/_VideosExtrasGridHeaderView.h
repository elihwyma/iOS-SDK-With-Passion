/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIView.h>

@class MPUArtworkView, MPUContentSizeLayoutConstraint, NSArray, NSLayoutConstraint, UILabel;

__attribute__((visibility("hidden")))
@interface _VideosExtrasGridHeaderView : UIView

{
    NSArray *_artworkSizeConstraints;
    NSArray *_textLeadingConstraints;
    MPUContentSizeLayoutConstraint *_topLabelConstraint;
    MPUContentSizeLayoutConstraint *_subtitleBaselineConstraint;
    NSLayoutConstraint *_bottomLabelConstraint;
    MPUContentSizeLayoutConstraint *_bottomLabelSpacerHeight;
    MPUArtworkView *_artworkView;
    UILabel *_subtitleLabel;
    UIView *_bottomLabelSpacer;
    UILabel *_titleLabel;
}

@property (nonatomic, readonly) UILabel *titleLabel;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)configureForImage:(id)arg1 title:(id)arg2 subtitle:(id)arg3 style:(id)arg4;

@end

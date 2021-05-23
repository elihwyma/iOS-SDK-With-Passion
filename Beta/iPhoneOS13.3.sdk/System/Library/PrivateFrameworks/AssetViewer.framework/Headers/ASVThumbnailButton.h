/*
 Image: /System/Library/PrivateFrameworks/AssetViewer.framework/AssetViewer
 */

#import <UIKit/UIButton.h>

@class ASVBadgeView, ASVLoadingView, NSError, NSLayoutConstraint, UIImage, UIImageView;

@interface ASVThumbnailButton : UIButton

{
    ASVLoadingView *_loadingView;
    ASVBadgeView *_badgeView;
    UIImageView *_imageView;
    NSLayoutConstraint *_badgeTopConstraint;
    NSLayoutConstraint *_badgeTrailingConstraint;
}

@property (retain, nonatomic) UIImage *thumbnail;
@property (retain, nonatomic) NSError *error;

+ (id)thumbnailButton;

- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)_setupButton;
- (void)_updateSubviewVisibility;

@end

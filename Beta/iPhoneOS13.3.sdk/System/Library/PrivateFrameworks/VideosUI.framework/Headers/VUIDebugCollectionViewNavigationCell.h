/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIListCollectionViewCell.h>

@class UIImageView, VUILabel, VUISeparatorView, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIDebugCollectionViewNavigationCell : VUIListCollectionViewCell

{
    VUITextLayout *_titleLayout;
    VUILabel *_titleLabel;
    UIImageView *_accessoryView;
    VUISeparatorView *_separatorView;
}

@property (retain, nonatomic) VUITextLayout *titleLayout;
@property (retain, nonatomic) VUILabel *titleLabel;
@property (retain, nonatomic) UIImageView *accessoryView;
@property (retain, nonatomic) VUISeparatorView *separatorView;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)configureWithTitle:(id)arg1;

@end

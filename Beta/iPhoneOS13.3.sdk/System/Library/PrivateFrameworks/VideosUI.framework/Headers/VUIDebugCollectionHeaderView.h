/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UICollectionReusableView.h>

@class VUILabel, VUISeparatorView, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIDebugCollectionHeaderView : UICollectionReusableView

{
    VUITextLayout *_titleLayout;
    VUILabel *_titleLabel;
    VUISeparatorView *_separatorView;
}

@property (retain, nonatomic) VUITextLayout *titleLayout;
@property (retain, nonatomic) VUILabel *titleLabel;
@property (retain, nonatomic) VUISeparatorView *separatorView;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)configureHeaderViewWithTitle:(id)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIListCollectionViewCell.h>

@class VUILabel, VUISeparatorView;

__attribute__((visibility("hidden")))
@interface VUILibraryListPopoverViewCell : VUIListCollectionViewCell

{
    VUILabel *_titleLabel;
    VUISeparatorView *_separatorView;
}

@property (retain, nonatomic) VUISeparatorView *separatorView;
@property (nonatomic, readonly) VUILabel *titleLabel;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

@end

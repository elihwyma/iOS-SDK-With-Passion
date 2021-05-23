/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIView.h>

@class UIImage, UIImageView, VUILabel;

__attribute__((visibility("hidden")))
@interface VUILibraryListItemView : UIView

{
    VUILabel *_titleLabel;
    UIImage *_itemImage;
    UIImageView *_listImageView;
}

@property (retain, nonatomic) UIImageView *listImageView;
@property (retain, nonatomic) VUILabel *titleLabel;
@property (retain, nonatomic) UIImage *itemImage;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (struct CGSize)_layoutWithSize:(struct CGSize)arg1 metricsOnly:(_Bool)arg2;

@end

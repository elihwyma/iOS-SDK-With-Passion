/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIView.h>

@class VUIContextMenuCardViewLayout, VUILabel, _TVImageView;

__attribute__((visibility("hidden")))
@interface VUIContextMenuCardView : UIView

{
    VUIContextMenuCardViewLayout *_layout;
    VUILabel *_titleTextView;
    VUILabel *_subtitleTextView;
    _TVImageView *_badgeView;
    _TVImageView *_coverImageView;
}

@property (retain, nonatomic) VUIContextMenuCardViewLayout *layout;
@property (retain, nonatomic) VUILabel *titleTextView;
@property (retain, nonatomic) VUILabel *subtitleTextView;
@property (retain, nonatomic) _TVImageView *badgeView;
@property (retain, nonatomic) _TVImageView *coverImageView;

+ (id)configureViewWithElement:(id)arg1 existingView:(id)arg2;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setSemanticContentAttribute:(long long)arg1;
- (struct CGSize)_iOS_layoutSubviewsWithSize:(struct CGSize)arg1 computationOnly:(_Bool)arg2;

@end

/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIView.h>

@class NSArray, NSString, VUIButton, VUICardViewLayoutFactory, _TVImageView;

__attribute__((visibility("hidden")))
@interface VUICardView : UIView

{
    VUICardViewLayoutFactory *_layoutFactory;
    _TVImageView *_imageView;
    _TVImageView *_appImageView;
    NSArray *_labelViews;
    UIView *_overlayView;
    VUIButton *_button;
    NSString *_debugString;
    struct CGSize _imageSize;
}

@property (nonatomic, readonly) VUICardViewLayoutFactory *layoutFactory;
@property (nonatomic) struct CGSize imageSize;
@property (retain, nonatomic) _TVImageView *imageView;
@property (retain, nonatomic) _TVImageView *appImageView;
@property (copy, nonatomic) NSArray *labelViews;
@property (retain, nonatomic) UIView *overlayView;
@property (retain, nonatomic) VUIButton *button;
@property (copy, nonatomic) NSString *debugString;

- (void)dealloc;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)prepareForCellReuse;
- (void)_mainImageLoaded;
- (double)_maxTextWidthForImagePosition:(long long)arg1 width:(double)arg2 appImageLayout:(id)arg3 textLayout:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1 layoutFactory:(id)arg2;

@end

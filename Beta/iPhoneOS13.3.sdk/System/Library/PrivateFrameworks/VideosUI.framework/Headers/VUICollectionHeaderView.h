/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UICollectionReusableView.h>

@class IKViewElement, UIButton, VUICollectionHeaderViewLayout, VUILabel, VUISeparatorView, _TVImageView;

__attribute__((visibility("hidden")))
@interface VUICollectionHeaderView : UICollectionReusableView

{
    CDUnknownBlockType _selectionHandler;
    IKViewElement *_viewElement;
    IKViewElement *_buttonViewElement;
    IKViewElement *_imageViewElement;
    VUICollectionHeaderViewLayout *_layout;
    VUILabel *_titleTextView;
    VUILabel *_subtitleTextView;
    _TVImageView *_imageView;
    UIButton *_headerButton;
    VUISeparatorView *_separatorView;
    struct UIEdgeInsets _padding;
}

@property (retain, nonatomic) IKViewElement *viewElement;
@property (retain, nonatomic) IKViewElement *buttonViewElement;
@property (retain, nonatomic) IKViewElement *imageViewElement;
@property (retain, nonatomic) VUICollectionHeaderViewLayout *layout;
@property (retain, nonatomic) VUILabel *titleTextView;
@property (retain, nonatomic) VUILabel *subtitleTextView;
@property (retain, nonatomic) _TVImageView *imageView;
@property (retain, nonatomic) UIButton *headerButton;
@property (retain, nonatomic) VUISeparatorView *separatorView;
@property (nonatomic) struct UIEdgeInsets padding;
@property (copy, nonatomic) CDUnknownBlockType selectionHandler;

+ (id)configureCollectionHeaderViewWithTitle:(id)arg1 subtitle:(id)arg2 buttonString:(id)arg3 existingView:(id)arg4;
+ (id)configureCollectionHeaderViewWithElement:(id)arg1 existingView:(id)arg2;

- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_selectButtonAction:(id)arg1;
- (struct CGSize)_layoutWithSize:(struct CGSize)arg1 metricsOnly:(_Bool)arg2;
- (id)_buttonWithString:(id)arg1 existingButton:(id)arg2;

@end

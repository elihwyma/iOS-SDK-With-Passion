/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UITableViewCell.h>

@class IKImageElement, IKTextElement, IKViewElement, UIView, _TVImageView, _TVLabel;

__attribute__((visibility("hidden")))
@interface VUIPopoverTableViewCell : UITableViewCell

{
    _Bool _imageLoaded;
    UIView *_dimmingView;
    IKViewElement *_cardElement;
    IKTextElement *_textElement;
    IKImageElement *_imageElement;
    double _preferredHeight;
    UIView *_cardView;
    _TVImageView *_tvImageView;
    _TVLabel *_tvLabel;
}

@property (nonatomic, getter=isImageLoaded) _Bool imageLoaded;
@property (retain, nonatomic) UIView *cardView;
@property (retain, nonatomic) UIView *dimmingView;
@property (retain, nonatomic) _TVImageView *tvImageView;
@property (retain, nonatomic) _TVLabel *tvLabel;
@property (retain, nonatomic) IKViewElement *cardElement;
@property (retain, nonatomic) IKTextElement *textElement;
@property (retain, nonatomic) IKImageElement *imageElement;
@property (nonatomic) double preferredHeight;

- (void)prepareForReuse;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

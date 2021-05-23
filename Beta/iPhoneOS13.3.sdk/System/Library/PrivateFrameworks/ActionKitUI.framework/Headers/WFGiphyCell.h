/*
 Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

#import <UIKit/UICollectionViewCell.h>

@class NSURLSessionDataTask, UIActivityIndicatorView, UIImageView, WFGiphyObject;

__attribute__((visibility("hidden")))
@interface WFGiphyCell : UICollectionViewCell

{
    UIActivityIndicatorView *_indicatorView;
    UIImageView *_imageView;
    UIImageView *_selectedImageView;
    NSURLSessionDataTask *_dataTask;
    WFGiphyObject *_object;
}

@property (weak, nonatomic) UIActivityIndicatorView *indicatorView;
@property (weak, nonatomic) UIImageView *imageView;
@property (weak, nonatomic) UIImageView *selectedImageView;
@property (weak, nonatomic) NSURLSessionDataTask *dataTask;
@property (weak, nonatomic) WFGiphyObject *object;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1;

@end

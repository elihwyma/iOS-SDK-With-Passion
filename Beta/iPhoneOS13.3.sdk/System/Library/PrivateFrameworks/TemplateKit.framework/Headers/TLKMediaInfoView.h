/*
 Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@class NSArray, TLKContentsContainerView, TLKImage, TLKImageView;

@interface TLKMediaInfoView

{
    TLKImage *_image;
    NSArray *_contents;
    TLKImageView *_imageView;
    TLKContentsContainerView *_contentsContainer;
}

@property (retain, nonatomic) TLKImageView *imageView;
@property (retain, nonatomic) TLKContentsContainerView *contentsContainer;
@property (retain, nonatomic) TLKImage *image;
@property (retain, nonatomic) NSArray *contents;

- (id)setupContentView;
- (void)observedPropertiesChanged;
- (_Bool)imageViewIsHidden;
- (id)titleLabelStrings;
- (id)detailLabelStrings;

@end

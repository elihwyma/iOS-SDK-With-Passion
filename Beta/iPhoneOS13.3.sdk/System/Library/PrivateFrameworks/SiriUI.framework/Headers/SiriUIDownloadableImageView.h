/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <UIView.h>

@class NSBundle, NSString, NSURL, UIImageView;

@interface SiriUIDownloadableImageView : UIView

{
    UIImageView *_imageView;
    NSURL *_imageURL;
    _Bool _showingPlaceHolderImage;
    NSString *_placeHolderImageName;
    NSBundle *_placeHolderImageBundle;
    double _placeHolderVerticalOffset;
}

- (void)layoutSubviews;
- (void)setImageURL:(id)arg1;
- (void)showPlaceHolderImage;
- (void)_setImage:(id)arg1 isPlaceHolder:(_Bool)arg2;
- (id)initWithImageURL:(id)arg1 placeHolderImageName:(id)arg2 placeHolderImageBundle:(id)arg3;
- (void)setPlaceHolderImageName:(id)arg1;
- (void)setPlaceHolderVerticalOffset:(double)arg1;

@end

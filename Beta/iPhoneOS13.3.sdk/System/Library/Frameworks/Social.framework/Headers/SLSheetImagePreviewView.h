/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <UIKit/UIView.h>

@class NSArray, UIImage, UIImageView;

@interface SLSheetImagePreviewView : UIView

{
    UIImage *_image;
    UIImageView *_imageView;
    NSArray *_principalAttachments;
}

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) NSArray *principalAttachments;

+ (id)fallbackPreviewImage;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)generatePreviewImageFromAttachments;
- (void)ensurePlaceholderPreviewImage;
- (void)setPreviewImage:(id)arg1 forAttachment:(id)arg2;

@end

/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraEditKit/CEKBadgeView.h>

@class NSString, UIImage;

@interface CAMFlashBadge : CEKBadgeView

{
    UIImage *__contentImage;
    NSString *__contentSizeCategory;
}

@property (retain, nonatomic) UIImage *_contentImage;
@property (copy, nonatomic) NSString *_contentSizeCategory;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct UIEdgeInsets)_imageInsets;
- (id)_maskImage;
- (struct CGSize)_imageSize;
- (void)updateToContentSize:(id)arg1;

@end

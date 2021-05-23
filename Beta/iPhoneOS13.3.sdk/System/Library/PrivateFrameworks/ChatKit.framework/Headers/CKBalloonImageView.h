/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIView.h>

@class NSString, UIImage;

@interface CKBalloonImageView : UIView

{
    _Bool _imageHidden;
    UIImage *_image;
    NSString *_stickerAccessibilityDescription;
}

@property (retain, nonatomic) UIImage *image;
@property (nonatomic) _Bool imageHidden;
@property (retain, nonatomic) NSString *stickerAccessibilityDescription;

- (void)prepareForReuse;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (struct UIEdgeInsets)alignmentRectInsets;

@end

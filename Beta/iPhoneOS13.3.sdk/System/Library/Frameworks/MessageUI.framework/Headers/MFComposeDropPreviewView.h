/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <UIKit/UIView.h>

@class UIBezierPath, UIImage, UIImageView;

@interface MFComposeDropPreviewView : UIView

{
    UIView *_previewView;
    UIBezierPath *_previewClippingPath;
    UIImage *_finalImage;
    UIImageView *_imageView;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *previewView;
@property (retain, nonatomic) UIBezierPath *previewClippingPath;
@property (retain, nonatomic) UIImage *finalImage;

- (id)initWithFrame:(struct CGRect)arg1;

@end

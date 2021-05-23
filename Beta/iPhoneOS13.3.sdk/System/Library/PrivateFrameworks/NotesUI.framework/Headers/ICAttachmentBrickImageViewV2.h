/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <UIKit/UIView.h>

@class CALayer, UIImage;

@interface ICAttachmentBrickImageViewV2 : UIView

{
    _Bool _transparentBackground;
    struct UIImage *_image;
    unsigned long long _imageScaling;
    CALayer *_imageLayer;
}

@property (retain, nonatomic) CALayer *imageLayer;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) unsigned long long imageScaling;
@property (nonatomic) double cornerRadius;
@property (nonatomic) _Bool transparentBackground;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)setContentsScale:(double)arg1;
- (void)updateBackgroundColor;
- (void)updateSublayersBounds:(struct CGRect)arg1;

@end

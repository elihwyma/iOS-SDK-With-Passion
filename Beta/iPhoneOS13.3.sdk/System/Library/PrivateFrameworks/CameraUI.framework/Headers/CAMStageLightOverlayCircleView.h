/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIView.h>

@class UIImage;

@interface CAMStageLightOverlayCircleView : UIView

{
    _Bool _active;
    UIImage *_image;
    UIImage *_highlightedImage;
}

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *highlightedImage;
@property (nonatomic, getter=isActive) _Bool active;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)setActive:(_Bool)arg1 animated:(_Bool)arg2;
- (id)_circleImageWithColor:(id)arg1;
- (void)_updateContentsAnimated:(_Bool)arg1;
- (void)_updateImagesIfNeeded;
- (void)_drawCircleWithColor:(id)arg1;

@end

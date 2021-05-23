/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <UIKit/UIButton.h>

@class UIImage, UIImageView;

@interface AKFingerPotView : UIButton

{
    UIImageView *_selectedOutline;
    UIImageView *_highlight;
}

@property (retain, nonatomic) UIImageView *selectedOutline;
@property (retain, nonatomic) UIImageView *highlight;
@property (retain, nonatomic) UIImage *menuImage;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;

@end

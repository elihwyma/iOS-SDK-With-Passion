/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <UIKit/UIView.h>

@class UIColor, UIImageView;

@interface _PKCheckerGridView : UIView

{
    double _gridSize;
    UIColor *_colorA;
    UIColor *_colorB;
    UIImageView *_imageView;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) double gridSize;
@property (retain, nonatomic) UIColor *colorA;
@property (retain, nonatomic) UIColor *colorB;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)gridTileImage;

@end

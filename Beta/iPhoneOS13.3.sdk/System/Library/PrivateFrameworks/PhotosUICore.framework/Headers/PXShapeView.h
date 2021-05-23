/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

@class UIBezierPath, UIColor;

@interface PXShapeView : UIView

{
    UIBezierPath *_path;
    UIColor *_fillColor;
}

@property (copy, nonatomic) UIBezierPath *path;
@property (copy, nonatomic) UIColor *fillColor;

+ (Class)layerClass;

- (id)shapeLayer;

@end

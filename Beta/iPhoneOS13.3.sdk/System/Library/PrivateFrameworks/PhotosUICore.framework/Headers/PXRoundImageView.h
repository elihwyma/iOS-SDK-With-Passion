/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIImageView.h>

@class CAShapeLayer;

@interface PXRoundImageView : UIImageView

{
    CAShapeLayer *_shapeLayer;
}

@property (retain, nonatomic) CAShapeLayer *shapeLayer;

- (void)setFrame:(struct CGRect)arg1;

@end

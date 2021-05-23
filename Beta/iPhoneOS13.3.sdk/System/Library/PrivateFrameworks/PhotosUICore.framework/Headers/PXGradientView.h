/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

@class CAGradientLayer, NSArray;

@interface PXGradientView : UIView

{
    NSArray *_colors;
}

@property (nonatomic, readonly) CAGradientLayer *gradientLayer;
@property (copy, nonatomic) NSArray *colors;
@property (copy, nonatomic) NSArray *locations;
@property (nonatomic) struct CGPoint startPoint;
@property (nonatomic) struct CGPoint endPoint;

+ (Class)layerClass;

@end

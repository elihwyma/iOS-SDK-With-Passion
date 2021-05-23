/*
 Image: /System/Library/PrivateFrameworks/CameraEditKit.framework/CameraEditKit
 */

#import <UIKit/UIView.h>

@class UIColor;

@interface CEKEdgeGradientView : UIView

{
    long long _edgeGradientStyle;
    UIColor *_customEdgeGradientColor;
    long long _gradientDirection;
    struct UIEdgeInsets _contentInsets;
    CDStruct_54402055 _gradientDimensions;
}

@property (nonatomic, readonly) long long edgeGradientStyle;
@property (nonatomic, readonly) UIColor *customEdgeGradientColor;
@property (nonatomic) long long gradientDirection;
@property (nonatomic) struct UIEdgeInsets contentInsets;
@property (nonatomic) double outerColorLength;
@property (nonatomic) double innerFadeLength;
@property (nonatomic) CDStruct_54402055 gradientDimensions;

- (_Bool)isOpaque;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setEdgeGradientStyleMask;
- (void)setCustomEdgeGradientStyleWithColor:(id)arg1;
- (void)setEdgeGradientStyleBlack;

@end

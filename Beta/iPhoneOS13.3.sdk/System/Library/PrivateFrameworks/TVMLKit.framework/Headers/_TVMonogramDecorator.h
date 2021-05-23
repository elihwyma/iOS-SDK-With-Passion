/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <TVMLKit/TVImageScaleDecorator.h>

@class UIColor;

@interface _TVMonogramDecorator : TVImageScaleDecorator

{
    UIColor *_borderColor;
    double _borderWidth;
}

@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic) double borderWidth;

- (_Bool)needsAlphaForImage:(id)arg1;
- (void)drawInContext:(id)arg1 imageRect:(struct CGRect)arg2;
- (id)decoratorIdentifier;

@end

/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <TVMLKit/TVImageDecorator.h>

@class UIColor;

@interface _TVUberBlurImageDecorator : TVImageDecorator

{
    UIColor *_gradientColor;
    unsigned long long _blurType;
    unsigned long long _blurStyle;
}

@property (retain, nonatomic) UIColor *gradientColor;
@property (nonatomic) unsigned long long blurType;
@property (nonatomic) unsigned long long blurStyle;

- (id)decoratorIdentifier;
- (id)decorate:(id)arg1 scaledWithSize:(struct CGSize)arg2 croppedToFit:(_Bool)arg3;

@end

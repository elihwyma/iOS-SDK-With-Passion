/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <TVMLKit/TVImageScaleDecorator.h>

@class IKColor;

__attribute__((visibility("hidden")))
@interface _TVTintedImageDecorator : TVImageScaleDecorator

{
    IKColor *_tintColor;
}

@property (retain, nonatomic, readonly) IKColor *tintColor;

- (id)initWithTintColor:(id)arg1;
- (void)drawInContext:(id)arg1 imageRect:(struct CGRect)arg2;
- (id)decoratorIdentifier;

@end

/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <TVMLKit/TVImageScaleDecorator.h>

@class UIColor;

@interface TVImageOutlineDecorator : TVImageScaleDecorator

{
    UIColor *_outlineColor;
    struct UIEdgeInsets _outlineWidths;
}

@property (copy, nonatomic, readonly) UIColor *outlineColor;
@property (nonatomic, readonly) struct UIEdgeInsets outlineWidths;

+ (id)decoratorWithOutlineColor:(id)arg1 outlineWidths:(struct UIEdgeInsets)arg2;

- (void)drawInContext:(id)arg1 imageRect:(struct CGRect)arg2;
- (id)decoratorIdentifier;
- (id)initWithOutlineColor:(id)arg1 outlineWidths:(struct UIEdgeInsets)arg2;

@end

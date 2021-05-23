/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <TVMLKit/TVImageScaleDecorator.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _TVImageKeyFrameArtDecorator : TVImageScaleDecorator

{
    NSString *_inlineTitle;
}

@property (copy, nonatomic) NSString *inlineTitle;

- (id)decoratorIdentifier;
- (id)decorate:(id)arg1 scaledWithSize:(struct CGSize)arg2 croppedToFit:(_Bool)arg3;
- (id)initWithInlineTitle:(id)arg1;

@end

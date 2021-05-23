/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <UIKit/UIView.h>

@class SXGradient;

@interface SXGradientView : UIView

{
    SXGradient *_gradient;
}

@property (nonatomic, readonly) SXGradient *gradient;

+ (Class)layerClass;

- (id)initWithGradient:(id)arg1;

@end

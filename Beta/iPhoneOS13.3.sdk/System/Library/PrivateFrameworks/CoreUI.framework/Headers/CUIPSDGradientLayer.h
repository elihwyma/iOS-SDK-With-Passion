/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <CoreUI/CUIPSDLayer.h>

@class CUIPSDGradient;

@interface CUIPSDGradientLayer : CUIPSDLayer

{
    CUIPSDGradient *_gradient;
}

@property (nonatomic, readonly) CUIPSDGradient *gradient;

- (void)dealloc;
- (id)initWithGradient:(id)arg1;

@end

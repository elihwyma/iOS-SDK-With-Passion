/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class CALayer, UIImage;

__attribute__((visibility("hidden")))
@interface _UIBackButtonContainerView : UIView

{
    CALayer *_edgeMask;
    CALayer *_fillMask;
    _Bool _isRTL;
    UIImage *_edgeMaskImage;
    double _backButtonLeadingMargin;
}

@property (retain, nonatomic) UIImage *edgeMaskImage;
@property (nonatomic) _Bool maskEnabled;
@property (nonatomic) double backButtonLeadingMargin;
@property (nonatomic) _Bool isRTL;

@end

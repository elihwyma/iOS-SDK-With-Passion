/*
 Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

#import <UIKit/UIImageView.h>

@class DKDrawableView;

@interface DACameraSensorAnomalyTestImageView : UIImageView

{
    DKDrawableView *_drawableView;
}

@property (retain, nonatomic) DKDrawableView *drawableView;

@end

/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSArray, UIKeyboardDicationBackgroundGradientView;

__attribute__((visibility("hidden")))
@interface UIKeyboardDicationBackground : UIView

{
    NSArray *_shadows;
    UIKeyboardDicationBackgroundGradientView *_gradient;
}

@property (retain, nonatomic) UIKeyboardDicationBackgroundGradientView *gradient;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)shadows;

@end

/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface UITextFieldBackgroundView : UIView

{
    _Bool _active;
    _Bool _enabled;
    float _progress;
    UIColor *_fillColor;
}

@property (retain, nonatomic) UIColor *fillColor;

- (void)setActive:(_Bool)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setProgress:(float)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1 active:(_Bool)arg2;
- (void)_updateImages;

@end

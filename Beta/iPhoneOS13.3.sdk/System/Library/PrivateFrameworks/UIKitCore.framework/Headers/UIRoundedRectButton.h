/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIButton.h>

@class UIBezierPath, UIColor;

__attribute__((visibility("hidden")))
@interface UIRoundedRectButton : UIButton

{
    UIBezierPath *_fillPath;
    UIColor *_fillColor;
}

- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setTintColor:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (long long)buttonType;
- (_Bool)_canDrawContent;
- (id)initWithFrame:(struct CGRect)arg1 fillColor:(id)arg2;
- (void)_invalidatePaths;
- (void)_updateState;
- (id)_contentBackgroundColor;

@end

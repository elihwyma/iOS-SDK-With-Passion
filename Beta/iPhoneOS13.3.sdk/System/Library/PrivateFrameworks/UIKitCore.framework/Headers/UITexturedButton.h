/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIButton.h>

__attribute__((visibility("hidden")))
@interface UITexturedButton : UIButton

- (id)initWithFrame:(struct CGRect)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (id)backgroundImageForState:(unsigned long long)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (long long)buttonType;
- (void)setTitleColor:(id)arg1 forStates:(unsigned long long)arg2;
- (void)setTitleShadowColor:(id)arg1 forStates:(unsigned long long)arg2;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (void)setBackgroundImage:(id)arg1 forStates:(unsigned long long)arg2;
- (id)titleColorForState:(unsigned long long)arg1;
- (id)titleShadowColorForState:(unsigned long long)arg1;

@end

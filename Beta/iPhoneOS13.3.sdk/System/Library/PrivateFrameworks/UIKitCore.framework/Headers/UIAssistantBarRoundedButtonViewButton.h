/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIButton.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface UIAssistantBarRoundedButtonViewButton : UIButton

{
    UIColor *_normalBackgroundColor;
    UIColor *_highlightedBackgroundColor;
    UIColor *_normalTitleColor;
    UIColor *_highlightedTitleColor;
}

@property (retain, nonatomic) UIColor *normalBackgroundColor;
@property (retain, nonatomic) UIColor *highlightedBackgroundColor;
@property (retain, nonatomic) UIColor *normalTitleColor;
@property (retain, nonatomic) UIColor *highlightedTitleColor;

- (void)setHighlighted:(_Bool)arg1;
- (id)_titleColorForState:(unsigned long long)arg1;
- (void)_updateBackgroundAndTitleColor;
- (id)_currentTitleColor;

@end

/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIStatusBarStyleAttributes.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface UIStatusBarNewUIStyleAttributes : UIStatusBarStyleAttributes

{
    UIColor *_backgroundColor;
    UIColor *_foregroundColor;
    _Bool _hasBusyBackground;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isTranslucent;
- (id)initWithRequest:(id)arg1;
- (id)foregroundColor;
- (long long)legibilityStyle;
- (Class)foregroundStyleClass;
- (id)initWithRequest:(id)arg1 backgroundColor:(id)arg2 foregroundColor:(id)arg3 hasBusyBackground:(_Bool)arg4;
- (id)initWithRequest:(id)arg1 backgroundColor:(id)arg2 foregroundColor:(id)arg3;
- (_Bool)isTransparent;
- (_Bool)shouldUseVisualAltitude;
- (id)backgroundColorWithTintColor:(id)arg1;
- (id)newForegroundStyleWithHeight:(double)arg1;

@end

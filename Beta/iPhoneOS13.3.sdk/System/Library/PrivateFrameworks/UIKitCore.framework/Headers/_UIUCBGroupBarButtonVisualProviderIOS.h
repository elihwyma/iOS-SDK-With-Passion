/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIUCBBarButtonVisualProviderIOS.h>

@class _UIUCBKBSelectionBackground;

__attribute__((visibility("hidden")))
@interface _UIUCBGroupBarButtonVisualProviderIOS : _UIUCBBarButtonVisualProviderIOS

{
    _UIUCBKBSelectionBackground *_selectionBackgroundView;
    _Bool _lightKeyboard;
}

@property (nonatomic) _Bool lightKeyboard;

+ (id)lightKeyboardProvider;
+ (id)darkKeyboardProvider;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)updateButton:(id)arg1 forSelectedState:(_Bool)arg2;
- (void)configureButton:(id)arg1 withAppearanceDelegate:(id)arg2 fromBarItem:(id)arg3;
- (void)updateButton:(id)arg1 toUseButtonShapes:(_Bool)arg2;

@end

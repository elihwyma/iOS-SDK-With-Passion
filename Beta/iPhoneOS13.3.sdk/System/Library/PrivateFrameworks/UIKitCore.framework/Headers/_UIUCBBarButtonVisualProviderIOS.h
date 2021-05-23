/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIButtonBarButtonVisualProvider.h>

@class UIButton;

__attribute__((visibility("hidden")))
@interface _UIUCBBarButtonVisualProviderIOS : _UIButtonBarButtonVisualProvider

{
    UIButton *_contentButton;
}

+ (id)_defaultTitleAttributes;

- (id)contentView;
- (void)updateButton:(id)arg1 forHighlightedState:(_Bool)arg2;
- (void)updateButton:(id)arg1 forEnabledState:(_Bool)arg2;
- (void)configureButton:(id)arg1 withAppearanceDelegate:(id)arg2 fromBarItem:(id)arg3;
- (id)_defaultTitleAttributes;
- (id)_newButton;
- (void)_configureImageOrTitleFromBarItem:(id)arg1;

@end

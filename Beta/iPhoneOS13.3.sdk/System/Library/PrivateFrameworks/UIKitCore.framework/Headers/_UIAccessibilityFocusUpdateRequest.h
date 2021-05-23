/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIFocusUpdateRequest.h>

__attribute__((visibility("hidden")))
@interface _UIAccessibilityFocusUpdateRequest : _UIFocusUpdateRequest

{
    long long _options;
}

@property (nonatomic) long long options;

- (_Bool)shouldPlayFocusSound;
- (_Bool)requiresNextFocusedItem;

@end

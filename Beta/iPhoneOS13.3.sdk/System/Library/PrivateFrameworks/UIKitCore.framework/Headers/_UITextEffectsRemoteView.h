/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIRemoteView.h>

@class _UIRemoteViewController;

__attribute__((visibility("hidden")))
@interface _UITextEffectsRemoteView : _UIRemoteView

{
    _UIRemoteViewController *_remoteViewController;
}

@property (nonatomic) _UIRemoteViewController *remoteViewController;

+ (_Bool)_requiresWindowTouches;

- (int)textEffectsVisibilityLevel;

@end

/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIAlertView.h>

__attribute__((visibility("hidden")))
@interface _UIUserNotificationAlertView : UIAlertView

{
    struct __CFUserNotification *_userNotification;
    struct __CFRunLoopSource *_userNotificationRunLoopSource;
    id _strongDelegate;
    id _retainedSelf;
}

+ (void)initialize;

- (void)dealloc;
- (_Bool)isVisible;
- (long long)addButtonWithTitle:(id)arg1;
- (void)dismissWithClickedButtonIndex:(long long)arg1 animated:(_Bool)arg2;
- (id)textFieldAtIndex:(long long)arg1;
- (void)show;
- (void)setRemoteViewController:(id)arg1;
- (void)_removeObservervations;
- (void)cancelAlertView;
- (void)_cancelUserNotification;
- (void)setHostedWindow:(id)arg1;

@end

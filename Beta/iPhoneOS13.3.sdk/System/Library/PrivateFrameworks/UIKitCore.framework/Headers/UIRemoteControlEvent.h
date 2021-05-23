/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIEvent.h>

__attribute__((visibility("hidden")))
@interface UIRemoteControlEvent : UIEvent

{
    long long _subtype;
}

- (void)dealloc;
- (long long)type;
- (id)_init;
- (long long)subtype;
- (id)_windows;
- (void)_sendEventToResponder:(id)arg1;
- (void)_simpleRemoteActionNotification:(id)arg1;
- (void)_setSubtype:(long long)arg1;

@end

/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <WebKitLegacy/WebEvent.h>

__attribute__((visibility("hidden")))
@interface WKSyntheticFlagsChangedWebEvent : WebEvent

- (id)initWithKeyCode:(unsigned short)arg1 modifiers:(unsigned int)arg2 keyDown:(_Bool)arg3;
- (id)initWithCapsLockState:(_Bool)arg1;
- (id)initWithShiftState:(_Bool)arg1;

@end

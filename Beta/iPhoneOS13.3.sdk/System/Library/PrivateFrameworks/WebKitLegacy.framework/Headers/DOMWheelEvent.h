/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <WebKitLegacy/DOMMouseEvent.h>

@interface DOMWheelEvent : DOMMouseEvent

@property (readonly) int wheelDeltaX;
@property (readonly) int wheelDeltaY;
@property (readonly) int wheelDelta;
@property (readonly) _Bool isHorizontal;

- (double)deltaX;
- (double)deltaY;
- (double)deltaZ;
- (unsigned int)deltaMode;
- (_Bool)webkitDirectionInvertedFromDevice;
- (void)initWheelEvent:(int)arg1 wheelDeltaY:(int)arg2 view:(id)arg3 screenX:(int)arg4 screenY:(int)arg5 clientX:(int)arg6 clientY:(int)arg7 ctrlKey:(_Bool)arg8 altKey:(_Bool)arg9 shiftKey:(_Bool)arg10 metaKey:(_Bool)arg11;

@end

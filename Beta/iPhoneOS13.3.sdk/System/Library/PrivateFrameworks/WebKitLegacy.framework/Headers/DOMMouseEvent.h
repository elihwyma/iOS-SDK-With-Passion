/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <WebKitLegacy/DOMUIEvent.h>

@class DOMNode;

@protocol DOMEventTarget;

@interface DOMMouseEvent : DOMUIEvent

@property (readonly) int screenX;
@property (readonly) int screenY;
@property (readonly) int clientX;
@property (readonly) int clientY;
@property (readonly) _Bool ctrlKey;
@property (readonly) _Bool shiftKey;
@property (readonly) _Bool altKey;
@property (readonly) _Bool metaKey;
@property (readonly) short button;
@property (readonly) id <DOMEventTarget> relatedTarget;
@property (readonly) int offsetX;
@property (readonly) int offsetY;
@property (readonly) int x;
@property (readonly) int y;
@property (readonly) DOMNode *fromElement;
@property (readonly) DOMNode *toElement;

- (void)initMouseEvent:(id)arg1 canBubble:(_Bool)arg2 cancelable:(_Bool)arg3 view:(id)arg4 detail:(int)arg5 screenX:(int)arg6 screenY:(int)arg7 clientX:(int)arg8 clientY:(int)arg9 ctrlKey:(_Bool)arg10 altKey:(_Bool)arg11 shiftKey:(_Bool)arg12 metaKey:(_Bool)arg13 button:(unsigned short)arg14 relatedTarget:(id)arg15;
- (void)initMouseEvent:(id)arg1:(_Bool)arg2:(_Bool)arg3:(id)arg4:(int)arg5:(int)arg6:(int)arg7:(int)arg8:(int)arg9:(_Bool)arg10:(_Bool)arg11:(_Bool)arg12:(_Bool)arg13:(unsigned short)arg14:(id)arg15;

@end

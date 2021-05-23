/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <WebKitLegacy/DOMEvent.h>

@class DOMAbstractView;

@interface DOMUIEvent : DOMEvent

@property (readonly) DOMAbstractView *view;
@property (readonly) int detail;
@property (readonly) int keyCode;
@property (readonly) int charCode;
@property (readonly) int layerX;
@property (readonly) int layerY;
@property (readonly) int pageX;
@property (readonly) int pageY;
@property (readonly) int which;

- (void)initUIEvent:(id)arg1 canBubble:(_Bool)arg2 cancelable:(_Bool)arg3 view:(id)arg4 detail:(int)arg5;
- (void)initUIEvent:(id)arg1:(_Bool)arg2:(_Bool)arg3:(id)arg4:(int)arg5;

@end

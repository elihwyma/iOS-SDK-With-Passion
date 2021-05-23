/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <WebKitLegacy/DOMUIEvent.h>

@class NSString;

@interface DOMKeyboardEvent : DOMUIEvent

@property (copy, readonly) NSString *keyIdentifier;
@property (readonly) unsigned int location;
@property (readonly) unsigned int keyLocation;
@property (readonly) _Bool ctrlKey;
@property (readonly) _Bool shiftKey;
@property (readonly) _Bool altKey;
@property (readonly) _Bool metaKey;
@property (readonly) _Bool altGraphKey;
@property (readonly) int keyCode;
@property (readonly) int charCode;

- (_Bool)getModifierState:(id)arg1;
- (void)initKeyboardEvent:(id)arg1 canBubble:(_Bool)arg2 cancelable:(_Bool)arg3 view:(id)arg4 keyIdentifier:(id)arg5 location:(unsigned int)arg6 ctrlKey:(_Bool)arg7 altKey:(_Bool)arg8 shiftKey:(_Bool)arg9 metaKey:(_Bool)arg10 altGraphKey:(_Bool)arg11;
- (void)initKeyboardEvent:(id)arg1 canBubble:(_Bool)arg2 cancelable:(_Bool)arg3 view:(id)arg4 keyIdentifier:(id)arg5 location:(unsigned int)arg6 ctrlKey:(_Bool)arg7 altKey:(_Bool)arg8 shiftKey:(_Bool)arg9 metaKey:(_Bool)arg10;
- (void)initKeyboardEvent:(id)arg1 canBubble:(_Bool)arg2 cancelable:(_Bool)arg3 view:(id)arg4 keyIdentifier:(id)arg5 keyLocation:(unsigned int)arg6 ctrlKey:(_Bool)arg7 altKey:(_Bool)arg8 shiftKey:(_Bool)arg9 metaKey:(_Bool)arg10 altGraphKey:(_Bool)arg11;
- (void)initKeyboardEvent:(id)arg1 canBubble:(_Bool)arg2 cancelable:(_Bool)arg3 view:(id)arg4 keyIdentifier:(id)arg5 keyLocation:(unsigned int)arg6 ctrlKey:(_Bool)arg7 altKey:(_Bool)arg8 shiftKey:(_Bool)arg9 metaKey:(_Bool)arg10;

@end

/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <WebKitLegacy/DOMObject.h>

@class NSString;

@protocol DOMEventTarget;

@interface DOMEvent : DOMObject

@property (copy, readonly) NSString *type;
@property (readonly) id <DOMEventTarget> target;
@property (readonly) id <DOMEventTarget> currentTarget;
@property (readonly) unsigned short eventPhase;
@property (readonly) _Bool bubbles;
@property (readonly) _Bool cancelable;
@property (readonly) unsigned long long timeStamp;
@property (readonly) id <DOMEventTarget> srcElement;
@property _Bool returnValue;
@property _Bool cancelBubble;

- (void)dealloc;
- (_Bool)isTrusted;
- (_Bool)composed;
- (_Bool)defaultPrevented;
- (void)stopPropagation;
- (void)preventDefault;
- (void)initEvent:(id)arg1 canBubbleArg:(_Bool)arg2 cancelableArg:(_Bool)arg3;
- (void)stopImmediatePropagation;
- (void)initEvent:(id)arg1:(_Bool)arg2:(_Bool)arg3;

@end

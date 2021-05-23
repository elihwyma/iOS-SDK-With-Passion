/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <WebKitLegacy/DOMUIEvent.h>

@class NSString;

@interface DOMTextEvent : DOMUIEvent

@property (copy, readonly) NSString *data;

- (void)initTextEvent:(id)arg1 canBubbleArg:(_Bool)arg2 cancelableArg:(_Bool)arg3 viewArg:(id)arg4 dataArg:(id)arg5;

@end

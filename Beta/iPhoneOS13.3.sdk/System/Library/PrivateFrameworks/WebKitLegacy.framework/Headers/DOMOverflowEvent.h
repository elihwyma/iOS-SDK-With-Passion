/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <WebKitLegacy/DOMEvent.h>

@interface DOMOverflowEvent : DOMEvent

@property (readonly) unsigned short orient;
@property (readonly) _Bool horizontalOverflow;
@property (readonly) _Bool verticalOverflow;

- (void)initOverflowEvent:(unsigned short)arg1 horizontalOverflow:(_Bool)arg2 verticalOverflow:(_Bool)arg3;

@end

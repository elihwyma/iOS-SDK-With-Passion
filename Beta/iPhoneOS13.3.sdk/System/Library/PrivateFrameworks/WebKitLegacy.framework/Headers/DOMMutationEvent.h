/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <WebKitLegacy/DOMEvent.h>

@class DOMNode, NSString;

@interface DOMMutationEvent : DOMEvent

@property (readonly) DOMNode *relatedNode;
@property (copy, readonly) NSString *prevValue;
@property (copy, readonly) NSString *newValue;
@property (copy, readonly) NSString *attrName;
@property (readonly) unsigned short attrChange;

- (void)initMutationEvent:(id)arg1 canBubble:(_Bool)arg2 cancelable:(_Bool)arg3 relatedNode:(id)arg4 prevValue:(id)arg5 newValue:(id)arg6 attrName:(id)arg7 attrChange:(unsigned short)arg8;
- (void)initMutationEvent:(id)arg1:(_Bool)arg2:(_Bool)arg3:(id)arg4:(id)arg5:(id)arg6:(id)arg7:(unsigned short)arg8;

@end

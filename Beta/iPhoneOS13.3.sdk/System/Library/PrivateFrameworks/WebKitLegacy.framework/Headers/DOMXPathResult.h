/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <WebKitLegacy/DOMObject.h>

@class DOMNode, NSString;

@interface DOMXPathResult : DOMObject

@property (readonly) unsigned short resultType;
@property (readonly) double numberValue;
@property (copy, readonly) NSString *stringValue;
@property (readonly) _Bool booleanValue;
@property (readonly) DOMNode *singleNodeValue;
@property (readonly) _Bool invalidIteratorState;
@property (readonly) unsigned int snapshotLength;

- (void)dealloc;
- (id)iterateNext;
- (id)snapshotItem:(unsigned int)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <WebKitLegacy/DOMObject.h>

@class DOMNode;

@protocol DOMNodeFilter;

@interface DOMNodeIterator : DOMObject

@property (readonly) DOMNode *root;
@property (readonly) unsigned int whatToShow;
@property (readonly) id <DOMNodeFilter> filter;
@property (readonly) _Bool expandEntityReferences;
@property (readonly) DOMNode *referenceNode;
@property (readonly) _Bool pointerBeforeReferenceNode;

- (void)dealloc;
- (void)detach;
- (id)nextNode;
- (id)previousNode;

@end

/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <WebKitLegacy/DOMObject.h>

@class DOMNode;

@protocol DOMNodeFilter;

@interface DOMTreeWalker : DOMObject

@property (readonly) DOMNode *root;
@property (readonly) unsigned int whatToShow;
@property (readonly) id <DOMNodeFilter> filter;
@property (readonly) _Bool expandEntityReferences;
@property (retain) DOMNode *currentNode;

- (void)dealloc;
- (id)parentNode;
- (id)firstChild;
- (id)nextSibling;
- (id)lastChild;
- (id)previousSibling;
- (id)nextNode;
- (id)previousNode;

@end

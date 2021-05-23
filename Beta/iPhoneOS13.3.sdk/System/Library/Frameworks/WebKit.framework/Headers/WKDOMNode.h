/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSArray, WKDOMDocument;

@interface WKDOMNode : NSObject

{
    struct RefPtr<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node>> _impl;
}

@property (readonly) WKDOMDocument *document;
@property (readonly) WKDOMNode *parentNode;
@property (readonly) WKDOMNode *firstChild;
@property (readonly) WKDOMNode *lastChild;
@property (readonly) WKDOMNode *previousSibling;
@property (readonly) WKDOMNode *nextSibling;
@property (readonly) NSArray *textRects;

- (void)dealloc;
- (id).cxx_construct;
- (void)removeChild:(id)arg1;
- (void)appendChild:(id)arg1;
- (id)_initWithImpl:(struct Node *)arg1;
- (void)insertNode:(id)arg1 before:(id)arg2;
- (struct OpaqueWKBundleNodeHandle *)_copyBundleNodeHandleRef;

@end

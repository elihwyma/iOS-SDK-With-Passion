/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <WebKitLegacy/DOMObject.h>

@class DOMDocument, DOMElement, DOMNamedNodeMap, DOMNodeList, NSString, WebArchive;

@interface DOMNode : DOMObject

@property (nonatomic, readonly) WebArchive *webArchive;
@property (copy, readonly) NSString *nodeName;
@property (copy) NSString *nodeValue;
@property (readonly) unsigned short nodeType;
@property (readonly) DOMNode *parentNode;
@property (readonly) DOMNodeList *childNodes;
@property (readonly) DOMNode *firstChild;
@property (readonly) DOMNode *lastChild;
@property (readonly) DOMNode *previousSibling;
@property (readonly) DOMNode *nextSibling;
@property (readonly) DOMDocument *ownerDocument;
@property (copy, readonly) NSString *namespaceURI;
@property (copy) NSString *prefix;
@property (copy, readonly) NSString *localName;
@property (readonly) DOMNamedNodeMap *attributes;
@property (copy, readonly) NSString *baseURI;
@property (copy) NSString *textContent;
@property (readonly) DOMElement *parentElement;
@property (readonly) _Bool isContentEditable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_nodeFromJSWrapper:(struct OpaqueJSValue *)arg1;

- (void)dealloc;
- (struct RootObject *)_rootObject;
- (struct CGRect)boundingBox;
- (_Bool)contains:(id)arg1;
- (_Bool)hasChildNodes;
- (id)removeChild:(id)arg1;
- (id)appendChild:(id)arg1;
- (struct CGRect)boundingFrame;
- (struct _WKQuad)absoluteQuad;
- (_Bool)isSameNode:(id)arg1;
- (id)startPosition;
- (id)endPosition;
- (_Bool)isHorizontalWritingMode;
- (double)textHeight;
- (id)findExplodedTextNodeAtPoint:(struct CGPoint)arg1;
- (id)rangeOfContainingParagraph;
- (id)rangeOfContents;
- (_Bool)isSelectableBlock;
- (_Bool)containsOnlyInlineObjects;
- (struct _WKQuad)absoluteQuadAndInsideFixedPosition:(_Bool *)arg1;
- (id)nextFocusNode;
- (id)previousFocusNode;
- (float)computedFontSize;
- (id)hrefURL;
- (id)absoluteQuads;
- (void)hidePlaceholder;
- (struct CGRect)boundingBoxUsingTransforms;
- (void)showPlaceholderIfNecessary;
- (struct _WKQuad)innerFrameQuad;
- (void)getPreviewSnapshotImage:(struct CGImage **)arg1 andRects:(id *)arg2;
- (id)borderRadii;
- (void)inspect;
- (_Bool)dispatchEvent:(id)arg1;
- (_Bool)isConnected;
- (_Bool)hasAttributes;
- (id)textRects;
- (id)markupString;
- (void)normalize;
- (struct Element *)_linkElement;
- (id)lineBoxRects;
- (id)lineBoxQuads;
- (id)hrefTarget;
- (struct CGRect)hrefFrame;
- (id)hrefLabel;
- (id)hrefTitle;
- (id)lookupNamespaceURI:(id)arg1;
- (void)addEventListener:(id)arg1 listener:(id)arg2 useCapture:(_Bool)arg3;
- (void)removeEventListener:(id)arg1 listener:(id)arg2 useCapture:(_Bool)arg3;
- (void)addEventListener:(id)arg1:(id)arg2:(_Bool)arg3;
- (void)removeEventListener:(id)arg1:(id)arg2:(_Bool)arg3;
- (id)insertBefore:(id)arg1 refChild:(id)arg2;
- (id)replaceChild:(id)arg1 oldChild:(id)arg2;
- (id)cloneNode:(_Bool)arg1;
- (_Bool)isSupported:(id)arg1 version:(id)arg2;
- (_Bool)isEqualNode:(id)arg1;
- (id)lookupPrefix:(id)arg1;
- (_Bool)isDefaultNamespace:(id)arg1;
- (unsigned short)compareDocumentPosition:(id)arg1;
- (id)insertBefore:(id)arg1:(id)arg2;
- (id)replaceChild:(id)arg1:(id)arg2;
- (_Bool)isSupported:(id)arg1:(id)arg2;
- (id)boundingBoxes;
- (id)webArchiveByFilteringSubframes:(CDUnknownBlockType)arg1;
- (struct CGRect)_renderRect:(_Bool *)arg1;

@end

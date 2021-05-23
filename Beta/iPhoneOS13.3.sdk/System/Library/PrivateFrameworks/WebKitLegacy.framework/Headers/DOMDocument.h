/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <WebKitLegacy/DOMNode.h>

@class DOMAbstractView, DOMDocumentType, DOMElement, DOMHTMLCollection, DOMHTMLElement, DOMImplementation, DOMStyleSheetList, NSString, WebFrame;

@interface DOMDocument : DOMNode

@property (nonatomic, readonly) WebFrame *webFrame;
@property (readonly) DOMDocumentType *doctype;
@property (readonly) DOMImplementation *implementation;
@property (readonly) DOMElement *documentElement;
@property (copy, readonly) NSString *inputEncoding;
@property (copy, readonly) NSString *xmlEncoding;
@property (copy) NSString *xmlVersion;
@property _Bool xmlStandalone;
@property (copy) NSString *documentURI;
@property (readonly) DOMAbstractView *defaultView;
@property (readonly) DOMStyleSheetList *styleSheets;
@property (copy) NSString *title;
@property (copy, readonly) NSString *referrer;
@property (copy, readonly) NSString *domain;
@property (copy, readonly) NSString *URL;
@property (copy) NSString *cookie;
@property (retain) DOMHTMLElement *body;
@property (readonly) DOMHTMLCollection *images;
@property (readonly) DOMHTMLCollection *applets;
@property (readonly) DOMHTMLCollection *links;
@property (readonly) DOMHTMLCollection *forms;
@property (readonly) DOMHTMLCollection *anchors;
@property (copy, readonly) NSString *lastModified;
@property (copy) NSString *charset;
@property (copy, readonly) NSString *defaultCharset;
@property (copy, readonly) NSString *readyState;
@property (copy, readonly) NSString *characterSet;
@property (copy, readonly) NSString *preferredStylesheetSet;
@property (copy) NSString *selectedStylesheetSet;
@property (readonly) DOMElement *activeElement;

- (id)head;
- (id)contentType;
- (id)dir;
- (id)origin;
- (id)children;
- (id)_documentRange;
- (id)getComputedStyle:(id)arg1 pseudoElement:(id)arg2;
- (id)getComputedStyle:(id)arg1:(id)arg2;
- (id)URLWithAttributeString:(id)arg1;
- (id)createElement:(id)arg1;
- (id)createElementNS:(id)arg1 qualifiedName:(id)arg2;
- (id)createElementNS:(id)arg1:(id)arg2;
- (id)createDocumentFragment;
- (_Bool)hidden;
- (id)createRange;
- (id)createNodeIterator:(id)arg1 whatToShow:(unsigned int)arg2 filter:(id)arg3 expandEntityReferences:(_Bool)arg4;
- (id)getElementsByTagName:(id)arg1;
- (id)createCSSStyleDeclaration;
- (id)firstElementChild;
- (id)createTextNode:(id)arg1;
- (id)visibilityState;
- (_Bool)hasFocus;
- (_Bool)execCommand:(id)arg1 userInterface:(_Bool)arg2 value:(id)arg3;
- (id)getMatchedCSSRules:(id)arg1 pseudoElement:(id)arg2 authorOnly:(_Bool)arg3;
- (void)setDir:(id)arg1;
- (id)compatMode;
- (_Bool)webkitIsFullScreen;
- (_Bool)webkitFullScreenKeyboardInputAllowed;
- (id)webkitCurrentFullScreenElement;
- (_Bool)webkitFullscreenEnabled;
- (id)webkitFullscreenElement;
- (id)currentScript;
- (id)scrollingElement;
- (id)lastElementChild;
- (unsigned int)childElementCount;
- (id)createComment:(id)arg1;
- (id)createCDATASection:(id)arg1;
- (id)createProcessingInstruction:(id)arg1 data:(id)arg2;
- (id)createAttribute:(id)arg1;
- (id)createEntityReference:(id)arg1;
- (id)importNode:(id)arg1 deep:(_Bool)arg2;
- (id)createAttributeNS:(id)arg1 qualifiedName:(id)arg2;
- (id)getElementsByTagNameNS:(id)arg1 localName:(id)arg2;
- (id)adoptNode:(id)arg1;
- (id)createEvent:(id)arg1;
- (id)createTreeWalker:(id)arg1 whatToShow:(unsigned int)arg2 filter:(id)arg3 expandEntityReferences:(_Bool)arg4;
- (id)getOverrideStyle:(id)arg1 pseudoElement:(id)arg2;
- (id)createExpression:(id)arg1 resolver:(id)arg2;
- (id)createNSResolver:(id)arg1;
- (id)evaluate:(id)arg1 contextNode:(id)arg2 resolver:(id)arg3 type:(unsigned short)arg4 inResult:(id)arg5;
- (_Bool)execCommand:(id)arg1 userInterface:(_Bool)arg2;
- (_Bool)execCommand:(id)arg1;
- (_Bool)queryCommandEnabled:(id)arg1;
- (_Bool)queryCommandIndeterm:(id)arg1;
- (_Bool)queryCommandState:(id)arg1;
- (_Bool)queryCommandSupported:(id)arg1;
- (id)queryCommandValue:(id)arg1;
- (id)getElementsByName:(id)arg1;
- (id)elementFromPoint:(int)arg1 y:(int)arg2;
- (id)caretRangeFromPoint:(int)arg1 y:(int)arg2;
- (id)getMatchedCSSRules:(id)arg1 pseudoElement:(id)arg2;
- (id)getElementsByClassName:(id)arg1;
- (void)webkitCancelFullScreen;
- (void)webkitExitFullscreen;
- (id)getElementById:(id)arg1;
- (id)querySelector:(id)arg1;
- (id)querySelectorAll:(id)arg1;
- (id)createProcessingInstruction:(id)arg1:(id)arg2;
- (id)importNode:(id)arg1:(_Bool)arg2;
- (id)createAttributeNS:(id)arg1:(id)arg2;
- (id)getElementsByTagNameNS:(id)arg1:(id)arg2;
- (id)createNodeIterator:(id)arg1:(unsigned int)arg2:(id)arg3:(_Bool)arg4;
- (id)createTreeWalker:(id)arg1:(unsigned int)arg2:(id)arg3:(_Bool)arg4;
- (id)getOverrideStyle:(id)arg1:(id)arg2;
- (id)createExpression:(id)arg1:(id)arg2;
- (id)evaluate:(id)arg1:(id)arg2:(id)arg3:(unsigned short)arg4:(id)arg5;

@end

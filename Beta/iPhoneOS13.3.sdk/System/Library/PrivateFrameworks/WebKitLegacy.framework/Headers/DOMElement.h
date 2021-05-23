/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <WebKitLegacy/DOMNode.h>

@class DOMCSSStyleDeclaration, NSString;

@interface DOMElement : DOMNode

@property (copy, readonly) NSString *tagName;
@property (readonly) DOMCSSStyleDeclaration *style;
@property (readonly) int offsetLeft;
@property (readonly) int offsetTop;
@property (readonly) int offsetWidth;
@property (readonly) int offsetHeight;
@property (readonly) int clientLeft;
@property (readonly) int clientTop;
@property (readonly) int clientWidth;
@property (readonly) int clientHeight;
@property int scrollLeft;
@property int scrollTop;
@property (readonly) int scrollWidth;
@property (readonly) int scrollHeight;
@property (readonly) DOMElement *offsetParent;
@property (copy) NSString *innerHTML;
@property (copy) NSString *outerHTML;
@property (copy) NSString *className;
@property (copy, readonly) NSString *innerText;
@property (readonly) DOMElement *previousElementSibling;
@property (readonly) DOMElement *nextElementSibling;
@property (readonly) DOMElement *firstElementChild;
@property (readonly) DOMElement *lastElementChild;
@property (readonly) unsigned int childElementCount;
@property (readonly) struct CGRect boundsInRootViewSpace;

+ (id)_DOMElementFromJSContext:(struct OpaqueJSContext *)arg1 value:(struct OpaqueJSValue *)arg2;

- (void)remove;
- (_Bool)matches:(id)arg1;
- (struct __CTFont *)_font;
- (id)children;
- (id)getAttribute:(id)arg1;
- (_Bool)isFocused;
- (void)setAttribute:(id)arg1 value:(id)arg2;
- (void)blur;
- (void)focus;
- (id)getElementsByTagName:(id)arg1;
- (int)structuralComplexityContribution;
- (_Bool)hasAttribute:(id)arg1;
- (id)_getURLAttribute:(id)arg1;
- (id)getElementsByTagNameNS:(id)arg1 localName:(id)arg2;
- (id)getElementsByClassName:(id)arg1;
- (id)querySelector:(id)arg1;
- (id)querySelectorAll:(id)arg1;
- (id)getElementsByTagNameNS:(id)arg1:(id)arg2;
- (id)classList;
- (id)uiactions;
- (void)setUiactions:(id)arg1;
- (void)removeAttribute:(id)arg1;
- (id)getAttributeNode:(id)arg1;
- (id)setAttributeNode:(id)arg1;
- (id)removeAttributeNode:(id)arg1;
- (id)getAttributeNS:(id)arg1 localName:(id)arg2;
- (void)setAttributeNS:(id)arg1 qualifiedName:(id)arg2 value:(id)arg3;
- (void)removeAttributeNS:(id)arg1 localName:(id)arg2;
- (id)getAttributeNodeNS:(id)arg1 localName:(id)arg2;
- (id)setAttributeNodeNS:(id)arg1;
- (_Bool)hasAttributeNS:(id)arg1 localName:(id)arg2;
- (void)scrollIntoView:(_Bool)arg1;
- (void)scrollIntoViewIfNeeded:(_Bool)arg1;
- (void)scrollByLines:(int)arg1;
- (void)scrollByPages:(int)arg1;
- (id)closest:(id)arg1;
- (_Bool)webkitMatchesSelector:(id)arg1;
- (void)webkitRequestFullScreen:(unsigned short)arg1;
- (void)webkitRequestFullscreen;
- (void)setAttribute:(id)arg1:(id)arg2;
- (id)getAttributeNS:(id)arg1:(id)arg2;
- (void)setAttributeNS:(id)arg1:(id)arg2:(id)arg3;
- (void)removeAttributeNS:(id)arg1:(id)arg2;
- (id)getAttributeNodeNS:(id)arg1:(id)arg2;
- (_Bool)hasAttributeNS:(id)arg1:(id)arg2;

@end

/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <WebKitLegacy/DOMNode.h>

@class DOMCSSStyleDeclaration, DOMElement, NSString;

@interface DOMAttr : DOMNode

@property (copy, readonly) NSString *name;
@property (readonly) _Bool specified;
@property (copy) NSString *value;
@property (readonly) DOMElement *ownerElement;
@property (readonly) DOMCSSStyleDeclaration *style;

- (_Bool)isId;

@end

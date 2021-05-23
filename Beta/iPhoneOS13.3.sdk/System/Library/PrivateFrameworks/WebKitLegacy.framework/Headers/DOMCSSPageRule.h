/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <WebKitLegacy/DOMCSSRule.h>

@class DOMCSSStyleDeclaration, NSString;

@interface DOMCSSPageRule : DOMCSSRule

@property (copy) NSString *selectorText;
@property (readonly) DOMCSSStyleDeclaration *style;

@end

/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <WebKitLegacy/DOMCSSRule.h>

@class DOMCSSStyleSheet, DOMMediaList, NSString;

@interface DOMCSSImportRule : DOMCSSRule

@property (copy, readonly) NSString *href;
@property (readonly) DOMMediaList *media;
@property (readonly) DOMCSSStyleSheet *styleSheet;

@end

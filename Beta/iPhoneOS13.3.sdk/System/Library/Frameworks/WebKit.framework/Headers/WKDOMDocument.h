/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <WebKit/WKDOMNode.h>

@class WKDOMElement;

@interface WKDOMDocument : WKDOMNode

@property (readonly) WKDOMElement *body;

- (id)createElement:(id)arg1;
- (id)createTextNode:(id)arg1;
- (id)createDocumentFragmentWithMarkupString:(id)arg1 baseURL:(id)arg2;
- (id)createDocumentFragmentWithText:(id)arg1;
- (id)parserYieldToken;

@end

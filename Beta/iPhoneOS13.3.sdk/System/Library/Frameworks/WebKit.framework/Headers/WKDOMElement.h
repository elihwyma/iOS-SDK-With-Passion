/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <WebKit/WKDOMNode.h>

@class NSString;

@interface WKDOMElement : WKDOMNode

@property (readonly) NSString *tagName;

- (id)getAttribute:(id)arg1;
- (void)setAttribute:(id)arg1 value:(id)arg2;
- (_Bool)hasAttribute:(id)arg1;

@end

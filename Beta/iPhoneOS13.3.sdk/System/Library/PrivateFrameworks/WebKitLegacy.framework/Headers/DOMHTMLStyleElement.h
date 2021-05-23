/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <WebKitLegacy/DOMHTMLElement.h>

@class DOMStyleSheet, NSString;

@interface DOMHTMLStyleElement : DOMHTMLElement

@property _Bool disabled;
@property (copy) NSString *media;
@property (copy) NSString *type;
@property (readonly) DOMStyleSheet *sheet;

- (id)nonce;
- (void)setNonce:(id)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <WebKitLegacy/DOMHTMLElement.h>

@class NSString;

@interface DOMHTMLScriptElement : DOMHTMLElement

@property (copy) NSString *text;
@property (copy) NSString *htmlFor;
@property (copy) NSString *event;
@property (copy) NSString *charset;
@property _Bool defer;
@property (copy) NSString *src;
@property (copy) NSString *type;

- (id)nonce;
- (void)setNonce:(id)arg1;
- (_Bool)async;
- (void)setAsync:(_Bool)arg1;
- (id)crossOrigin;
- (void)setCrossOrigin:(id)arg1;

@end

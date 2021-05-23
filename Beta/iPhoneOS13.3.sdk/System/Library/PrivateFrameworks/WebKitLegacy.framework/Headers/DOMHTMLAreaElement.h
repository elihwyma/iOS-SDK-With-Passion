/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <WebKitLegacy/DOMHTMLElement.h>

@class NSString, NSURL;

@interface DOMHTMLAreaElement : DOMHTMLElement

@property (copy) NSString *alt;
@property (copy) NSString *coords;
@property _Bool noHref;
@property (copy) NSString *shape;
@property (copy) NSString *target;
@property (copy) NSString *accessKey;
@property (copy, readonly) NSURL *absoluteLinkURL;
@property (copy) NSString *href;
@property (copy, readonly) NSString *protocol;
@property (copy, readonly) NSString *host;
@property (copy, readonly) NSString *hostname;
@property (copy, readonly) NSString *port;
@property (copy, readonly) NSString *pathname;
@property (copy, readonly) NSString *search;
@property (copy, readonly) NSString *hashName;

- (id)ping;
- (id)origin;
- (id)rel;
- (void)setRel:(id)arg1;
- (id)absoluteQuadsWithOwner:(id)arg1;
- (void)setPing:(id)arg1;
- (id)relList;
- (struct CGRect)boundingBoxWithOwner:(id)arg1;
- (struct _WKQuad)absoluteQuadWithOwner:(id)arg1;
- (id)boundingBoxesWithOwner:(id)arg1;

@end

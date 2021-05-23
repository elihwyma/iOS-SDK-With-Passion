/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <WebKitLegacy/DOMHTMLElement.h>

@class NSString, NSURL;

@interface DOMHTMLAnchorElement : DOMHTMLElement

@property (copy) NSString *charset;
@property (copy) NSString *coords;
@property (copy) NSString *hreflang;
@property (copy) NSString *name;
@property (copy) NSString *rel;
@property (copy) NSString *rev;
@property (copy) NSString *shape;
@property (copy) NSString *target;
@property (copy) NSString *type;
@property (copy) NSString *accessKey;
@property (copy, readonly) NSString *text;
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
- (id)download;
- (void)setDownload:(id)arg1;
- (void)setPing:(id)arg1;
- (id)relList;

@end

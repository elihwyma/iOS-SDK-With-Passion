/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <WebKitLegacy/DOMHTMLElement.h>

@class DOMStyleSheet, NSString, NSURL;

@interface DOMHTMLLinkElement : DOMHTMLElement

@property _Bool disabled;
@property (copy) NSString *charset;
@property (copy) NSString *href;
@property (copy) NSString *hreflang;
@property (copy) NSString *media;
@property (copy) NSString *rel;
@property (copy) NSString *rev;
@property (copy) NSString *target;
@property (copy) NSString *type;
@property (readonly) DOMStyleSheet *sheet;
@property (copy, readonly) NSURL *absoluteLinkURL;

- (_Bool)_mediaQueryMatchesForOrientation:(int)arg1;
- (_Bool)_mediaQueryMatches;
- (id)relList;
- (id)crossOrigin;
- (void)setCrossOrigin:(id)arg1;
- (id)as;
- (void)setAs:(id)arg1;

@end

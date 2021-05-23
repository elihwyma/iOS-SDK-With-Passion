/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <WebKitLegacy/DOMDocument.h>

@class DOMHTMLCollection, NSString;

@interface DOMHTMLDocument : DOMDocument

@property (readonly) DOMHTMLCollection *embeds;
@property (readonly) DOMHTMLCollection *plugins;
@property (readonly) DOMHTMLCollection *scripts;
@property (readonly) int width;
@property (readonly) int height;
@property (copy) NSString *dir;
@property (copy) NSString *designMode;
@property (copy, readonly) NSString *compatMode;
@property (copy) NSString *bgColor;
@property (copy) NSString *fgColor;
@property (copy) NSString *alinkColor;
@property (copy) NSString *linkColor;
@property (copy) NSString *vlinkColor;

- (void)clear;
- (void)open;
- (void)close;
- (void)write:(id)arg1;
- (id)createDocumentFragmentWithMarkupString:(id)arg1 baseURL:(id)arg2;
- (id)createDocumentFragmentWithText:(id)arg1;
- (id)_createDocumentFragmentWithMarkupString:(id)arg1 baseURLString:(id)arg2;
- (id)_createDocumentFragmentWithText:(id)arg1;
- (void)writeln:(id)arg1;
- (void)captureEvents;
- (void)releaseEvents;

@end

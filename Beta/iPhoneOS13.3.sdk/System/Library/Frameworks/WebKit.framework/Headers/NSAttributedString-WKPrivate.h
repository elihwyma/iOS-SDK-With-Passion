/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSAttributedString.h>

@interface NSAttributedString (WKPrivate)

+ (void)_loadFromHTMLWithOptions:(id)arg1 contentLoader:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)loadFromHTMLWithRequest:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)loadFromHTMLWithFileURL:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)loadFromHTMLWithString:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)loadFromHTMLWithData:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

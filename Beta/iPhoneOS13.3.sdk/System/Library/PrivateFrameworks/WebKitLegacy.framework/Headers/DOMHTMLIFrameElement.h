/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <WebKitLegacy/DOMHTMLElement.h>

@class DOMAbstractView, DOMDocument, NSString, WebFrame;

@interface DOMHTMLIFrameElement : DOMHTMLElement

@property (nonatomic, readonly) WebFrame *contentFrame;
@property (copy) NSString *align;
@property (copy) NSString *frameBorder;
@property (copy) NSString *height;
@property (copy) NSString *longDesc;
@property (copy) NSString *marginHeight;
@property (copy) NSString *marginWidth;
@property (copy) NSString *name;
@property (copy) NSString *scrolling;
@property (copy) NSString *src;
@property (copy) NSString *width;
@property (readonly) DOMDocument *contentDocument;
@property (readonly) DOMAbstractView *contentWindow;

- (int)structuralComplexityContribution;
- (id)sandbox;
- (void)setSandbox:(id)arg1;
- (id)srcdoc;
- (void)setSrcdoc:(id)arg1;

@end

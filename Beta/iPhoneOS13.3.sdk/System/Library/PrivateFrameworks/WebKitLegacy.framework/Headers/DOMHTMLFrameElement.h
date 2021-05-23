/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <WebKitLegacy/DOMHTMLElement.h>

@class DOMAbstractView, DOMDocument, NSString, WebFrame;

@interface DOMHTMLFrameElement : DOMHTMLElement

@property (nonatomic, readonly) WebFrame *contentFrame;
@property (copy) NSString *frameBorder;
@property (copy) NSString *longDesc;
@property (copy) NSString *marginHeight;
@property (copy) NSString *marginWidth;
@property (copy) NSString *name;
@property _Bool noResize;
@property (copy) NSString *scrolling;
@property (copy) NSString *src;
@property (readonly) DOMDocument *contentDocument;
@property (readonly) DOMAbstractView *contentWindow;
@property (copy) NSString *location;
@property (readonly) int width;
@property (readonly) int height;

- (int)structuralComplexityContribution;

@end

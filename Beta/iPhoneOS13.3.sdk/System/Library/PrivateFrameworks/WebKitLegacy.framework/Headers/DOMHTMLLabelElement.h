/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <WebKitLegacy/DOMHTMLElement.h>

@class DOMHTMLFormElement, NSString;

@interface DOMHTMLLabelElement : DOMHTMLElement

@property (readonly) DOMHTMLFormElement *form;
@property (copy) NSString *htmlFor;
@property (copy) NSString *accessKey;

- (id)control;

@end

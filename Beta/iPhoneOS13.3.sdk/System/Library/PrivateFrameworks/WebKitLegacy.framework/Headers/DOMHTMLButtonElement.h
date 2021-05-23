/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <WebKitLegacy/DOMHTMLElement.h>

@class DOMHTMLFormElement, NSString;

@interface DOMHTMLButtonElement : DOMHTMLElement

@property _Bool autofocus;
@property _Bool disabled;
@property (readonly) DOMHTMLFormElement *form;
@property (copy) NSString *type;
@property (copy) NSString *name;
@property (copy) NSString *value;
@property (readonly) _Bool willValidate;
@property (copy) NSString *accessKey;

- (int)structuralComplexityContribution;
- (void)click;

@end

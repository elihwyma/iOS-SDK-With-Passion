/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <WebKitLegacy/DOMHTMLElement.h>

@class DOMHTMLFormElement, NSString;

@interface DOMHTMLOptionElement : DOMHTMLElement

@property _Bool disabled;
@property (readonly) DOMHTMLFormElement *form;
@property (copy) NSString *label;
@property _Bool defaultSelected;
@property _Bool selected;
@property (copy) NSString *value;
@property (copy, readonly) NSString *text;
@property (readonly) int index;

@end

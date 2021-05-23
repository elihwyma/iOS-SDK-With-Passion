/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <WebKitLegacy/DOMHTMLElement.h>

@class DOMHTMLCollection, NSString;

@interface DOMHTMLFormElement : DOMHTMLElement

@property (copy) NSString *acceptCharset;
@property (copy) NSString *action;
@property (copy) NSString *enctype;
@property (copy) NSString *encoding;
@property (copy) NSString *method;
@property (copy) NSString *name;
@property (copy) NSString *target;
@property (readonly) DOMHTMLCollection *elements;
@property (readonly) int length;

- (void)reset;
- (int)structuralComplexityContribution;
- (id)autocomplete;
- (void)setAutocomplete:(id)arg1;
- (_Bool)noValidate;
- (void)setNoValidate:(_Bool)arg1;
- (void)submit;
- (_Bool)checkValidity;

@end

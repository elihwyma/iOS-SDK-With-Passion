/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <WebKitLegacy/DOMHTMLElement.h>

@class DOMHTMLFormElement, DOMHTMLOptionsCollection, NSString;

@interface DOMHTMLSelectElement : DOMHTMLElement

@property _Bool autofocus;
@property _Bool disabled;
@property (readonly) DOMHTMLFormElement *form;
@property _Bool multiple;
@property (copy) NSString *name;
@property int size;
@property (copy, readonly) NSString *type;
@property (readonly) DOMHTMLOptionsCollection *options;
@property (readonly) int length;
@property int selectedIndex;
@property (copy) NSString *value;
@property (readonly) _Bool willValidate;

- (void)remove:(int)arg1;
- (void)_activateItemAtIndex:(int)arg1;
- (void)_activateItemAtIndex:(int)arg1 allowMultipleSelection:(_Bool)arg2;
- (unsigned int)completeLength;
- (id)listItemAtIndex:(int)arg1;
- (id)item:(unsigned int)arg1;
- (int)structuralComplexityContribution;
- (id)namedItem:(id)arg1;
- (void)add:(id)arg1 before:(id)arg2;
- (void)add:(id)arg1:(id)arg2;

@end

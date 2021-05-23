/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <WebKitLegacy/DOMHTMLElement.h>

@class DOMHTMLCollection, NSString;

@interface DOMHTMLTableSectionElement : DOMHTMLElement

@property (copy) NSString *align;
@property (copy) NSString *ch;
@property (copy) NSString *chOff;
@property (copy) NSString *vAlign;
@property (readonly) DOMHTMLCollection *rows;

- (id)insertRow:(int)arg1;
- (void)deleteRow:(int)arg1;

@end

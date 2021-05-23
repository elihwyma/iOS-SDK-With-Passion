/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <WebKitLegacy/DOMHTMLElement.h>

@class DOMHTMLFormElement, NSString;

@interface DOMHTMLTextAreaElement : DOMHTMLElement

@property _Bool autofocus;
@property _Bool disabled;
@property (readonly) DOMHTMLFormElement *form;
@property (copy) NSString *name;
@property _Bool readOnly;
@property int rows;
@property int cols;
@property (copy, readonly) NSString *type;
@property (copy) NSString *defaultValue;
@property (copy) NSString *value;
@property (readonly) _Bool willValidate;
@property int selectionStart;
@property int selectionEnd;
@property (copy) NSString *accessKey;

- (void)select;
- (id)labels;
- (_Bool)required;
- (void)setRequired:(_Bool)arg1;
- (void)setPlaceholder:(id)arg1;
- (id)placeholder;
- (int)maxLength;
- (void)setMaxLength:(int)arg1;
- (_Bool)_isEdited;
- (id)startPosition;
- (id)endPosition;
- (int)_autocapitalizeType;
- (int)structuralComplexityContribution;
- (id)autocomplete;
- (void)setAutocomplete:(id)arg1;
- (id)dirName;
- (void)setDirName:(id)arg1;
- (id)selectionDirection;
- (void)setSelectionDirection:(id)arg1;
- (void)setRangeText:(id)arg1;
- (void)setRangeText:(id)arg1 start:(unsigned int)arg2 end:(unsigned int)arg3 selectionMode:(id)arg4;
- (void)setSelectionRange:(int)arg1 end:(int)arg2;
- (id)wrap;
- (void)setWrap:(id)arg1;
- (unsigned int)textLength;

@end

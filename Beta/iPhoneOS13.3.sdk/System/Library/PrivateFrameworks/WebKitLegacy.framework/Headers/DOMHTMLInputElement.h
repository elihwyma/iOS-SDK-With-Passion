/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <WebKitLegacy/DOMHTMLElement.h>

@class DOMFileList, DOMHTMLFormElement, NSString, NSURL, UITextInputPasswordRules;

@interface DOMHTMLInputElement : DOMHTMLElement

@property (copy) NSString *accept;
@property (copy) NSString *alt;
@property _Bool autofocus;
@property _Bool defaultChecked;
@property _Bool checked;
@property _Bool disabled;
@property (readonly) DOMHTMLFormElement *form;
@property (retain) DOMFileList *files;
@property _Bool indeterminate;
@property int maxLength;
@property _Bool multiple;
@property (copy) NSString *name;
@property _Bool readOnly;
@property (copy) NSString *size;
@property (copy) NSString *src;
@property (copy) NSString *type;
@property (copy) NSString *defaultValue;
@property (copy) NSString *value;
@property (readonly) _Bool willValidate;
@property int selectionStart;
@property int selectionEnd;
@property (copy) NSString *align;
@property (copy) NSString *useMap;
@property (copy) NSString *accessKey;
@property (copy, readonly) NSString *altDisplayString;
@property (copy, readonly) NSURL *absoluteImageURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic) long long spellCheckingType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartInsertDeleteType;
@property (nonatomic) long long keyboardType;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long returnKeyType;
@property (nonatomic) _Bool enablesReturnKeyAutomatically;
@property (nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
@property (copy, nonatomic) NSString *textContentType;
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;

- (void)select;
- (void)setMax:(id)arg1;
- (id)max;
- (id)pattern;
- (id)step;
- (id)list;
- (unsigned int)width;
- (unsigned int)height;
- (void)setWidth:(unsigned int)arg1;
- (void)setHeight:(unsigned int)arg1;
- (void)setMin:(id)arg1;
- (id)min;
- (id)labels;
- (_Bool)required;
- (void)setRequired:(_Bool)arg1;
- (void)setPlaceholder:(id)arg1;
- (id)placeholder;
- (void)insertTextSuggestion:(id)arg1;
- (void)setValueAsNumberWithChangeEvent:(double)arg1;
- (void)setValueWithChangeEvent:(id)arg1;
- (double)valueAsNumber;
- (_Bool)_isEdited;
- (id)_autofillContext;
- (id)startPosition;
- (id)endPosition;
- (int)_autocapitalizeType;
- (_Bool)_isTextField;
- (int)structuralComplexityContribution;
- (_Bool)capture;
- (void)setStep:(id)arg1;
- (void)click;
- (id)autocomplete;
- (void)setAutocomplete:(id)arg1;
- (_Bool)checkValidity;
- (id)dirName;
- (void)setDirName:(id)arg1;
- (id)formAction;
- (void)setFormAction:(id)arg1;
- (id)formEnctype;
- (void)setFormEnctype:(id)arg1;
- (id)formMethod;
- (void)setFormMethod:(id)arg1;
- (_Bool)formNoValidate;
- (void)setFormNoValidate:(_Bool)arg1;
- (id)formTarget;
- (void)setFormTarget:(id)arg1;
- (void)setPattern:(id)arg1;
- (double)valueAsDate;
- (void)setValueAsDate:(double)arg1;
- (void)setValueAsNumber:(double)arg1;
- (id)validationMessage;
- (id)selectionDirection;
- (void)setSelectionDirection:(id)arg1;
- (_Bool)incremental;
- (void)setIncremental:(_Bool)arg1;
- (void)setCapture:(_Bool)arg1;
- (void)stepUp:(int)arg1;
- (void)stepDown:(int)arg1;
- (void)setCustomValidity:(id)arg1;
- (void)setRangeText:(id)arg1;
- (void)setRangeText:(id)arg1 start:(unsigned int)arg2 end:(unsigned int)arg3 selectionMode:(id)arg4;
- (void)setSelectionRange:(int)arg1 end:(int)arg2;
- (void)setValueForUser:(id)arg1;
- (_Bool)_isAutofilled;
- (void)_setAutofilled:(_Bool)arg1;

@end

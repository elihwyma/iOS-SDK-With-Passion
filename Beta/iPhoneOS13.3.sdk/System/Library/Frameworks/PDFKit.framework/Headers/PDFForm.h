/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

@class PDFFormPrivateVars;

__attribute__((visibility("hidden")))
@interface PDFForm : NSObject

{
    PDFFormPrivateVars *_private;
}

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDocument:(id)arg1;
- (void)setDocument:(id)arg1;
- (id)document;
- (struct __CFDictionary *)createDictionaryRef;
- (id)stringValueForFieldNamed:(id)arg1;
- (void)setStringValue:(id)arg1 forFieldNamed:(id)arg2 postFormChangeNotification:(_Bool)arg3;
- (id)fieldNamed:(id)arg1;
- (void)addFormField:(id)arg1;
- (void)_commonResetForm:(id)arg1 inclusive:(_Bool)arg2;
- (void)addNeedsAppearanceToDictionaryRef:(struct __CFDictionary *)arg1;
- (id)fieldNames;
- (id)defaultStringValueForFieldNamed:(id)arg1;
- (struct CGPDFString *)defaultDAStringRef;
- (void)removeFormFieldWithFieldName:(id)arg1;
- (void)resetFormForFields:(id)arg1;
- (void)resetFormExcludingFields:(id)arg1;

@end

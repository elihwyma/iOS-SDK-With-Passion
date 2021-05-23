/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

@class PDFFormFieldPrivateVars;

__attribute__((visibility("hidden")))
@interface PDFFormField : NSObject

{
    PDFFormFieldPrivateVars *_private;
}

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)stringValue;
- (void)setStringValue:(id)arg1;
- (void)commonInit;
- (long long)buttonType;
- (void)setDocument:(id)arg1;
- (id)document;
- (id)fieldName;
- (void)setFieldName:(id)arg1;
- (struct __CFDictionary *)dictionaryRef;
- (struct __CFDictionary *)createDictionaryRef;
- (void)addFieldTypeToDictionaryRef:(struct __CFDictionary *)arg1;
- (id)initWithAnnotation:(id)arg1;
- (void)addFieldNameToDictionaryRef:(struct __CFDictionary *)arg1;
- (id)initWithFormDictionary:(struct CGPDFDictionary *)arg1;
- (id)defaultStringValue;
- (void)clearDictionaryRef;
- (int)fieldType;
- (_Bool)writeDefaultValue;
- (void)setFieldType:(int)arg1;
- (void)setButtonType:(long long)arg1;
- (void)setDefaultStringValue:(id)arg1;
- (void)setWriteDefaultValue:(_Bool)arg1;
- (void)addNameValueToDictionaryRef:(struct __CFDictionary *)arg1;
- (void)addStringValueToDictionaryRef:(struct __CFDictionary *)arg1;
- (void)addNameDefaultValueToDictionaryRef:(struct __CFDictionary *)arg1;
- (void)addStringDefaultValueToDictionaryRef:(struct __CFDictionary *)arg1;
- (void)commonCreateDictionaryRef:(struct __CFDictionary *)arg1;

@end

/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

@class NSString, PDFDocument;

__attribute__((visibility("hidden")))
@interface PDFFormFieldPrivateVars : NSObject

{
    PDFDocument *document;
    struct CGRect bounds;
    int fieldType;
    long long buttonType;
    NSString *fieldName;
    NSString *stringValue;
    NSString *defaultStringValue;
    _Bool writeDefaultValue;
    struct __CFDictionary *dictionary;
}

@end

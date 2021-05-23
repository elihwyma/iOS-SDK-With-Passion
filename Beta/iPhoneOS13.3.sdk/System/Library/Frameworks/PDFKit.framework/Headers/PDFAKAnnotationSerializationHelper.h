/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface PDFAKAnnotationSerializationHelper : NSObject

+ (void)addAKAnnotation:(id)arg1 toAnnotationDictionary:(struct __CFDictionary *)arg2;
+ (id)akAnnotationFromCGPDFAnnotation:(struct CGPDFAnnotation *)arg1 andDictionary:(struct CGPDFDictionary *)arg2;
+ (_Bool)_annotationClassHasSeniority:(id)arg1;
+ (_Bool)_shouldUseAKAnnotation:(id)arg1 toRepresentCGPDFDictionary:(struct CGPDFDictionary *)arg2;

@end

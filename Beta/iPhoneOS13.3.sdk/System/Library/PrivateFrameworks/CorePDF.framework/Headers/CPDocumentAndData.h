/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CPDocumentAndData : NSObject

{
    struct CGPDFDocument *_document;
    struct __CFData *_sourceData;
}

@property (retain) struct CGPDFDocument *document;
@property (retain) struct __CFData *sourceData;

- (void)dealloc;

@end

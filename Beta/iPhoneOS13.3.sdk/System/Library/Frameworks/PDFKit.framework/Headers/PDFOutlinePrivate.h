/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, PDFAction, PDFDocument, PDFOutline;

__attribute__((visibility("hidden")))
@interface PDFOutlinePrivate : NSObject

{
    PDFDocument *document;
    NSString *title;
    PDFAction *action;
    PDFOutline *parent;
    NSMutableArray *children;
    _Bool childrenLoaded;
    struct __CFDictionary *dictionary;
    _Bool open;
    struct CGPDFDictionary *srcDictionary;
}

@end

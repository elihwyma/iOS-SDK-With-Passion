/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, WFPDFContentStream, WFPDFDocument;

@interface WFPDFPage : NSObject

{
    WFPDFContentStream *_contentStream;
    NSDictionary *_dictionary;
    struct CGPDFPage *_pageRef;
    WFPDFDocument *_document;
}

@property (nonatomic, readonly) struct CGPDFPage *pageRef;
@property (weak, nonatomic, readonly) WFPDFDocument *document;
@property (nonatomic, readonly) int rotation;
@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic, readonly) WFPDFContentStream *contentStream;
@property (nonatomic, readonly) NSString *text;

- (void)dealloc;
- (struct CGRect)boundsForBox:(int)arg1;
- (void)drawInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;
- (id)initWithPageRef:(struct CGPDFPage *)arg1 document:(id)arg2;
- (struct CGAffineTransform)drawingTransformForBox:(int)arg1 rect:(struct CGRect)arg2 rotation:(int)arg3 preservingAspectRatio:(_Bool)arg4;

@end

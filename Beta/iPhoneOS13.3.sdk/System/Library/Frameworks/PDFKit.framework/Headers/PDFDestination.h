/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

@class PDFDestinationPrivate, PDFPage;

@interface PDFDestination : NSObject

{
    PDFDestinationPrivate *_private;
}

@property (weak, nonatomic, readonly) PDFPage *page;
@property (nonatomic, readonly) struct CGPoint point;
@property (nonatomic) double zoom;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (int)type;
- (long long)compare:(id)arg1;
- (void)commonInit;
- (id)document;
- (id)initWithDictionary:(struct CGPDFDictionary *)arg1 forDocument:(id)arg2;
- (const struct __CFArray *)createArrayRef;
- (id)initWithPage:(id)arg1 atPoint:(struct CGPoint)arg2;

@end

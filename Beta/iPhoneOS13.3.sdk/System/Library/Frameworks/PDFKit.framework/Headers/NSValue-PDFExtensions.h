/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSValue.h>

@interface NSValue (PDFExtensions)

+ (id)PDFKitValueWithPDFRect:(struct CGRect)arg1;
+ (id)PDFKitValueWithPDFPoint:(struct CGPoint)arg1;

- (struct CGRect)PDFKitPDFRectValue;
- (struct CGPoint)PDFKitPDFPointValue;

@end

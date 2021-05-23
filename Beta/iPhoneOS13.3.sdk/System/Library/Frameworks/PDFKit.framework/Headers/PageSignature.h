/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

@class CALayer, PDFAnnotation;

__attribute__((visibility("hidden")))
@interface PageSignature : NSObject

{
    PDFAnnotation *annotation;
    CALayer *signatureLayer;
}

@end

/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

@class NSArray, PDFAnnotation;

__attribute__((visibility("hidden")))
@interface PDFBorderPrivateVars : NSObject

{
    PDFAnnotation *annotation;
    long long style;
    double hCornerRadius;
    double vCornerRadius;
    double lineWidth;
    long long dashCount;
    NSArray *dashPattern;
    double *dashPatternRaw;
}

@end

/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

@class PDFAnnotation;

__attribute__((visibility("hidden")))
@interface PDFAnnotationChangePrivate : NSObject

{
    int changeType;
    PDFAnnotation *annotation;
    unsigned long long changeTimestamp;
}

@end

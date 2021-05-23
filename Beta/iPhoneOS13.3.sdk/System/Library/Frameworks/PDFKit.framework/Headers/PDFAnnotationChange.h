/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

@class PDFAnnotation, PDFAnnotationChangePrivate;

__attribute__((visibility("hidden")))
@interface PDFAnnotationChange : NSObject

{
    PDFAnnotationChangePrivate *_private;
}

@property (nonatomic, readonly) int changeType;
@property (retain, nonatomic, readonly) PDFAnnotation *annotation;
@property (nonatomic, readonly) unsigned long long changeTimestamp;

- (id)description;
- (id)initWithAddedAnnotation:(id)arg1;
- (id)initWithChangedAnnotation:(id)arg1;
- (id)initWithRemovedAnnotation:(id)arg1;
- (id)initWithReorderedAnnotation:(id)arg1;
- (id)initWithReorderedAndChangedAnnotation:(id)arg1;

@end

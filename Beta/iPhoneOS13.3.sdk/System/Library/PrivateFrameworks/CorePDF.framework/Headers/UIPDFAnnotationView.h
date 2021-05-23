/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <UIKit/UIView.h>

@class UIPDFAnnotation;

__attribute__((visibility("hidden")))
@interface UIPDFAnnotationView : UIView

{
    UIPDFAnnotation *_annotation;
}

@property (nonatomic) UIPDFAnnotation *annotation;

@end

/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

@class CALayer, NSMutableArray, PDFAnnotation, PDFMarkupMenuView, PDFView, UIMenuItem;

__attribute__((visibility("hidden")))
@interface PDFViewControllerPrivate : NSObject

{
    PDFView *view;
    struct CGRect viewMarquee;
    CALayer *marqueeEffect;
    PDFAnnotation *activeAnnotation;
    unsigned long long textSelectionMenu;
    NSMutableArray *textSelectionMenuItems;
    UIMenuItem *highlightItem;
    UIMenuItem *showMarkupMenuItem;
    PDFMarkupMenuView *markupMenuView;
    double longPressGestureStartTime;
    _Bool didPostPDFExtensionViewAnnotationLongPress;
}

@end

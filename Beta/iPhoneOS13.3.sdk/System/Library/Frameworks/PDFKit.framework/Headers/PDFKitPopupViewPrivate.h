/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

@class NSString, NSUndoManager, PDFAnnotation, PDFPageView, PDFView, UITextView, UIViewController;

__attribute__((visibility("hidden")))
@interface PDFKitPopupViewPrivate : NSObject

{
    PDFAnnotation *parentAnnotation;
    PDFPageView *pageView;
    PDFView *view;
    UITextView *popupTextView;
    NSUndoManager *popupTextViewUndoManager;
    UIViewController *popupController;
    NSString *contents;
    _Bool deviceIsiPhone;
    _Bool deviceIsiPad;
}

@end

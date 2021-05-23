/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

@class NSExtension, NSString, PDFExtensionTopView, PDFPageLabelView, PDFPanGestureRecognizer, PDFPasswordViewController, UILongPressGestureRecognizer, UIScrollView, UITapGestureRecognizer;

@protocol PDFExtensionProtocol, PDFHostViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface PDFHostViewControllerPrivate : NSObject

{
    NSExtension *extension;
    id <PDFExtensionProtocol> extensionProxy;
    UIScrollView *hostScrollView;
    id <PDFHostViewControllerDelegate> hostViewControllerDelegate;
    PDFExtensionTopView *topView;
    PDFPasswordViewController *passwordViewController;
    NSString *password;
    PDFPageLabelView *pageLabelView;
    _Bool isUnlocked;
    long long currentPageIndex;
    long long pageCount;
    struct CGSize documentViewSize;
    double minScaleFactor;
    double maxScaleFactor;
    _Bool hasSelection;
    struct CGPoint topLeftSelectionPoint;
    struct CGPoint bottomRightSelectionPoint;
    UITapGestureRecognizer *tapGestureRecognizer;
    UITapGestureRecognizer *doubleTapGestureRecognizer;
    UILongPressGestureRecognizer *longPressGestureRecognizer;
    PDFPanGestureRecognizer *panGestureRecognizer;
    struct CGRect insetBoundsInDocument;
    struct CGRect scrollViewFrame;
    struct UIEdgeInsets contentInset;
    struct UIEdgeInsets pdfSafeAreaInsets;
    double horizontalScaleFactor;
    struct CGPoint documentViewCenter;
    _Bool pdfViewIsRotating;
    _Bool pdfViewNeedsUpdate;
    _Bool hostScrollViewObserverIsActive;
    CDUnknownBlockType snapshotCompletion;
}

@end

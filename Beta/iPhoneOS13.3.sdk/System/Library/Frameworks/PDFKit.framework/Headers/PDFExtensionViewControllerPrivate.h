/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, PDFSelection, PDFView;

@protocol PDFHostProtocol;

__attribute__((visibility("hidden")))
@interface PDFExtensionViewControllerPrivate : NSObject

{
    id <PDFHostProtocol> hostProxy;
    PDFView *pdfView;
    struct CGSize documentViewSize;
    NSString *searchString;
    PDFSelection *searchSelection;
    NSMutableArray *searchResults;
    _Bool didCancelActiveSearch;
    long long currentGestureState;
    _Bool hasSelection;
    struct CGPoint topLeftSelectionPoint;
    struct CGPoint bottomRightSelectionPoint;
}

@end

/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

@class NSLock, PDFDocument;

__attribute__((visibility("hidden")))
@interface PDFViewLayoutPrivate : NSObject

{
    id delegate;
    _Bool delegateKnowsMargins;
    _Bool delegateKnowsDisplayMode;
    _Bool delegateKnowsDisplayAsBook;
    _Bool delegateKnowsDisplayBox;
    _Bool delegateKnowsDisplayRTL;
    _Bool delegateKnowsDisplaysDirection;
    _Bool delegateKnowsDocumentMargins;
    _Bool delegateKnowsIsUsingPageViewController;
    PDFDocument *document;
    unsigned long long pageCount;
    NSLock *pageLayoutLock;
    struct CGRect *pageLayoutBounds;
    struct CGSize singlePageContinuousSize;
    struct CGSize twoUpContinousSize;
    long long cachedContinuousSizeDisplayDirection;
}

@end

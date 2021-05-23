/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

@class PDFRevealManagerPrivate;

__attribute__((visibility("hidden")))
@interface PDFRevealManager : NSObject

{
    PDFRevealManagerPrivate *_private;
}

- (void)reset;
- (id)initWithPDFView:(id)arg1;
- (id)PDFRVPresentingContextAtPoint:(struct CGPoint)arg1;
- (id)PDFRVPresenter;
- (id)PDFRVDocumentContextForPage:(id)arg1;

@end

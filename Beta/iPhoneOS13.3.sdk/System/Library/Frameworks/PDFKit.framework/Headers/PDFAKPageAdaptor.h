/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

@class AKPageModelController, PDFAKPageAdaptorPrivate, PDFPage;

__attribute__((visibility("hidden")))
@interface PDFAKPageAdaptor : NSObject

{
    PDFAKPageAdaptorPrivate *_private;
}

@property (weak, nonatomic, readonly) PDFPage *pdfPage;
@property (nonatomic, readonly) AKPageModelController *akPageModelController;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)teardown;
- (void)_teardown;
- (void)initializeExifAndScaleOnAnnotation:(id)arg1;
- (id)initWithPDFPage:(id)arg1 pageModelController:(id)arg2;
- (void)_startObservingPageModel;
- (void)_stopObservingPageModel;
- (void)_annotationsWereRemoved:(id)arg1;
- (void)_annotationsWereAdded:(id)arg1;
- (id)initWithPDFPage:(id)arg1;
- (void)pdfPage:(id)arg1 didAddAnnotation:(id)arg2;
- (void)pdfPage:(id)arg1 didRemoveAnnotation:(id)arg2;
- (void)pdfPageWasRotated:(id)arg1;

@end

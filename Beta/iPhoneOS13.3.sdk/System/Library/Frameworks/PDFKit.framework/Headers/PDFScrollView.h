/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <UIKit/UIScrollView.h>

#import <PDFKit/Swift-Protocol.h>

@class NSString, PDFScrollViewPrivate;

__attribute__((visibility("hidden")))
@interface PDFScrollView : UIScrollView <Swift>

{
    PDFScrollViewPrivate *_private;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)updateLayout;
- (void)setDocument:(id)arg1;
- (void)setPDFView:(id)arg1;
- (void)centerAlign;
- (id)pdfDocumentView;
- (void)setForcesTopAlignment:(_Bool)arg1;

@end

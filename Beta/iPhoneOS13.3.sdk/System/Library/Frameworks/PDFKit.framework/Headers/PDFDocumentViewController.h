/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <UIKit/UIPageViewController.h>

#import <PDFKit/Swift-Protocol.h>

@class NSString, PDFDocumentViewControllerPrivate;

__attribute__((visibility("hidden")))
@interface PDFDocumentViewController : UIPageViewController <Swift>

{
    PDFDocumentViewControllerPrivate *_private;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (double)scaleFactor;
- (void)setScaleFactor:(double)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)viewWillLayoutSubviews;
- (id)scrollView;
- (id)currentPage;
- (void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2;
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViews;
- (id)selection;
- (id)document;
- (void)setSelection:(id)arg1;
- (id)pageViewForPageAtIndex:(unsigned long long)arg1;
- (double)autoScaleFactor;
- (void)setAutoScales:(_Bool)arg1;
- (void)setMinScaleFactor:(double)arg1 withMaxScaleFactor:(double)arg2;
- (id)pageForPoint:(struct CGPoint)arg1 nearest:(_Bool)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toPage:(id)arg2;
- (void)_setupDocument;
- (void)_documentChanged;
- (id)_pageViewControllerCreate:(int)arg1;
- (void)_updateCurrentPageViewController:(id)arg1;
- (void)willForceUpdate;
- (void)forceUpdateActivePageIndex:(unsigned long long)arg1 withMaxDuration:(double)arg2;
- (struct CGPoint)_convertPoint:(struct CGPoint)arg1 toPDFPageViewController:(id)arg2;
- (struct CGPoint)_convertPoint:(struct CGPoint)arg1 fromPDFPageViewController:(id)arg2;
- (id)_pageViewController:(id)arg1 nextViewController:(int)arg2 forViewController:(id)arg3;
- (void)_documentWasUnlocked;
- (void)_loadDocument;
- (id)findPageViewControllerForPageIndex:(long long)arg1;
- (_Bool)hasBackgroundImage;
- (void)goToPage:(id)arg1 direction:(long long)arg2 animated:(_Bool)arg3;
- (id)backgroundImageForPage:(id)arg1 withQuality:(int *)arg2;
- (void)recieveBackgroundImage:(id)arg1 atBackgroundQuality:(int)arg2 forPage:(id)arg3;
- (void)didInsertPage:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)didRemovePage:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)initWithPDFView:(id)arg1 andNavigationOrientation:(long long)arg2 withRenderingProperties:(id)arg3 andOptions:(id)arg4;
- (double)minScaleFactor;
- (double)maxScaleFactor;
- (void)setDisplaysRTL:(_Bool)arg1;
- (void)setScrollViewScrollEnabled:(_Bool)arg1;
- (void)updateScrollViews;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromPage:(id)arg2;

@end

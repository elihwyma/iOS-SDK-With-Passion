//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class PDFExtensionViewControllerPrivate;

@interface PDFExtensionViewController : UIViewController
{
    PDFExtensionViewControllerPrivate *_private;
}

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
// - (void).cxx_destruct;
- (void)_annotationLongPressNotification:(id)arg1;
- (void)_annotationHitNotification:(id)arg1;
- (void)_textSelectionDidCopyDataNotification:(id)arg1;
- (void)_textSelectionDidCopyStringNotification:(id)arg1;
- (void)_textSelectionShowTextSelectionMenu:(id)arg1;
- (void)_selectionPointsChangedNotification:(id)arg1;
- (void)_selectionChangedNotification:(id)arg1;
- (void)_pdfViewZoomToRect:(id)arg1;
- (void)_goToDestination:(id)arg1;
- (void)_goToPage:(id)arg1;
- (void)_pageChangedNotification:(id)arg1;
- (void)documentDidEndDocumentFind:(id)arg1;
- (void)didMatchString:(id)arg1;
- (void)_updateTextSelectionPoints;
- (void)_updatePageCount;
- (void)_zoomToRect:(CGRect)arg1;
- (void)_updateDocumentIsLocked;
- (void)_setupDocumentViewSize;
- (void)unlockWithPassword:(id)arg1;
- (void)selectAll;
- (void)copy;
- (void)snapshotViewRect:(CGRect)arg1 forWidth:(double)arg2 afterScreenUpdates:(BOOL)arg3;
- (void)handleGesture:(NSUInteger)arg1 state:(long long)arg2 location:(CGPoint)arg3 locationOfFirstTouch:(CGPoint)arg4;
- (void)setMaximumZoomScale:(double)arg1;
- (void)setMinimumZoomScale:(double)arg1;
- (void)updatePDFViewLayout:(CGRect)arg1 scrollViewFrame:(CGRect)arg2 safeAreaInsets:(UIEdgeInsets)arg3 zoomScale:(double)arg4;
- (void)goToPageIndex:(long long)arg1;
- (void)clearSearchHighlights;
- (void)focusOnSearchResultAtIndex:(NSUInteger)arg1;
- (void)cancelFindStringWithHighlightsCleared:(BOOL)arg1;
- (void)cancelFindString;
- (void)findString:(id)arg1 withOptions:(NSUInteger)arg2;
- (void)setDocumentData:(id)arg1;
- (void)setupPDFView;
- (void)viewDidLoad;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MarkupUI/MUContentViewController.h>

#import <MarkupUI/MUContentViewControllerProtocol-Protocol.h>
#import <MarkupUI/PDFAKControllerDelegateProtocol-Protocol.h>
#import <MarkupUI/PDFViewDelegatePrivate-Protocol.h>
#import <MarkupUI/_UIViewBoundingPathChangeObserver-Protocol.h>

@class MUPDFPageLabelView, NSArray, NSLayoutConstraint, NSString, PDFDocument, PDFPage, PDFThumbnailView, PDFView, UIScrollView, UIView;

@interface MUPDFContentViewController : MUContentViewController <PDFAKControllerDelegateProtocol, PDFViewDelegatePrivate, _UIViewBoundingPathChangeObserver, MUContentViewControllerProtocol>
{
    PDFDocument *_pdfDocument;
    BOOL _showsThumbnailView;
    BOOL _navigationModeHorizontal;
    BOOL _forcesPDFViewTopAlignment;
    BOOL _constraintsAreHorizontal;
    BOOL _viewIsTransitioningBetweenSizes;
    BOOL _viewTransitionPreviousAutoscalingState;
    BOOL _didSetup;
    NSArray *_sourceContentReplacedAnnotationMaps;
    PDFView *_pdfView;
    PDFThumbnailView *_thumbnailView;
    NSUInteger _inkStyle;
    UIView *_thumbnailViewHolder;
    NSArray *_thumbnailViewHolderConstraints;
    NSLayoutConstraint *_thumbnailViewHolderRevealConstraint;
    MUPDFPageLabelView *_pageLabelView;
    PDFPage *_viewTransitionPageToCenter;
    double _viewTransitionPreviousScale;
    CGPoint _viewTransitionPointOnPageToCenter;
    UIEdgeInsets _edgeInsets;
    UIEdgeInsets _cachedThumnailViewInsets;
}

@property(nonatomic) UIEdgeInsets cachedThumnailViewInsets; // @synthesize cachedThumnailViewInsets=_cachedThumnailViewInsets;
@property BOOL didSetup; // @synthesize didSetup=_didSetup;
@property BOOL viewTransitionPreviousAutoscalingState; // @synthesize viewTransitionPreviousAutoscalingState=_viewTransitionPreviousAutoscalingState;
@property double viewTransitionPreviousScale; // @synthesize viewTransitionPreviousScale=_viewTransitionPreviousScale;
@property CGPoint viewTransitionPointOnPageToCenter; // @synthesize viewTransitionPointOnPageToCenter=_viewTransitionPointOnPageToCenter;
@property __weak PDFPage *viewTransitionPageToCenter; // @synthesize viewTransitionPageToCenter=_viewTransitionPageToCenter;
@property BOOL viewIsTransitioningBetweenSizes; // @synthesize viewIsTransitioningBetweenSizes=_viewIsTransitioningBetweenSizes;
@property(retain) MUPDFPageLabelView *pageLabelView; // @synthesize pageLabelView=_pageLabelView;
@property(retain) NSLayoutConstraint *thumbnailViewHolderRevealConstraint; // @synthesize thumbnailViewHolderRevealConstraint=_thumbnailViewHolderRevealConstraint;
@property(retain) NSArray *thumbnailViewHolderConstraints; // @synthesize thumbnailViewHolderConstraints=_thumbnailViewHolderConstraints;
@property BOOL constraintsAreHorizontal; // @synthesize constraintsAreHorizontal=_constraintsAreHorizontal;
@property(retain) UIView *thumbnailViewHolder; // @synthesize thumbnailViewHolder=_thumbnailViewHolder;
@property(nonatomic) NSUInteger inkStyle; // @synthesize inkStyle=_inkStyle;
@property(nonatomic) BOOL forcesPDFViewTopAlignment; // @synthesize forcesPDFViewTopAlignment=_forcesPDFViewTopAlignment;
@property(retain) PDFThumbnailView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(retain) PDFView *pdfView; // @synthesize pdfView=_pdfView;
@property(nonatomic) BOOL navigationModeHorizontal; // @synthesize navigationModeHorizontal=_navigationModeHorizontal;
@property(nonatomic) BOOL showsThumbnailView; // @synthesize showsThumbnailView=_showsThumbnailView;
@property(retain) NSArray *sourceContentReplacedAnnotationMaps; // @synthesize sourceContentReplacedAnnotationMaps=_sourceContentReplacedAnnotationMaps;
@property(nonatomic) UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(readonly) PDFDocument *pdfDocument; // @synthesize pdfDocument=_pdfDocument;
// - (void).cxx_destruct;
- (CGAffineTransform)_compensatingAffineTransformForPage:(id)arg1;
- (void)_userChangedScrollViewMagnificationNotification:(id)arg1;
- (void)_updateMinMaxZoomFactor;
- (CGSize)_medianSizeForCurrentDocumentInPDFViewWithGetter:(id /* CDUnknownBlockType */)arg1;
- (void)_recoverFromRotation;
- (void)_prepareToRotate;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)highlight:(id)arg1;
- (id)contentSnapshot;
- (CGRect)visibleContentRectInCoordinateSpace:(id)arg1;
- (CGRect)visibleContentRect;
- (void)_updatePageNumberOverlayToPage:(NSUInteger)arg1 animate:(BOOL)arg2;
- (void)pdfDocumentDidUnlock:(id)arg1;
- (void)pdfViewDidChangeCurrentPage:(id)arg1;
- (void)uninstallAllAnnotationControllerOverlays;
- (void)_teardownPDFViewIfNecessary;
- (void)_createPDFView;
@property(readonly, nonatomic) NSString *documentUnlockedWithPassword;
- (void)_updateThumbnailViewAppearance;
- (void)_updateThumbnailViewHolderConstraints;
- (BOOL)_updateCachedThumbnailViewInsetsDidChangeRight;
- (void)_boundingPathMayHaveChangedForView:(id)arg1 relativeToBoundsOriginOnly:(BOOL)arg2;
- (void)_updatePDFViewDisplayMode;
@property(readonly) NSUInteger pageCount;
- (void)controllerWillDismissSignatureManagerView:(id)arg1;
- (void)controllerWillShowSignatureManagerView:(id)arg1;
- (void)controllerWillDismissSignatureCaptureView:(id)arg1;
- (void)controllerWillShowSignatureCaptureView:(id)arg1;
- (void)penStrokeCompletedForAnnotationController:(id)arg1;
- (void)editCheckpointReachedForAnnotationController:(id)arg1;
- (void)annotationController:(id)arg1 detectedEditOfType:(NSUInteger)arg2;
- (id)popoverPresentingViewControllerForAnnotationController:(id)arg1;
- (void)positionSketchOverlay:(id)arg1 forAnnotationController:(id)arg2;
- (id)controller:(id)arg1 willSetToolbarItems:(id)arg2;
- (BOOL)shouldShowAnnotationsOfType:(id)arg1;
- (BOOL)PDFView:(id)arg1 shouldHandleLink:(id)arg2;
@property(readonly, nonatomic) UIScrollView *contentViewScrollView;
@property(readonly, nonatomic) long long defaultToolTag;
- (CGSize)idealContentSizeForScreenSize:(CGSize)arg1 windowDecorationSize:(CGSize)arg2;
- (CGSize)contentSize;
- (void)loadContentWithCompletionBlock:(id /* CDUnknownBlockType */)arg1;
- (void)teardown;
- (void)setup;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (BOOL)_canShowWhileLocked;
- (void)dealloc;
- (id)initWithPDFDocument:(id)arg1 delegate:(id)arg2;

@end


/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <Foundation/NSObject.h>

@class AKController, AKGeometryHelper, AKHighlightColorEditorController, AKInkPageOverlayController, AKLayerPresentationManager, AKPageModelController, NSMutableDictionary, NSString, UIView;

@protocol AKControllerDelegateProtocol;

@interface AKPageController : NSObject

{
    _Bool _shouldPixelate;
    _Bool _superviewDependentThingsWereSetUp;
    AKController *_controller;
    AKPageModelController *_pageModelController;
    unsigned long long _pageIndex;
    AKGeometryHelper *_geometryHelper;
    AKLayerPresentationManager *_layerPresentationManager;
    UIView *_overlayView;
    AKInkPageOverlayController *_inkPageOverlayController;
    id _inkOverlayDrawingUndoTarget;
    AKHighlightColorEditorController *_highlightColorEditorController;
    NSMutableDictionary *_noteEditors;
}

@property (weak) AKController *controller;
@property (retain) AKPageModelController *pageModelController;
@property (retain, nonatomic) AKGeometryHelper *geometryHelper;
@property _Bool superviewDependentThingsWereSetUp;
@property (retain, nonatomic) AKLayerPresentationManager *layerPresentationManager;
@property (retain, nonatomic) AKInkPageOverlayController *inkPageOverlayController;
@property (retain, nonatomic) id inkOverlayDrawingUndoTarget;
@property (retain, nonatomic) UIView *overlayView;
@property (retain) NSMutableDictionary *noteEditors;
@property unsigned long long pageIndex;
@property _Bool shouldPixelate;
@property (nonatomic, readonly) AKHighlightColorEditorController *highlightColorEditorController;
@property (readonly) id <AKControllerDelegateProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)pageControllerWithController:(id)arg1 andPageModelController:(id)arg2;

- (void)teardown;
- (double)modelBaseScaleFactor;
- (long long)currentModelToScreenExifOrientation;
- (double)currentModelToScreenScaleFactor;
- (struct CGRect)maxPageRect;
- (id)initForTesting;
- (struct CGPoint)convertPointFromOverlayToModel:(struct CGPoint)arg1;
- (struct CGRect)convertRectFromOverlayToModel:(struct CGRect)arg1;
- (_Bool)relinquishablesAreLoaded;
- (struct CGRect)stickyViewFrameForNoteEditor:(id)arg1;
- (id)stickyContainerForNoteEditor:(id)arg1;
- (unsigned long long)edgeForNoteEditor:(id)arg1;
- (id)popoverPresentingViewControllerForNoteEditor:(id)arg1;
- (void)noteEditorWillDismissFromFullScreen:(id)arg1;
- (void)noteEditorDidBeginEditing:(id)arg1;
- (void)noteEditorDidFinishEditing:(id)arg1;
- (void)noteEditorWillPresentFullScreen:(id)arg1;
- (void)updateOverlayViewLayers;
- (struct CGRect)convertRectFromModelToOverlay:(struct CGRect)arg1;
- (void)openPopoverForHighlightAnnotation:(id)arg1;
- (void)unregisterFromUndoManager:(id)arg1;
- (void)setupRelinquishables;
- (void)releaseRelinquishables;
- (struct CGRect)visibleRectOfOverlay;
- (void)addPopupToAnnotation:(id)arg1 openPopup:(_Bool)arg2;
- (void)removeNoteFromAnnotation:(id)arg1;
- (struct CGPoint)convertPointFromModelToOverlay:(struct CGPoint)arg1;
- (id)newContentSnapshotPDFDataAtScale:(double)arg1 inRect:(struct CGRect)arg2 forLoupeAnnotation:(id)arg3;
- (id)annotationsBeneathLoupe:(id)arg1;
- (_Bool)editorController:(id)arg1 isRightArrowEnabledForAnnotation:(id)arg2;
- (void)editorController:(id)arg1 setTheme:(id)arg2 forAnnotation:(id)arg3;
- (void)editorController:(id)arg1 deleteAnnotation:(id)arg2;
- (void)editorController:(id)arg1 editNote:(id)arg2;
- (void)editorController:(id)arg1 showEditMenuForAnnotation:(id)arg2;
- (id)_initWithController:(id)arg1 andPageModelController:(id)arg2;
- (void)updateScaleFactor:(double)arg1 isLiveUpdate:(_Bool)arg2 forceUpdate:(_Bool)arg3;
- (id)_popoverPresentingViewController;
- (void)openPopupAnnotation:(id)arg1;
- (_Bool)handleEditAnnotation:(id)arg1;
- (void)overlayWasAddedToSuperview;

@end

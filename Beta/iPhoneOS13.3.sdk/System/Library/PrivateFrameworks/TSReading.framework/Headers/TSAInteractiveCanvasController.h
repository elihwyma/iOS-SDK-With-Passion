/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSWPInteractiveCanvasController.h>

@class TSAAnnotationController, TSDDrawableInfo;

@interface TSAInteractiveCanvasController : TSWPInteractiveCanvasController

{
    TSDDrawableInfo *mInfoBeingDragInserted;
    _Bool _supportsAnnotations;
    TSAAnnotationController *_annotationController;
}

@property (retain, nonatomic) TSDDrawableInfo *infoBeingDragInserted;
@property (nonatomic, readonly) _Bool wantsCanvasReferenceController;
@property (nonatomic, readonly) _Bool supportsAnnotations;
@property (nonatomic, readonly) TSAAnnotationController *annotationController;

- (void)dealloc;
- (void)teardown;
- (void)selectAll:(id)arg1;
- (void)asyncProcessChanges:(id)arg1 forChangeSource:(id)arg2;
- (id)additionalVisibleInfosForCanvas:(id)arg1;
- (_Bool)wantsHyperlinkGestureRecognizer;
- (void)loadDocument;
- (void)unloadDocument;
- (void)handleHyperlinkGesture:(id)arg1;
- (void)willSetDocumentToMode:(long long)arg1 fromMode:(long long)arg2 animated:(_Bool)arg3;
- (void)didSetDocumentToMode:(long long)arg1 fromMode:(long long)arg2 animated:(_Bool)arg3;
- (_Bool)hasEmptyWPSelection;
- (_Bool)requiresSimilarInfos;
- (_Bool)hasInspectableSelection;
- (id)p_activeTextRep;

@end

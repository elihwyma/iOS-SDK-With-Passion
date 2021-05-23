/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <Foundation/NSObject.h>

@class AKAnnotation, AKController, AKInkOverlayView, NSMutableSet, PKStroke;

@protocol AKSidecarControllerDelegate, OS_dispatch_source;

@interface AKSidecarController : NSObject

{
    PKStroke *_currentStroke;
    AKInkOverlayView *_currentStrokeOverlay;
    NSObject<OS_dispatch_source> *_strokeTimer;
    _Bool _updatingModel;
    _Bool _ignoreKVOChanges;
    _Bool _handlingUndoRedo;
    _Bool _sendingCheckpoint;
    _Bool _needCheckpointSent;
    NSMutableSet *_coalescingAnnotationKeys;
    AKAnnotation *_coalescingAnnotationChange;
    NSObject<OS_dispatch_source> *_coalescingAnnotationSource;
    _Bool _shouldObserveEdits;
    id <AKSidecarControllerDelegate> _delegate;
    AKController *_controller;
    NSMutableSet *_observedPageModelControllers;
    NSMutableSet *_observedAnnotations;
}

@property (weak) AKController *controller;
@property (retain) NSMutableSet *observedPageModelControllers;
@property (retain) NSMutableSet *observedAnnotations;
@property (nonatomic) _Bool shouldObserveEdits;
@property (weak, nonatomic) id <AKSidecarControllerDelegate> delegate;

+ (_Bool)validateInitialMessage:(id)arg1 applicationData:(CDUnknownBlockType)arg2;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)done;
- (id)initWithController:(id)arg1;
- (_Bool)handleLiveStrokeBegan:(id)arg1 onInkOverlayView:(id)arg2;
- (void)handleLiveStrokeComplete:(_Bool)arg1;
- (void)observePageControllerRequestsDisableRegistration:(id)arg1;
- (void)observePageControllerRequestsEnableRegistration:(id)arg1;
- (void)_startObservingAnnotations:(id)arg1;
- (void)_stopObservingAnnotations:(id)arg1;
- (void)startObservingPageModelController:(id)arg1;
- (void)stopObservingPageModelController:(id)arg1;
- (void)_handleUndo:(id)arg1;
- (void)_handleRedo:(id)arg1;
- (void)_handleUndoCheckpoint:(id)arg1;
- (void)_actuallySendAnnotationChange;
- (void)_unregisterObservers;
- (void)_registerObservers;
- (unsigned long long)_indexOfAnnotationUUID:(id)arg1 annotations:(id)arg2;
- (void)_handleInternalFailure;
- (void)_handleAnnotationAdd:(id)arg1;
- (void)_handleAnnotationRemove:(id)arg1;
- (void)_handleAnnotationModify:(id)arg1;
- (void)_handleSelectionChanged:(id)arg1;
- (void)_startChangeUndoGroup;
- (id)_inkAnnotationFromPageModelController:(id)arg1;
- (_Bool)_removeAnnotationUUID:(id)arg1 fromPageModelController:(id)arg2;
- (id)_annotationWithUUID:(id)arg1 inPageModelController:(id)arg2;
- (void)_sendDictionary:(id)arg1;
- (void)_handleLiveStrokeUpdate;
- (void)_annotation:(id)arg1 modifiedInPageController:(unsigned long long)arg2 properties:(id)arg3;
- (void)_coalesceAnnotationChange:(id)arg1 keyChange:(id)arg2;
- (void)_annotationsWillBeRemoved:(id)arg1 onPageController:(id)arg2 isUndoingRedoing:(_Bool)arg3;
- (void)_annotationsWereAdded:(id)arg1 onPageController:(id)arg2 isUndoingRedoing:(_Bool)arg3;
- (void)_selectionChangedOnPageController:(id)arg1;
- (void)_annotation:(id)arg1 addedToPageController:(unsigned long long)arg2 selected:(_Bool)arg3 atIndex:(unsigned long long)arg4;
- (void)_annotation:(id)arg1 removedFromPageController:(unsigned long long)arg2;
- (_Bool)_replaceAnnotation:(id)arg1 inPageModelController:(id)arg2;
- (void)handleIncomingOPACKObject:(id)arg1;

@end

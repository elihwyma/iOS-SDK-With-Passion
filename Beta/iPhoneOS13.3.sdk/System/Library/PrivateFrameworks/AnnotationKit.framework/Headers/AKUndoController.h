/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <Foundation/NSObject.h>

@class AKController, NSMapTable, NSMutableSet, NSString, NSUndoManager;

@interface AKUndoController : NSObject

{
    _Bool _externalSourceTrackingChanged;
    _Bool _undoGroupHasChangesToMultipleProperties;
    NSUndoManager *_undoManager;
    AKController *_controller;
    NSMutableSet *_observedPageModelControllers;
    NSMutableSet *_observedAnnotations;
    NSString *_undoGroupPresentablePropertyName;
    NSMapTable *_undoGroupOldPropertiesPerAnnotation;
}

@property (weak) AKController *controller;
@property (retain) NSUndoManager *undoManager;
@property (retain) NSMutableSet *observedPageModelControllers;
@property (retain) NSMutableSet *observedAnnotations;
@property (retain) NSString *undoGroupPresentablePropertyName;
@property _Bool undoGroupHasChangesToMultipleProperties;
@property (retain) NSMapTable *undoGroupOldPropertiesPerAnnotation;
@property _Bool externalSourceTrackingChanged;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithController:(id)arg1;
- (void)observeUndoManagerCheckpoint:(id)arg1;
- (void)observeUndoManagerDetectedEdit:(id)arg1;
- (void)observePageControllerRequestsDisableRegistration:(id)arg1;
- (void)observePageControllerRequestsEnableRegistration:(id)arg1;
- (void)_startObservingAnnotations:(id)arg1;
- (void)_stopObservingAnnotations:(id)arg1;
- (void)_registerUndoForSelectionOnPageModelController:(id)arg1;
- (void)_setAnnotationProperties:(id)arg1;
- (void)_annotationsWillBeRemoved:(id)arg1 onPageController:(id)arg2;
- (void)_annotationsWereAdded:(id)arg1 onPageController:(id)arg2;
- (void)_deleteAnnotationsFromModel:(id)arg1;
- (void)_endEditingOfTextIfAnnotationsDeleted:(id)arg1;
- (void)_addAnnotationsFromModel:(id)arg1;
- (void)_undoActionForSelectionState:(id)arg1;
- (void)startObservingPageModelController:(id)arg1;
- (void)stopObservingPageModelController:(id)arg1;

@end

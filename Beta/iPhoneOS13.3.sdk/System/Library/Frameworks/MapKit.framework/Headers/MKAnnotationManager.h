/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class MKAnnotationView, MKQuadTrie, NSArray, NSHashTable, NSMapTable, NSMutableDictionary, NSMutableSet, NSTimer;

@protocol MKAnnotation, MKAnnotationManagerDelegate, MKAnnotationMarkerContainer, MKAnnotationRepresentation;

__attribute__((visibility("hidden")))
@interface MKAnnotationManager : NSObject

{
    id <MKAnnotationMarkerContainer> _container;
    id <MKAnnotationManagerDelegate> _delegate;
    _Bool _annotationRepresentationsAreAddedImmediately;
    NSTimer *_updateVisibleTimer;
    MKQuadTrie *_annotations;
    NSHashTable *_visibleAnnotations;
    NSMutableSet *_pendingAnnotations;
    NSMutableSet *_disallowAnimationAnnotations;
    NSMutableSet *_invalidCoordinateAnnotations;
    id <MKAnnotation> _selectedAnnotation;
    id <MKAnnotation> _draggedAnnotation;
    NSMapTable *_annotationsToRepresentations;
    NSMutableSet *_annotationRepresentations;
    NSMapTable *_reusableAnnotationRepresentations;
    NSMutableSet *_pendingRemovalAnnotationRepresentations;
    NSMutableDictionary *_registeredIdentifierToRepresentationClasses;
    NSHashTable *_allClusterAnnotations;
    _Bool _isChangingCoordinate;
    _Bool _isDeferringContainerSelection;
    _Bool _deferredContainerSelectionAnimated;
    MKAnnotationView *_userLocationView;
}

@property (weak, nonatomic) id <MKAnnotationMarkerContainer> container;
@property (weak, nonatomic) id <MKAnnotationManagerDelegate> delegate;
@property (nonatomic) _Bool annotationRepresentationsAreAddedImmediately;
@property (weak, nonatomic) id <MKAnnotation> draggedAnnotation;
@property (weak, nonatomic, readonly) id <MKAnnotationRepresentation> selectedAnnotationRepresentation;
@property (nonatomic, readonly) NSArray *annotationRepresentations;
@property (nonatomic, readonly) NSArray *annotations;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)addAnnotation:(id)arg1;
- (void)removeAnnotation:(id)arg1;
- (void)updateVisibleAnnotations;
- (void)selectAnnotation:(id)arg1 animated:(_Bool)arg2;
- (void)deselectAnnotation:(id)arg1 animated:(_Bool)arg2;
- (void)addAnnotations:(id)arg1;
- (void)_annotationDidChangeState:(id)arg1 animated:(_Bool)arg2;
- (id)representationForAnnotation:(id)arg1;
- (id)addRepresentationForAnnotation:(id)arg1;
- (void)removeAnnotation:(id)arg1 updateVisible:(_Bool)arg2;
- (id)annotationsInMapRect:(CDStruct_02837cd9)arg1;
- (void)addAnnotation:(id)arg1 allowAnimation:(_Bool)arg2;
- (void)removeAnnotations:(id)arg1;
- (void)replaceAnnotation:(id)arg1 withAnnotation:(id)arg2;
- (void)addRepresentationsForAnnotations:(id)arg1;
- (id)dequeueReusableAnnotationRepresentationWithIdentifier:(id)arg1;
- (void)registerClass:(Class)arg1 forRepresentationReuseIdentifier:(id)arg2;
- (void)showAnnotationsInMapRect:(CDStruct_02837cd9)arg1;
- (_Bool)containsAnnotation:(id)arg1;
- (void)cleanUpAnnotationRepresentationForRemoval:(id)arg1;
- (void)_setupUpdateVisibleAnnotationsTimer;
- (void)_addAnnotation:(id)arg1 updateVisible:(_Bool)arg2;
- (id)_addRepresentationForAnnotation:(id)arg1;
- (void)_removeRepresentationForAnnotation:(id)arg1 fromCull:(_Bool)arg2;
- (void)_removeAnnotation:(id)arg1 updateVisible:(_Bool)arg2 removeFromContainer:(_Bool)arg3;
- (void)configureAnnotationRepresentation:(id)arg1 forAnnotation:(id)arg2;
- (_Bool)annotationIsInternal:(id)arg1;
- (id)newInternalAnnotationRepresentationForInternalAnnotation:(id)arg1;
- (void)configureDefaultAnnotationRepresentation:(id)arg1 forAnnotation:(id)arg2;

@end

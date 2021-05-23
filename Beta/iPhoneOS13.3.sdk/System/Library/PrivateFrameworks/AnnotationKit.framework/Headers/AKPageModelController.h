/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <Foundation/NSObject.h>

@class AKCropAnnotation, AKInkAnnotation, AKStatistics, NSArray, NSMutableOrderedSet, NSMutableSet, NSSet;

@interface AKPageModelController : NSObject

{
    NSMutableOrderedSet *_mutableAnnotations;
    NSMutableSet *_mutableSelectedAnnotations;
    id _representedObject;
    AKCropAnnotation *_cropAnnotation;
    AKInkAnnotation *_inkCanvasAnnotation;
    AKStatistics *_statisticsLogger;
    struct CGRect _appliedCropRect;
}

@property (retain) AKCropAnnotation *cropAnnotation;
@property (retain) AKInkAnnotation *inkCanvasAnnotation;
@property (weak, nonatomic) AKStatistics *statisticsLogger;
@property (weak) id representedObject;
@property (readonly) NSArray *annotations;
@property (readonly) NSSet *selectedAnnotations;
@property struct CGRect appliedCropRect;

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (id)init;
- (void)selectAnnotation:(id)arg1 byExtendingSelection:(_Bool)arg2;
- (void)selectAnnotationsAtIndexes:(id)arg1 byExtendingSelection:(_Bool)arg2;
- (void)removeAllAnnotations;
- (void)setSelectedAnnotations:(id)arg1;
- (_Bool)containsAnnotation:(id)arg1;
- (void)setInkCanvasAnnotationOneTime:(id)arg1;
- (id)selectionStateForUndo;
- (void)restoreSelectionStateForUndo:(id)arg1;
- (void)removeCropToolAnnotation;
- (_Bool)hasMaskBorderAnnotation;
- (void)selectAllAnnotations;
- (id)archivableRepresentation;
- (id)initWithArchivableRepresentation:(id)arg1;
- (void)insertObject:(id)arg1 inAnnotationsAtIndex:(unsigned long long)arg2;
- (void)replaceObjectInAnnotationsAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeObjectFromAnnotationsAtIndex:(unsigned long long)arg1;
- (void)_ensureInkAnnotationIsInFrontWhenEditsAreDone;
- (void)_enableEditObservationForAnnotationIfNew:(id)arg1;
- (void)_logAnnotationAdded:(id)arg1;
- (void)removeAnnotationsAtIndexes:(id)arg1;
- (void)removeSelectedAnnotationsObject:(id)arg1;
- (void)removeSelectedAnnotations:(id)arg1;
- (void)_postSelectedAnnotationsChangedNotification;
- (void)addSelectedAnnotationsObject:(id)arg1;
- (void)addSelectedAnnotations:(id)arg1;
- (void)insertAnnotations:(id)arg1 atIndexes:(id)arg2;
- (void)_coalescedEnsureInkAnnotationIsInFront:(id)arg1;
- (void)replaceAnnotationsAtIndexes:(id)arg1 withAnnotations:(id)arg2;
- (void)intersectSelectedAnnotations:(id)arg1;
- (void)bringSelectedAnnotationsForward;
- (void)bringSelectedAnnotationsToFront;
- (void)sendSelectedAnnotationsBackward;
- (void)sendSelectedAnnotationsToBack;
- (void)addCropToolAnnotation;

@end

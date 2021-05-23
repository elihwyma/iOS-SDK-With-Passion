/*
 Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSString;

@protocol OS_dispatch_semaphore, PXPlacesMapLayoutResult, PXPlacesMapPipelineComponentProvider;

@interface PXPlacesMapInPlaceUpdatePlan : NSObject

{
    NSObject<OS_dispatch_semaphore> *_sema;
    id <PXPlacesMapPipelineComponentProvider> pipelineComponentProvider;
    id <PXPlacesMapLayoutResult> _currentLayoutResult;
    NSMapTable *_currentLayoutItemToAnnotationTable;
}

@property (retain) id <PXPlacesMapLayoutResult> currentLayoutResult;
@property (retain) NSMapTable *currentLayoutItemToAnnotationTable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <PXPlacesMapPipelineComponentProvider> pipelineComponentProvider;

- (id)init;
- (void)reset;
- (id)resultForNewLayoutResult:(id)arg1;
- (id)removalPlanResult;
- (id)annotationForLayoutItem:(id)arg1;
- (id)_changesBetweenSourceLayoutResult:(id)arg1 targetLayoutResult:(id)arg2;

@end
